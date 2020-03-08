#include <iostream>
#include <string>
#include "hw3.hpp"

HeartRates::HeartRates (std::string first, std::string last, int month, int day, int year){
	_first = first;
	_last = last;
	Date(month, day, year);
	/*
	_Month = month;
	_Day = day;
	_Year = year;		
	*/
}

/* void HeartRates::Date(int month, int day, int year) {
	
	std::cout << "Enter your birthday (mm/dd/yyyy): ";
	std::cin >> month;
   	std::cout << '/';
	std::cin >> day;
    std::cin << '/';
    std::cout >> year;
	print();
	
	 
	//checks if month and day are not out of bounds
	if (month > 0 && month <= 12) {
		_month = month;
	}
	else {
		std::cout << "Month must be 1-12." << std::endl;
		_month = 1;
	}
	
	_day = checkDay (day);
	if (year > 1920) {
		_year = year;
	}
	else {
		std::cout << "Year must be greater than 1910." << std::endl;
	}
}
*/
int HeartRates::checkMonth (int testMonth) const {
	if (testMonth > 0 && testMonth <= 12) {
		return testMonth;
	}
	else {
		std::cout << "Month must be 1-12." << std::endl;
		return 1;
	}
}

int HeartRates::checkYear (int testYear) const {
	if (testYear > 1920) {
		return testYear;
	}
	else {
		std::cout << "Year must be greater than 1920." << std::endl;
	}
}
	
void HeartRates::print() const {

	std::cout << _month << '/' << _day << '/' << _year << std::endl;

}

int HeartRates::checkDay (int testDay) const {

	const int daysPerMonth [12 + 1] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ( testDay > 0 && testDay <= daysPerMonth[_month]) {
		return testDay;
	}

	if (_month == 2 && testDay == 29 && (_year % 400 == 0 || (_year % 4 == 0 && _year % 100 != 0) )) {
		return testDay;
	}

	else {
		std::cout << "Enter a valid day for the month and year." << std::endl;
		return 1;
	}
}

void HeartRates::setFirst (std::string first) {
	_first = first;
}

void HeartRates::setLast (std::string last) {
	_last = last;
}

void HeartRates::setMonth (int month) {
	_month = month;
}

void HeartRates::setDay (int day) {
	_day = day;
}

void HeartRates::setYear (int year) {
	_year = year;
}

std::string HeartRates::getFirst() const {
	return _first;
}

std::string HeartRates::getLast() const {
	return _last;
}

int HeartRates::getMonth() const {
	return _month;
}

int HeartRates::getDay() const {
	return _day;
}

int HeartRates::getYear() const {
	return _year;
}

int HeartRates::getAge () {
	int month, day, year;
	std::cout << "Please enter today's date (mm dd yyyy)" << std::endl;
	std::cin >> month >> day >> year;

	month = checkMonth(month);
	day = checkDay(day);
	year = checkYear(year);

	int age = year - _year;
		
	if (month < _month) && (day < _day) {
		age--;
	}
	else {
		
	}




	return 0;
}

int HeartRates::getMaximumHeartRate (int age) {

}

int HeartRates::getTargetHeartRate (int _HeartRate) {

}

