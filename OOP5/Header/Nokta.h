#ifndef OOP5_NOKTA_H
#define OOP5_NOKTA_H


class Nokta {
private:
    int x,y;
public:
    static int counter;

    Nokta();

    Nokta(int, int);

    ~Nokta();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    void printElements();

    void instaceCount();

    double calculateDistance(Nokta&);

    Nokta add(const Nokta&) const;

};

#endif //OOP5_NOKTA_H
