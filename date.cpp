#include "date.h"
#include <assert.h>

Date::Date(int day, int month, int year):_day(day),_month(month),_year(year){
    bool status = isDate(day, month, year);
    assert(status && "Date is not valid");
}

bool isDate(int day, int month, int year) {
    if ((day < 1 ) || (day> 31)) return false;
    if ((month <1) || (month>12)) return false;
    if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day > 30)) return false;
    if (year<0) return false;
    return true;
}

void Date::updateday(int day){
    bool status = isDate(day,_month,_year);
    assert(status && "Date is not valid");
    _day = day;
}

void Date::updatemonth(int month){
    bool status = isDate(_day,month,_year);
    assert(status && "Date is not valid");
    _month = month;
}

void Date::updateyear(int year){
    bool status = isDate(_day,_month,year);
    assert(status && "Date is not valid");
    _year = year;
}

int Date::month() const{
     return _month;
}

int Date::day() const{
     return _day;
}

int Date::year() const{
     return _year;
}
