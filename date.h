#ifndef DATE_H
#define DATE_H

#include <iostream>

	class Date {
	 public:
	  Date(int day =1, int month =1, int year =1);
	  int month() const;
	  int day() const;
	  int year() const;
	  void updateday(int day);
	  void updatemonth(int month);
	  void updateyear(int year);

	 private:
	  int _day;
	  int _month;
	  int _year;
	};
	bool isDate(int day, int month, int year);

#endif \\DATE_H
