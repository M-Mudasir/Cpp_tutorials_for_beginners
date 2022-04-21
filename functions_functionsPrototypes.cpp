#include <iostream>
using namespace std;

// int sum(int a, int b) //top down approach, function must be defined prior to when it's called
// {
//     int c = a + b; // (int a , int b) a,b declare krna zaroori in concrete func, not neccessary in proto-
//     return c;
// }


// FUnction prototype
// syntax
// type function_name(arguments);
//int sum(int a, int b); // acceptable
//int sum(int a,b); // not acceptable
int sum (int, int); // acceptable
// void greet(void); //acceptable () empty brackets by default mean void
void greet();
// although the function is not concrete but this tells the compiler that
// a function named sum exists so don't give error, and look for it after the 
// call has been made

int main()
{
    int num1, num2;
    cout << "Enter the first number : " << endl;
    cin >> num1;
    cout << "Enter the second number : " << endl;
    cin >> num2;
    cout << "the sum of the above numbers is : " << sum(num1, num2) << endl;
    // in above lines num1 and num2 are called actual parameters as they will be used in the function
    greet();
    return 0;
}
int sum(int a, int b) 
// a and b in the above line are called formal parameters, as they are just place holdlers for the actual parameters
{
    int c = a + b;
    return c;
}
void greet(void){ //(void) or () means the same : void is just a function tyoe that returns nothing
    cout<< "Hello ! good morning"<<endl;
}