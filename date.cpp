#include <iostream>
#include "date.h"
#include <assert.h> 

    Date::Date(int day, int month, int year) : _month(month), _day(day), _year(year) {
        bool status = isDate(day, month, year);
        //std::cout<< day <<" "<<month<<" "<<year<< std::endl;
        assert(status && "Date is not valid");

    }

    int Date::month() const {
    	return _month;
    }

    int Date::year() const {
    	return _year;
    }


    int Date::day() const {
    	return _day;
    }

    void Date::updateMonth(int month) {
        bool status = isDate(_day, month , _year);
        assert(status==true && "New month is not valid");
        _month = month;
    }

    void Date::updateYear(int year) {
        bool status = isDate(_day, _month, year);
        assert(status==true && "New month is not valid");
        _year = year;
    }

    void Date::updateDay(int day) {
        bool status = isDate(day, _month, _year);
        assert(status==true && "New day is not valid");
        _day = day;
    }

    void Date::next() {
        if ((_month==12) && (_day==31)) {
            _day=1;
            _month=1;
        }
        else if (_day==getDaysInMonth(_month)) {
            _day=1;
            _month++;
        }
        else {
            _day++;
        }
    }

    void Date::back() {
        if ((_month==1) && (_day==1)) {
            _day=31;
            _month=12;
        }
        else if (_day==1) {
            _month--;
            _day=getDaysInMonth(_month);
        }
        else {
            _day--;
        }
    }


    Date Date::operator + (const int days) const {
        if (days <0) { //if days <0, we call Date - (-days)
            return *this - (-days);
        }
        Date tmp = *this; // the current date
        int new_day = tmp._day + days; // the new day is ok if new_day < end of month
        int new_month = tmp._month;
        int days_in_month = getDaysInMonth(tmp._month);
        while (new_day > days_in_month) { // end of the month
            new_day -= days_in_month; // the day in the next month
            new_month++;
            if (new_month > 12) { // end of the year
                new_month = 1;
            }
            //tmp.updateMonth(new_month);
            //days_in_month = getDaysInMonth(tmp._month);
            days_in_month = getDaysInMonth(new_month);
        }
        int new_year = tmp.year(); 
        return Date(new_day, new_month, new_year);
    }

    Date Date::operator ++(int) { // postfix increment
        Date tmp = *this;
        *this = tmp +1;
        return tmp;
    }

    Date Date::operator --(int) { // postfix decrement
        Date tmp = *this;
        *this = *this - 1;
        return tmp;
    }

    Date Date::operator ++() { // prefix increment
        *this = *this + 1;
        return *this;
    }

    Date Date::operator --() { // prefix decrement
        *this = *this - 1;
        return *this;
    }



    Date Date::operator - (const int days) const {
        if (days <0) { //if days <0, we call Date + (-days)
            return *this + (-days);
        }
        int new_month=_month;
        int new_day = day()-days; // the new day is ok if > 0
        while (new_day <=0) {
            if (new_month==1) { // beginning of the year
                new_month=12; // in december
                new_day=31+new_day;
            }
            else { // other months than january
                int days_in_previous_month = getDaysInMonth(Date(new_month-1,1)._month);
                new_day = days_in_previous_month+new_day;
                new_month--;
            }
        }
        return Date(new_month, new_day);
    }

    bool Date::operator == (const Date& d) const { // check for equality
        if ((_day==d._day) && (_month==d._month)) {
            return true;
        }
    return false;
    }

    bool Date::operator !=(const Date& d) const {
        return !(*this==d);
    }

    bool Date::operator < (const Date& d) const {     
        if (month()<d._month) {
            return true;
        }
        else if (_month>d._month) {
            return false;
        } else { // same month
            if (_day<d._day) {
                return true;
            }
            else {
                return false;
            }
        }
        return false;
    }


    bool Date::operator > (const Date& d) const {
        if (*this==d) {
            return false;
        }
        if (*this<d) {
            return false;
        }
        return true;
    }

    bool Date::operator <=(const Date& d) const {
        if (*this==d) {
            return true;
        }
        return (*this<d);
    }

    bool Date::operator >=(const Date& d) const {
        if (*this==d) {
            return true;
        }
        return (*this>d);
    }



    bool isDate(int day, int month, int year) {
        if ((day < 1) || (day>31)) return false;
        if ((month <1) || (month>12)) return false;
        if ((month == 2) && (day > 28)) return false;
        if (((month == 4) || (month == 6) ||
            (month == 9) || (month == 11)) && (day > 30)) return false;
        if (year < 0) return false;
        return true;
    }

    int getDaysInMonth(int month)  {
        assert(((month >=1) && (month<=12)) && "Month is not valid");
        if (month == 2) return 28;
        if ((month == 1 || month == 3 || month == 5 || month == 7
        || month == 8 || month == 10 || month == 12)) return 31;
        return 30;
    }

    int dayOfYear(Date d) {
        auto day=0;
        for (auto i=1;i<d.month();i++) {
            day+=getDaysInMonth(i);
        }
        day+= d.day();
        return day;
    }

    std::string toString(Date d) {
        return std::to_string(d.day()) + "/" + std::to_string(d.month()) ;
    }

    

