#include <iostream>

namespace date{
	class Date {
	 public:
	  Date(int day, int month, int year);
	  int month() const;
	  int day() const;
	  int year() const;
	  void updateday(int day);
	  void updatemonth(int month);
	  void updateyear(int year);
	 private:
	  bool isDate(int day, int month, int year);
	  int _day;
	  int _month;
	  int _year;
	};
}
