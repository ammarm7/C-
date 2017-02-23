//Date.h

class Date
{
	public:
		Date();
		Date(int=0, int=0, int=0);
		void setDate(int, int, int);
		void printShort();
		void printLong();

	private:
		int day;
		int month;
		int year;
		int lastDayInMonth();
		bool leapYear();
		string getMonthStr();
		
};
