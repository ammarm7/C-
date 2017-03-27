#ifndef BOOK_H
#define BOOK_H

class Book
{
	public:
		Book(int=0, string="Unknown", string="Unknown");	//Constructor
		Book(const Book&);
		Book(const string&);
		~Book();
		void print() const;

	private:
		int id;
		string title;
		string author;
};

#endif
		

