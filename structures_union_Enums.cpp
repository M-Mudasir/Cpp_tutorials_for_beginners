#include <iostream>
using namespace std;

struct male_employee // basically a class without methods in terms of python
{
    int eID; // and these are the attributes
    char favChar;
    float salary;
} ;
// shortcut
typedef struct female_employee // no same structs can be created
{
    int eID; 
    char favChar;
    float salary;
} ep ; // now instead of writing struct employee, we only have to write ep

union employee // used for memory management, can only use one of the provided
{
    int rice; 
    char car;
    float pounds;
};


int main()
{
    // union employee m1;
    // m1.rice = 100; // by default bhi kuch value hoti hai, agar set na bhi kren to error nhi ayega
    // cout<< m1.rice<< endl;
    // m1.car='c'; //ab rice overwrite ho chuka, and uski value kuch aur(ghalat/ not intended) set ho chuki hogi by default
    // cout<<m1.car<<endl;
    // cout<<m1.rice<<endl;

    // struct male_employee mudasir;
    // mudasir.eID = 1;
    // mudasir.favChar = 'h';
    // mudasir.salary = 100000;
    // cout << "The Value is : " << mudasir.salary << endl;
    // cout << "The Value is : " << mudasir.favChar << endl;
    // cout << "The Value is : " << mudasir.eID << endl;

    // ep hafsa;
    // hafsa.eID = 2;
    // hafsa.favChar = 'm';
    // hafsa.salary = 100000;
    // cout << "The Value is : " << hafsa.salary << endl;
    // cout << "The Value is : " << hafsa.favChar << endl;
    // cout << "The Value is : " << hafsa.eID << endl;
    enum Meal {breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    Meal m1 = lunch;
    cout<< (m1==1)<<endl;
    cout<<lunch;


    return 0;
}