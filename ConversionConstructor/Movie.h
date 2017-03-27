#ifndef MOVIE_H
#define MOVIE_H

#include "Book.h"

class Movie
{
	public: 
		Movie(string="", string="", int=0);
		~Movie();
		void print();

	private:
		string title;
		string screenwriter;
		int duration;
};

#endif


