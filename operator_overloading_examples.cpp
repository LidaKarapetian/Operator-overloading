#include <iostream>

class Point
{
    public:
    int age;

    Point()
    {
        age = 0;
    }
    Point(int age)
    {
        this->age = age;
    }

    // overloading operator - 
    Point operator-()
    {
        age = -age;
        return Point(age);
    }

    //overloading operator !=
    bool operator !=(const Point& p1)
    {
        if(age != p1.age)
        {
           return true;
        }
        return false;
    }
    // overloading operator ++
    Point operator++()
    {
        ++age;
        return Point(age);
    }

    // overloading operator +
     Point operator+(const Point&p)
    {
        Point po;
        po.age = this->age + p.age;
        return po;
    }

    //overloading assignment operator =
    void operator=(const Point& p)
    {
        age = p.age;

    }

    //function call overloaded
    void Display()
    {
        std::cout << age << std::endl;
    }

};
//overloading operator << for cout
std::ostream&operator <<(std::ostream& Cout, Point p)
{
    Cout << p.age << std::endl;
    return Cout;
}
int main()
{
    Point p1(2);
    Point p2(9);
    std::cout << p1 + p2;
    return 0;
}