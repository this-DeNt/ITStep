class DATE {

private:

    unsigned int _day;
    unsigned int _month;
    unsigned int _year;

    bool isValidDayMonth();
    bool isValidMonthYear();


public:

    DATE();
    DATE(unsigned int inputDay, unsigned int inputMonth, unsigned int inputYear);

    void dayMonthYearCheckLoop();
    void printDATE();
    
    unsigned int getDay() const;
    unsigned int getMonth() const;
    unsigned int getYear() const;

    void setDay(unsigned int inputDay);
    void setMonth(unsigned int inputMonth);
    void setYear(unsigned int inputYear);

    DATE& operator ++();
    DATE operator ++(int formal);

    DATE& operator --();
    DATE operator --(int formal);

    DATE operator +(unsigned int inputOpValue);
    
    DATE operator -(unsigned int inputOpValue);
    DATE operator -(DATE inputOpDATE);

    DATE& operator +=(unsigned int inputOpValue);
    DATE& operator -=(unsigned int inputOpValue);

    bool operator >(DATE inputOpDATE);
    bool operator <(DATE inputOpDATE);
    bool operator >=(DATE inputOpDATE);
    bool operator <=(DATE inputOpDATE);
    bool operator ==(DATE inputOpDATE);
    bool operator !=(DATE inputOpDATE);
};