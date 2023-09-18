#include "_Date_Class.h"
#include "_Framework.h"

bool DATE::isValidDayMonth()
{
    if (this->_day > 30 && this->_month % 2 != 0) {

        this->_day -= 30;
        ++this->_month;

        return true;
    }

    if (this->_day > 31 && this->_month % 2 == 0 ) {

        this->_day -= 31;
        ++this->_month;

        return true;
    }

    return false;
}

bool DATE::isValidMonthYear()
{
    if (this->_month > 12) {

        this->_month -= 12;
        ++this->_year;

        return true;
    }

    return false;
}

void DATE::dayMonthYearCheckLoop()
{
    while(this->isValidDayMonth()) {}
    while (this->isValidMonthYear()) {}
}

DATE::DATE() : _day(0), _month(0), _year(0) {}

DATE::DATE(unsigned int inputDay, unsigned int inputMonth, unsigned int inputYear)
{
    this->_day = inputDay;
    this->_month = inputMonth;
    this->_year = inputYear;
}

void DATE::printDATE()
{
    this->dayMonthYearCheckLoop();
    std::cout << ((this->getDay() < 10) ? "0" : "") << this->getDay() << "/" << ((this->getMonth() < 10) ? "0" : "") << this->getMonth() << "/" << this->getYear() << std::endl;
}

unsigned int DATE::getDay() const
{
    return this->_day;
}

unsigned int DATE::getMonth() const
{
    return this->_month;
}

unsigned int DATE::getYear() const
{
    return this->_year;
}

void DATE::setDay(unsigned int inputDay)
{
    this->_day = inputDay;
}

void DATE::setMonth(unsigned int inputMonth)
{
    this->_month = inputMonth;
}

void DATE::setYear(unsigned int inputYear)
{
    this->_year = inputYear;
}

DATE &DATE::operator++()
{
    this->_day += 1;

    return *this;
}

DATE DATE::operator++(int formal)
{
    DATE tempDate(this->_day, this->_month, this->_year);

    this->_day += 1;

    return tempDate;
}

DATE &DATE::operator--()
{
    this->_day -= 1;

    return *this;
}

DATE DATE::operator--(int formal)
{
    DATE tempDate(this->_day, this->_month, this->_year);

    this->_day -= 1;
    
    return tempDate;
}

DATE DATE::operator+(unsigned int inputOpValue)
{
    DATE tempDate(this->_day, this->_month, this->_year);

    tempDate._day += inputOpValue;

    return tempDate;
}

DATE DATE::operator-(unsigned int inputOpValue)
{
    DATE tempDate(this->_day, this->_month, this->_year);

    tempDate._day -= inputOpValue;

    return tempDate;
}

DATE DATE::operator-(DATE inputOpDATE)
{
    DATE tempDate;

    tempDate._day = this->_day - inputOpDATE._day;
    tempDate._month = this->_month;
    tempDate._year = this->_year;

    return tempDate;
}

DATE &DATE::operator+=(unsigned int inputOpValue)
{
    this->_day += inputOpValue;

    return *this;
}

DATE &DATE::operator-=(unsigned int inputOpValue)
{
    this->_day -= inputOpValue;

    return *this;
}

bool DATE::operator>(DATE inputOpDATE)
{
    if (this->_year > inputOpDATE._year) {

        return true;
    }
    else if (this->_month > inputOpDATE._month) {

        return true;
    }
    else if (this->_day > inputOpDATE._day) {

        return true;
    }

    return false;
}

bool DATE::operator<(DATE inputOpDATE)
{
    if (this->_year < inputOpDATE._year) {

        return true;
    }
    else if (this->_month < inputOpDATE._month) {

        return true;
    }
    else if (this->_day < inputOpDATE._day) {

        return true;
    }

    return false;
}

bool DATE::operator>=(DATE inputOpDATE)
{
    if (this->_day == inputOpDATE._day && this->_month == inputOpDATE._month && this->_year == inputOpDATE._year) {

        return true;
    }

    if (this->_year > inputOpDATE._year) {

        return true;
    }
    else if (this->_month > inputOpDATE._month) {

        return true;
    }
    else if (this->_day > inputOpDATE._day) {

        return true;
    }

    return false;
}

bool DATE::operator<=(DATE inputOpDATE)
{
    if (this->_day == inputOpDATE._day && this->_month == inputOpDATE._month && this->_year == inputOpDATE._year) {

        return true;
    }

    if (this->_year < inputOpDATE._year) {

        return true;
    }
    else if (this->_month < inputOpDATE._month) {

        return true;
    }
    else if (this->_day < inputOpDATE._day) {

        return true;
    }

    return false;
}

bool DATE::operator==(DATE inputOpDATE)
{
    if (this->_day == inputOpDATE._day && this->_month == inputOpDATE._month && this->_year == inputOpDATE._year) {

        return true;
    }

    return false;
}

bool DATE::operator!=(DATE inputOpDATE)
{
    if (this->_day == inputOpDATE._day && this->_month == inputOpDATE._month && this->_year == inputOpDATE._year) {

        return false;
    }

    return true;
}
