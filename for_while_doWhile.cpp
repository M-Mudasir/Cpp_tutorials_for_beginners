#include <iostream>
using namespace std;

int main()
{

    // syntax of for loop
    // for (initialization; condition ; updation)
    //      loop body(c++ code);
    // for (int i=1;i<=100;i++){
    //     cout<<i<<endl;
    // }

    //infinite loop
    // for (int i = 1; 43==43; i++){
    //     cout<<i<<endl;
    // }

    // syntax of while loop
    // while (/* condition */)
    // {
    //     /* code */
    // }
    int i=1;
    while (i<=40){
        cout<<i<<endl;
        i++;
    // }
    //syntax for do while
    // do
    // {
    //     /* code */
    // } while (/* condition */);
    // int i =1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // }while (i>41);
    // int a,b;
    // cout<< "Enter the number, you want to get a table of: ";
    // cin  >> a;
    // cout <<"Enter the number you til which you want to multiply: ";
    // cin >>b;
    // for (int i=1;i<=b;i++){
    //     cout<<a<< " x "<< i<< " = "<<a*i<<endl;
    // }
    // int i=1;
    // while (i<=b){
    //     cout<<a<< " x "<< i<< " = "<<a*i<<endl;
    //     i++;
    // do
    // {
    //     cout<<a<< " x "<< i<< " = "<<a*i<<endl;
    //     i++;
    // } while (i<=b);

    // int table_number, times ;
    // cout << "enter the table number: ";
    // cin >> table_number;
    // cout << "how many times do you want to print it: ";
    // cin >> times; 
    
    // table_number x times = table_number*time

    // for (int i = 1; i <= times; i++)
    // {
    //     cout << table_number <<" x "<< i <<" = "<< table_number*i<<endl;
    // }
    
    return 0;
}
/*The goto statement gives the power to jump to any part of a program but, makes the logic of the program complex and tangled.

In modern programming, the goto statement is considered a harmful construct and a bad programming practice.

The goto statement can be replaced in most of C++ program with the use of break and continue statements.*/
// void exit (0); exits a c++ program with error code 0

// goto is used to chanee the flow of execution of the code
//  syntax
/*int main(){
    int a;
    cin>> a;
    if (a == 2){
        goto xD;
    // block of code
    .
    .
    xD:
    cout<< a is << a ;
    }
    }*/