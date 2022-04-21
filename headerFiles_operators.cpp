//header files
# include<iostream>
using namespace std;
// two types of header files
// system header files: comes with the compiler
// user defined header files : it is written by the user (modules)
// include <xyz> (import)
// user defined one should be present in the current directory
// cpp refrence (google search)

// int x = 4; global variable

int main(){
    int  a = 4, b = 5; // local variale
    // cout <<x;
    cout<< "followung are the arithmetic operators"<<endl;
    // Arithmetic operators
    cout<< "The value of a+b is "<<a+b<<endl;
    cout<< "The value of a-b is "<<a-b<<endl;
    cout<< "The value of a*b is "<<a*b<<endl;
    cout<< "The value of a/b is "<<a/b<<endl;
    cout<< "The value of a%b is "<<a%b<<endl;
    cout<< "The value of a++ is "<<a++<<endl; // a++ = a+=1, a+=5, a = a+5
    cout<< "The value of a-- is "<<a--<<endl;
    cout<< "The value of ++a is "<<++a<<endl;
    cout<< "The value of --b is "<<--a<<endl;
    // Assignment operators
    // int a = 3, b=9; //if previously declared with some datatype, again declaration will cause error
    // // so just use simple a= 3 as a is already an int 
    // char d= 'd';
    //Comparison operators
    // cout << "the value of a == b is"<<a==b<<endl;
    cout << "the value of a == b is "<<(a==b)<<endl; //paranthesis are a must or the compiler won't know
    //kin do pr operation perform ho rha
    cout << "the value of a != b is "<<(a!=b)<<endl;
    cout << "the value of a <= b is "<<(a<=b)<<endl;
    cout << "the value of a >= b is "<<(a>=b)<<endl;
    cout << "the value of a > b is "<<(a>b)<<endl;
    cout << "the value of a < b is "<<(a<b)<<endl;

    // logical operators
    //&& = AND
    // || = OR

    return 0;
}

