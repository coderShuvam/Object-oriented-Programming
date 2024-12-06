/*Write a C++ program to create two class DM and DB .
DM consist of metre and centimetre.
DB consist of feet and inch.
Create two objects of two different above classes
add them after suitable conversion and store in an object.*/

#include <iostream>
using namespace std;
class DB;
class DM
{
private:
    float metre;
    float centimetre;

public:
    DM(float m, float cm)
    {
        metre = m;
        centimetre = cm;
    }
    friend DM addobj(const DM &dm,const DB &db);
    void display()
    {
        cout << "Metre::" << metre << " Centimetre::" << centimetre << endl;
    }
};
class DB
{
private:
    float feet;
    float inch;

public:
    DB(float ft, float in)
    {
        feet = ft;
        inch = in;
    }
    friend DM addobj(const DM &dm,const DB &db);
    void display()
    {
        cout << "feet::" << feet << " inch::" << inch << endl;
    }
};
DM addobj(const DM &dm,const DB &db)
{
    float totalcm=dm.metre*100+dm.centimetre;
    float totalin=db.feet*12+db.inch;
    totalcm += totalin*2.54;
    float newmetre=int(totalcm/100);
    float newcm=totalcm-(newmetre*100);
    return DM(newmetre,newcm);
}
int main()
{
    float m,cm,ft,in;
    printf("Enter the values of :\n");
    cout<<"Metre:: ";
    cin>>m;
    cout<<"CentiMetre:: ";
    cin>>cm;
    cout<<"Feet:: ";
    cin>>ft;
    cout<<"inch:: ";
    cin>>in;
    DM obj(m,cm);
    DB obj1(ft,in);
    DM result=addobj(obj,obj1);
    // printf("Value Entered in metre %d and centimetre %d.\n")
    obj.display();
    obj1.display();
    cout<<"After Addition::"<<endl;
    result.display();
    return 0;
}