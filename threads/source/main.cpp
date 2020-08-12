#include <iostream>		// std::cout
#include <thread>		// std::thread
#include <chrono>		// std::chrono
#include <mutex>        // std::mutex

std::mutex mtx;           // mutex for critical section

void thread_function(std::string text)
{
	while (1)
	{
		mtx.lock(); // thread takes mutex, gaining exclusive access to stdout

		for (std::string::size_type i = 0; i != text.size(); ++i)
		{
			std::cout << text[i];
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
		}

		mtx.unlock(); // release mutex to allow other threads to access stdout
		std::this_thread::sleep_for(std::chrono::milliseconds(10)); // wait to be fair
	}
}

int main()
{
	// spawn new thread called foo
	std::thread foo(thread_function,
			"--------- I'm just a foo --------------\n");

	// spawn new thread called bar
	std::thread bar(thread_function,
			"********* I'm going to the bar ********\n");
	std::cout << "threads main, foo and bar now execute concurrently...\n";

	// detach threads to allow "safe" termination
	foo.join();
	bar.join();

	// send status message and wait
	std::this_thread::sleep_for(std::chrono::seconds(60));

	// end proceedings...
	std::cout << "done.\n";
	return 0;

}
