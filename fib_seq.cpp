#include <iostream>
using namespace std;
int fib(int x) { // 5
   if((x==1)||(x==0)) {
      return(x);
   }
   else {
      return(fib(x-1)+fib(x-2));
   }           // fib(4) + fib (3)  
}

int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}