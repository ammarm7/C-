//Books.h
#ifndef Book_H
#define Book_H

class Book
{
	public 
		Book(int=0, string='Unknown", string="Unknown");
		
		~Book();
		void print() const;

	private:
		int id;
		string title;
		string author;
};

#endif
