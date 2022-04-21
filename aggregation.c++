#include <iostream>
#include <string.h>
using namespace std;

// has-a relationship
class Address
{
public:
    int houseNo;
    string colony, city, state;
    Address(int hno, string colony, string city, string state)
    {
        this->houseNo = hno;
        this->colony = colony;
        this->city = city;
        this->state = state;
    }
};
class Person
{
private:
    Address *address;

public:
    string name;
    Person(string name, Address *address)
    {
        this->name = name;
        this->address = address;
    }
    void display()
    {
        cout << name << " "
             << " " << address->houseNo << " " << address->colony << " " << address->city << " " << address->state << endl;
    }
};
int main(void)
{
    Address add1 = Address(868, "Mahavir Colony", "Jahagirpuri", "New Delhi");
    Person p1 = Person("Raj", &add1);
    Person p2 = Person("Seema", &add1);
    p1.display();
    p2.display();
    return 0;
}