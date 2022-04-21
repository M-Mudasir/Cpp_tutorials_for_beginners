# include <iostream>
using namespace std;

int main(){
    // pointer is a data type that holds the value of other data types
    int a = 123;
    int* b = &a;
    // pr int* b;
    // b = &a;
    // cout <<b<<endl;
    // // & ===> adress of operator
    // cout<<"The address of a is : "<<&a<<endl;
    // cout<< "The address of a is : "<<b<<endl;
    // // * ===> (value at)Derefrence operator
    // cout<< "The value at address is :"<<*b<<endl;
    // a=1;
    // cout<<"The address of a is : "<<&a<<endl;
    // cout<< "The value at address is :"<<*b<<endl;
    // return 0;

    // pointer to pointer
    int** c = &b;
    // cout<< "The address of a is "<< b << endl ;
    // cout<< "the value of a is "<< *b<< endl;
    // cout<< "the address of b is "<< c<<endl;
    // cout << "the value of b(address of a) is "<< *c<<endl;
    // cout << "the value of a(at address stored as value of b) "<< **c<<endl;

    int*** d = &c;
    cout << "the address of c is "<<d<<endl;
    cout << "the value of c(address of b) "<<*d<<endl;
    cout << "the value of b(address of a) "<<**d<<endl;
    cout <<"the value of a "<<***d<<endl;
}