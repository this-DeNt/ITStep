class POINT {

private:

    int x;
    int y;

public:

    POINT() = default;
    POINT(int a, int b);

    void printPOINT() const;
    void initPOINT(int inputA, int inputB);

    POINT operator +(POINT inputPOINT);
    POINT operator +(int inputB);

    POINT operator -(POINT inputPOINT);
    POINT operator -(int inputB);

    int operator *(POINT inputPOINT);
    int operator *(int inputB);

    int operator /(POINT inputPOINTA);

    POINT& operator ++();
    POINT& operator --();
};