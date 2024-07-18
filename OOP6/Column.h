#ifndef PART1REVIEW_COLUMN_H
#define PART1REVIEW_COLUMN_H


class Column {
private:
    int * data;
    int dimension;
public:
    int getDimension() const;

    void setDimension(int dimension);

public:
    Column();
    Column(int);
    Column(Column&);
    ~Column();

    void set(int,int);
    void printData();

    //Operator Overloading
    Column operator+(const Column&) const;
    Column operator+(const int) const;
    void operator=(const Column&) ;
    const int& operator[](int) const;
    void operator()() const;
    void operator()(int,int);
    void operator++(int);
    void operator++();
    void operator--(int);
    void operator--();

};


#endif //PART1REVIEW_COLUMN_H
