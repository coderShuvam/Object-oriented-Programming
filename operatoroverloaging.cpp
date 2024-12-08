/*Write a c++ program to evaluate following
1. S1+=s2
2. s3= s1+=s2
where s1,s2,s3 object of same class to store any numeric data
evaluate the expression using single += operation overloading function.*/

#include <iostream>
using namespace std;
class abc
{
private:
    float number = 0;

public:
    void indata()
    {
        cout << "Enter The number:: ";
        cin >> number;
    }
    // void operator +=(abc o1)
    // {
    //     number=number+o1.number;
    // }
    abc &operator+=(const abc &o1)
    {
        number += o1.number;
        return *this; // Return the current object
    }
    void display()
    {
        cout << number << endl;
    }
};
int main()
{
    abc s1, s2, s3;
    s1.indata();
    s2.indata();
    // s1.display();
    cout << "Result: ";
    s1 += s2;
    s1.display();
    s1.indata();
    s2.indata();
    cout << "Result: ";
    s3 = s1 += s2;
    s3.display();
}