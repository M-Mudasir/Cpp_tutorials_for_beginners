#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    string languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = "python";
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{

    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();

    // int a ;
    // cout << "enter a number till where you want to print: "<< endl;
    // cin>> a;
    // for (int i = 0; i < a; i++)

    // {
    //     cout << a;
    // }
    
    return 0;
}
