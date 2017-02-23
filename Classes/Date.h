class Date
{
	public:
		Date(int=0, int=0, int=1999);
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
