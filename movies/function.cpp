/*
 * fun.cpp
 *
 *  Created on: Jun 13, 2020
 *      Author: amonjot
 */
#include<iostream>
#include<vector>
#include<string>
#include"project.h"

//adding a movie to movie vector
bool Movies::add_Movie(string namee,string rating,int watched){
for(auto Movie:Movies){
if(Movie.getname()==namee)    //checking if that movie already exists
	return false;}

Movie neww {namee,rating,watched};  
Movies.push_back(neww);
return true;
}
//increment no of times movie is being watched
bool Movies::increment_m(string name){
	for(auto Movie:Movies)
	{
		if(Movie.getname()==name);
		Movie.increment();
		return true;
	}
	return false;
}
// display movie Name,Rating, and how many times it was watched
void Movies::display_m(){
	if (Movies.size() ==0)
		cout<<"sorry no movie to display"<<endl;

else
{
	for(auto Movie:Movies){
		cout<<"Name of movie is "<<Movie.getname()<<endl;
		cout<<"Rating of the movie is "<<Movie.getrating()<<endl;
		cout<<"Movie is watched "<<Movie.getwatched()<<" no of times"<<endl;
		cout<<"============="<<endl;
	}
}
}
// checking how many movies are present in vector
void Movies::noofmembers(){
	int a=0;
	for(auto Movie:Movies)
		a++;
	cout<<"no of movies in your collection is "<<a<<endl;
}
//function to display aspects of movie
void display_Movie(Movie p){
	cout<<"name is "<<p.getname()<<endl;
	cout<<"rating is "<<p.getrating()<<endl;
	cout<<"Movie is watched "<<p.getwatched()<<" times"<<endl;

}
//delegate constructor for class movie
Movie::Movie(string namee,string ratingg,int watched)
:name{namee},rating{ratingg},watched{watched}{

}
