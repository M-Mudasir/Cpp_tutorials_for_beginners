#include <iostream>
using namespace std;

int glo = 6;
void sum(){
    cout<<glo;
}


int main (){
    /*cout << "hello World" << endl;
    cout << "Hello Mudasir";*/
    // int a = 4;
    // int b = 5;
    cout<< glo<< endl;
    int glo = 5; //createes a local version, local ki precedence zyada
    cout<< glo<< endl;
    glo =15;
    cout<< glo<< endl;
    sum();cout<<"\n"; //calls the global glo, which has not been changed

    int a=14, b=15;
    cout<< "value of a is "<<a<<endl<<"value of b is "<<b<<endl;
    // cout<< "value of a is "<<a<<"\nvalue of b is "<<b<<endl; //same as above

    float pi=3.142;
    cout<<"the value of pi is "<<pi<< endl;

    char c= 'a' ; // single quotation mark
    cout<<"the value of c is "<<c<< endl;

    bool is_true = true;
    cout<< is_true; //true k liye 1, false k liye 0
    return 0;
} 