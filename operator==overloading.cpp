#include <iostream>
// operator == overloading for two classes

class Logic2;

class Logic1
{
private:
    int var1;

public:
    Logic1(int var1)
    {
        this->var1 = var1;
    }
    friend bool operator==(const Logic2&, const Logic1&);   //for the second class's object == the first class's object
    friend bool operator==(const Logic1&, const Logic2&);   //for the first class's object == the second class's object

};

class Logic2
{
private:
    int var2;

public:
    Logic2(int var2)
    {
        this->var2 = var2;
    }
    friend bool operator==(const Logic2&, const Logic1&);  
    friend bool operator==(const Logic1&, const Logic2&); 
};

bool operator ==(const Logic2& l2, const Logic1& l1)
{
    if (l2.var2 == l1.var1)
    {
        return true;
    }
    return false;
}
bool operator ==(const Logic1& l1, const Logic2& l2)
{
    if (l1.var1 == l2.var2)
    {
        return true;
    }
    return false;
}

int main()
{
	Logic1 l1(5);
	Logic2 l2(5);

	if(l1 == l2)
	{
		std::cout << "True" << std::endl;
	}
	else
	{
		std::cout << "False" << std::endl;
	}

	return 0;
}
