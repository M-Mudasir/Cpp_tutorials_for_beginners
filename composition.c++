// #include <iostream>
// using namespace std;

// // composition (is part-of relation)
// class X
// {
// private:
//     int d;

// public:
//     void set_value(int k)
//     {
//         d = k;
//     }

//     void show_sum(int n)
//     {
//         cout << "sum of " << d << " and " << n << " = " << d + n << endl;
//     }
// };
// class Y
// {
// public:
//     // X a;  // a is an object of class X, creation of a takes place inside class Y
//     void print_result() // is a method of class y
//     {
//         // a.show_sum(5); // calling a method from the object(a)of class X
//         cout<<"hello";
//     }
// };

// class Z{
//     public:
//     Y b;
//     X a;
// };

// int main()
// {
//     Z z;
//     z.a.set_value(10);
//     z.a.show_sum(10);
//     z.b.print_result();

// }

#include<iostream>
using namespace std;

class Engine{
    public:
    bool used;
    void set_used(bool t){
        used = t;
    }
    void get_used(void){
        if (!used){
        cout<< " the engine has been previouly used" <<endl;
        }
        else{ cout <<"the engine is new"<<endl;}
    }
};

class Vehicle{
    string color;
    int no_of_tires; 
    public:
        Engine e; // composition with engine
        void set_color(string c);
        void set_tires(int);
        void get_color(){
            cout <<"the color of the car is: "<< color<< endl;
        }
        void get_tires(){
            cout <<"the no of tires in the car are: "<< no_of_tires<< endl;
        }
        float calc_milage(int no_yr){
            cout <<"The vehicle covers "<<10/no_yr<< "km, in one litre"<< endl; 
        }
        float calc_tax(int price){
            cout<< " tax owner has to pay every year is: "<< price*0.1<< endl; 
        }

};
void Vehicle :: set_color(string c){
    color = c;
}
void Vehicle :: set_tires(int t){
    no_of_tires = t;
}


class car: public Vehicle {
    int gears;
    public:
        void set_gears(int g){
            gears = g;
        }
        void get_gears(){
            cout<< gears<< endl;
        }
};

int main (){
    car c;
    c.set_color("red");
    c.set_tires(4);
    c.set_gears(5);
    c.calc_milage(10);
    c.calc_tax(10000);
    c.e.set_used(1);
    c.get_color();
    c.get_gears();
    c.get_tires();
    c.e.get_used();
    return 0;
}