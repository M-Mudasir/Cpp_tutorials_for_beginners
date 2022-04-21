#include <iostream>
using namespace std;

int main(){
    //approach 1
    int Marks[5]={1,2,3,4,5}; // [5] isko khali bhi rkh skte hain []
    // cout<<Marks[0]<<endl;
    // cout<<Marks[1]<<endl;
    // cout<<Marks[2]<<endl;
    // cout<<Marks[3]<<endl;
    // cout<<Marks[4]<<endl;

    // int new_marks[7];// isko kali nhi chor skte, koi bhi integer thoosna hai bs
    // new_marks[0]=10;
    // new_marks[1]=20;
    // new_marks[2]=30;
    // cout << new_marks[0] << endl;
    // cout << new_marks[1] << endl;
    // cout << new_marks[2] << endl;

    // for (int i=0; i<=4;i++){
    //     cout<<Marks[i]<<endl;
    // }

    cout<<Marks<<endl;   //gives the address of the item present at the 0th index (by default)
    cout<<&Marks[0]<<endl; // same as above
    int* p = Marks ;// same as &Marks[0]
    cout<<"The value of p(address of Marks[0]) is :"<<p<<endl;
    cout<<"The value of *p(Marks[0]) is : "<<*p<<endl;
    cout<<"The value of p+1(address of Marks[1]) is :"<<p+1<<endl;
    cout<<"The value of *p+1(Marks[1]) is :"<<*p+1<<endl;
    cout<<"The value of p+2(address of Marks[2]) is :"<<p+2<<endl;
    cout<<"The value of *p+2(Marks[2]) is :"<<*p+2<<endl;
    cout<<"The value of p+3(address of Marks[3]) is :"<<p+3<<endl;
    cout<<"The value of *p+3(Marks[3]) is :"<<*p+3<<endl;
    cout<<*(p++)<<endl;  //increment operator p=p+1
    cout <<*(++p)<<endl;
    return 0;
}
