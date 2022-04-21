#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swap(int a, int b)
{                 // doesn't work as the formal variables are just a reference to actual ones
    int temp = a; // function k andar wale a nd b ko bahar wali value milgayi and andar wale change nhi hogye
    // but srif andar wale change hue hain bahar wale nhi
    a = b;
    b = temp;
    cout<< "function k andar a:"<<a<<endl;
    cout<< "function k andar b:"<<b<<endl;
}
void swap_pointer(int *a, int *b)
{ // called by value
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_var_ref(int &a, int &b)
{ // called by reference
    int temp = a;
    a=b;
    b=temp;
}

int main()
{
    int a, b;
    a = 5, b = 6;

    cout << "The sum is " << sum(a, b) << endl;
    cout << "The vlaue of a and b is " << a << ' ' << b << endl;
    swap(a, b);
    cout << "The vlaue of a and b after swap is " << a << " " << b << endl;

    swap_pointer(&a, &b);
    cout << "The vlaue of a and b after swap_pointer is " << a << ' ' << b << endl;
    swap_var_ref(a,b);
    cout << "The vlaue of a and b after swap_var_ref is " << a << ' ' << b << endl;

    // int temp = a;
    // a = b;
    // b = temp ;

    // cout <<a <<" "<<b; 

    return 0;
}