/*Why use classes instead of structures
Classes and structures are somewhat the same but still, they have some differences.
For example, we cannot hide data in structures which means that everything is public and can be accessed easily
which is a major drawback of the structure because structures cannot be used where data security is a major concern. 
Another drawback of structures is that we cannot add functions in it.*/

#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // prototype
        void getData(){ // definition 
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};
// return type  class name  ::  method name (parameters)
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89; // otherwise it will give a garbage value
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}
