/*
 * project.h
 *
 *  Created on: Jun 13, 2020
 *      Author: amonjot
 */

#ifndef PROJECT_H_
#define PROJECT_H_




#include<iostream>    
#include<vector>
#include<string>
using namespace std;

class Movie{      
          
  string name;              //DECLARING ATTRIBUTES OF CLASS
  string rating;
  int watched;
  public:
  
  Movie(string name,string rating,int watched);       //DECLARING OBJECT
  void setname(string namee){name=namee;}             //FUNCTION TO SET NAME  
  string getname(){return name;}                      //FUNCTION TO RETURN NAME OF MOVIE
  void setrating(string ratingg){rating=ratingg;}     //FUNCTION TO SET RATING
  string getrating(){return rating;}                  //FUNCTION TO RETURN RATING
  void setwatched(int watch){watched=watch;}          //FUNCTION TO HOW MANY TIMES MOVIE IS WATCHED
  int getwatched(){return watched;}                   //FUNCTION TO RETURN NUMBER OF TIMES MOVIE IS WATCHED
  void increment(){watched++;}                        //INCREMENT NO OF TIMES MOVIES IS WATCHED BY ONE
  Movie(const Movie &source)                          //COPY CONSTRUCTOR
  :name(source.name),rating(source.rating),watched(source.watched){
  }
};
class Movies{                                     
  public:                                               //DECLARING ATTRIBUTRES OF CLASS
	
  vector<Movie> Movies;
	bool add_Movie(string name,string rating,int watched);    //ADD MOVIE FUNCTION
	bool increment_m(string name);                      //FUCNTION TO ADD MOVIE TO VECTOR
	void display_m();                                   //DISPLAY VECTOR
	void noofmembers();                                  //DISPLAY NO OF MOVIES
};

#endif /* PROJECT_H_ */
