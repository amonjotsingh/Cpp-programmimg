#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class stores{
    
private:
    string name;
    int rent;
    double dueb;
    
public:
    void setname( string namee){name=namee;}
    void setrent(int rentt){rent= rentt;}
    void setdueb(double due){dueb=due;}

    string getname(){return name;}
    int getrent(){return rent;}
    double getdueb(){return dueb;}

    stores(string namee);
    stores(string namee,int rentt,double due);
    stores(const stores&source);
    ~stores(){cout<<"destructor is called for :"<<name<<endl;}
};

stores::stores(const stores&source):name{source.name},rent{source.rent},dueb{source.dueb}{
    cout<<"copy constructor is called for store:"<<name<<endl;
}

stores::stores(string namee):stores{namee,0,0}{
    cout<<"one arg delegated const is called for:"<<name<<endl;
}

stores::stores(string namee,int rentt,double due):name{namee},rent{rentt},dueb{due}{
    cout<< "three arg constructor is called for : "<<name<<endl;
}

void display(stores s){
    cout<<"name of store is "<<s.getname();
    cout<< "\nmonthly rent of store is "<<s.getrent();
    cout<< " \ndue balance of store is "<<s.getdueb();
    cout<< "\n\n"<<endl;
}

int main()
{
    stores jcy("jcy");
    display(jcy);
    stores kitty("kitty", 550,336);
    display(kitty);
    return 0;
}


