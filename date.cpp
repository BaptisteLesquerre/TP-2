#include <iostream>
#include "date.h"
#include <assert.h>

date::Date::Date(int day, int month, int year):_day(day),_month(month),_year(year){
    bool status = isDate(month, day, year);
    assert(status && "Date is not valid");
}

bool date::Date::isDate(int month,int day,int year) {
    if ((day < 1 ) || (day> 31)) return false;
    if ((month <1) || (month>12)) return false;
    if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day > 30)) return false;
    if (year<0) return false;
}

void date::Date::updateday(int day){
    bool status = isDate(day,_month,_year);
    assert(status && "Date is not valid");
    _day = day;
}

void date::Date::updatemonth(int month){
    bool status = isDate(_day,month,year);
    assert(status && "Date is not valid");
    _month = month;
}

void date::Date::updateyear(int year){
    bool status = isDate(_day,_month,year);
    assert(status && "Date is not valid");
    _year = year;
}

int date::Date::month() const{
     return _month;
}

int date::Date::day() const{
     return _day;
}

int date::Date::year() const{
     return _year;
}
