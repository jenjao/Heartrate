#include <iostream>
#include <string>

class HeartRates {
	private:
		std::string _first;
		std::string _last;
		int _month;
		int _day;
		int _year;

	public:
		HeartRates (std::string first, std::string last, int month, int day, int year);

		void Date(int month, int day, int year);
		void print() const;
		int checkDay (int testDay) const;
		
		void setFirst (std::string first);
		void setLast (std::string last);
		void setMonth (int month);
		void setDay (int day);
		void setYear (int year);

		std::string getFirst() const;
		std::string getLast() const;
		int getMonth() const;
		int getDay() const;
		int getYear() const;

		int getAge (int month, int day, int year);
		int getMaximumHeartRate (int age);
		int getTargetHeartRate (int _HeartRate);

};		

		

				
