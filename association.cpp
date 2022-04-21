#include<iostream>
using namespace std;

class Rectangle{

    int length, breadth;
    public:

    static int area(int a, int b){
        return a*b;
    }
};

class Parallelogram
{
private:
    int a, b;
public:
    Parallelogram(int x, int y);
    Parallelogram(){}
    int F(int x , int y){
       return Rectangle :: area( x, y );    // association
    }
};

Parallelogram::Parallelogram(int x, int y)
{
    a = x;
    b = y;
}
int main (){

    Parallelogram p(5,4);
    cout << p.F(5,4);
    return 0;
}