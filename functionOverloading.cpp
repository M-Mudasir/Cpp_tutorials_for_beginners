#include <iostream>
using namespace std;

// int sum(int a, int b){
//     cout << "This function accepts 2 arguments"<<endl;

//     int c;
//     c = a+b;
//     return  c;
// }

// int sum (int a, int b, int c){
//     cout << "This function accepts 3 arguments"<<endl;
//     int d;
//     d = a+b+c;
//     return d;
// }

// int main (){
//     cout<< "The sum of 6 and 9 is "<<sum(6,9)<<endl; // c++'s compiler searches the best match for the function that can be executed
//     // in the above case it saw that 2 argumments were supplied so it executed that sum
//     cout<< "The sum of 5,6 and 9 is "<<sum(5,6,9)<<endl;
//     return 0;
// }

int area(int a, int b){
        cout<< "The area of rectangle is "<<a*b<<endl;
}

int area (int a){
    cout<<"Thea area id square is "<<a*a<<endl;
    
}
int main(){
    area(4);
    area(5,4);
    return 0;
}