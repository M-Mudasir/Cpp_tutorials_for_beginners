#include <iostream>
using namespace std;

int c =69;

int main(){

    // //***************float double literals
    // // int a, b, c;
    
    // // cout<< "Enter the first number: "<< endl;
    // // cin >> a;
    // // cout<< "Enter the second number: "<< endl; // exertion operator
    // // cin >> b;   // insertion operator
    // // c = a+b;
    // // cout<< "THe sum is "<< c <<endl;
    // // cout << "the global c is "<<::c <<endl; //scope resolution operator

    // float d= 34.4f; // to convert to float
    // long double e = 34.4l; // to convert to long double
    // // 34,4 by default is double and for converting it to a float :34.4f
    // cout<< "The size of 34.4 is "<<sizeof(34.4)<<endl;// by default double
    // cout<< "The size of 34.4 is "<<sizeof(34.4f)<<endl;//float
    // cout<< "The size of 34.4 is "<<sizeof(34.4F)<<endl;//float
    // cout<< "The size of 34.4 is "<<sizeof(34.4l)<<endl;//long double
    // cout<< "The size of 34.4 is "<<sizeof(34.4L)<<endl;//long double
    // return 0;

    // //**** reference variables****
    float x = 455;
    float & y = x; // y is a reference variable of x
    cout<<x<<endl;
    cout<<y<<endl;
    x=45; // y changes with x
    y= 63;
    cout << x << endl;
    cout <<y << endl;

    // ******typecasting *******
    // # include <string>
    //to_string();
    int a = 45;
    float b = 45.53;
    cout <<"The value of a is "<<(float)a<< endl; 
    cout <<"The value of a is "<<float(a)<< endl; //same as above

    cout <<"The value of b is "<<(int)b<< endl; 
    cout <<"The value of b is "<<int(b)<< endl; //same as above
    int (c) = int (b);
    cout<<c;

    cout<< "The expression is "<< (a+b)<<endl;
    cout<< "The expression is "<< (a+int(b))<<endl;
    
    return 0;
}