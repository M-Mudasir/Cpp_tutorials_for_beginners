#include<iostream>
#include<vector>
using namespace std;

// fib 1:

// int fib(int x) {
//       return(fib(x-1)+fib(x-2));     
// }

// int main (){
//     cout << fib(5);
//     return 0;
// }

// fib 2
// int fib(int n){
//     if (n < 2){ return n;}
//     else{
//         return fib(n-1) +   fib (n-2);
//     }
// }

// int main()
// {
//    cout<< fib(3);
//     return 0;
// }

//  fib 3

int fib(int n) 
{
    if (n <= 1)
        return n;

    std::vector<int> table(n + 1);
    table[0] = table[1] = 1;
    for (int i = 2; i <= n; ++i) {
        table[i] = table[i-1] + table[i-2];}
    //        2            1             0
    return table.back();
}
int main (){
    cout <<fib(5); // 112358
}

// fib 4
// int fib4(int n){ //3
//     int last =0, next =1;
//     for (int i = 0; i < n; i++) // 0-2
//     {
//         int oldLast = last; // 0 1 1
//         last = next; // 1 1 2
//         next = oldLast+ next; // 1 2 3
//     }
//     return last ;
    
// }

// int main(){
//     cout << fib4(3); // 1 1 2 
//     return 0;
// }

// fib 5
// auto fib = [](int n, auto&& fib) { // auto assigns the suitable type to the lambda variable
//                     // the auto&& parameter takes a lambda variable as a parameter and the uses the recursion.
//     if (n <= 1) return n;
//     return fib(n - 1, fib) + fib(n - 2, fib);
// };

// int main (){
//     auto f = [](int n) { return fib(n, fib); }; // here f is a simple lambda variable
//     int i = f(7); // lambda variable can be called by simply putting a () after the lambda variable.
//     cout << i; // i is merely an int variable .
//     return 0;
// } 

// fib 5.b
// int fib(int x) { 
//    if((x==1)||(x==0)) {
//       return(x);
//    }
//    else {
//       return(fib(x-1)+fib(x-2));
//    }          
// }

// int main() {
//    int x , i=0;
//    cout << "Enter the number of terms of series : ";
//    cin >> x;
//    cout << "\nFibonnaci Series : ";
//    while(i < x) {
//       cout << " " << fib(i);
//       i++;
//    }
//    return 0;
// }