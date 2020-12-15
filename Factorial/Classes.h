#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ref class Radio {
public:
	int Requests=0;
	int FailedRequests=0;
	void AcceptRequest() {
		this->Requests++;
	}
	void DenyRequest() {
		this->FailedRequests++;
	}
};

//public ref class Song {
//public:
//	String^ Author;
//	String^ Album;
//	String^ Name;
//	String^ Genre;
//	String^ Singers;
//	int Year;
//	int Duration;
//	int Rating;
//	int Plays;
//	Song(String^g, String^ c, String^ a,String^ s,String^ b, int y, int d) {
//	Author = a;
//	Album = b;// Если альбома нет - None 
//	Singers = s;
//	Name = c;
//	Year = y;
//Genre = g;
//	Duration = d;
//	Rating = 0;
//	Plays = 0;	};
//};