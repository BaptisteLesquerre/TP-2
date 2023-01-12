#include <iostream>

#ifndef DATE_H
#define DATE_H

   class Date {
   public:
      Date(int day=1, int month=1, int year = 1);
      int month() const;
      int day() const;
	  int year() const;
      void updateMonth(int month);
      void updateDay(int day);
	  void updateYear(int year);
      void next();
      void back();

      bool operator == (const Date& d) const; // d1 == d2
      bool operator != (const Date& d) const; // d1 != d2
      bool operator < (const Date& d) const;  // d1 <  d2
      bool operator > (const Date& d) const;  // d1 >  d2
      bool operator <= (const Date& d) const; // d1 <= d2
      bool operator >= (const Date& d) const; // d1 <= d2
      Date operator + (const int days) const; // d1 + integer
      Date operator - (const int days) const; // d1 - integer
      Date operator ++ (); // prefix increment: ++date
      Date operator -- (); // prefix decrement: --date
      Date operator ++ (int); // use int paramater for postfix increment: date++
      Date operator -- (int); // use int paramater for postfix decrement: date--

   private:
      int _month;
      int _day;
      int _year;

   };

   bool isDate(int day, int month, int year);
   int getDaysInMonth(int month);
   int dayOfYear(Date d);
   std::string toString(Date d);

#endif // DATE_H
