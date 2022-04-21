#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // string st = "mr ahmed";
    // // Opening files using constructor and writing it
    // cout << st;
    // ofstream out("sample60.txt"); // Write operation
    // out<<st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60.txt"); // Read operation
    // in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}
