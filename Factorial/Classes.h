#pragma once
#include <iostream>
#include<string>
using namespace std;
class Radio {
public:
	int Requests;
	int FailedRequests;
};
class Song {
public:
	string Author;
	string Album;
	string Name;
	string Genre;
	int Year;
	int Duration;
	int Rating;
	Song(string a, string b, string c,string g, int y, int d) {
		Author = a;
		Album = b;// Если альбома нет - None 
		Name = c;
		Year = y;
		Genre = g;
		Duration = d;
		Rating = 0;
	};
	bool ChangeRating()
	{
		double tmpV = Rating +0.05;
		bool result = (tmpV >= 1); 
		if (result) Rating = 1;
		else Rating = tmpV;
		return result;
	}
};
bool operator==(Song& x, Song& y) {
	return x.Author == y.Author;
}