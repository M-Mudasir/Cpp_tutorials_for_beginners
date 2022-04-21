// #include<iostream>
// using namespace std;


// // basic function definition
// int mul(int a,int b){
//     return a*b;
// }
// // return nhi hoga to value use nhi krskte main k andar
// void add(int a){
//     cout<< a+30;
// }
// //function prototype
// int div(int a);

// // execution takes place
// int main (){int x;
//     x = mul(4,5); //mul(4,5) == 20 
//     cout<< x<<endl;
//     add(5);
//     cout <<"\n" <<div(6);
//     return 0;
// }
// int div(int a){
//     return a*2;
// }

// #include<iostream>
// using namespace std;

// class Employee{

//     int a,b,c ;
//     public:
//     int d;
//     string set_data(int a,int b, int c);
//     void get_data();
// };// end of class

// string Employee :: set_data(int a_, int b_, int c_){
//     a = b_;
//     b = c_;
//     c = a_;
//     return "my class name is Employee";
// }

// void Employee :: get_data(){
//     cout <<" Value of a is: " <<a<< endl;
//     cout <<" Value of b is: " <<b<< endl;
//     cout <<" Value of c is: " <<c<< endl;
// }

// int main (){
//     Employee x;
//     x.get_data();
//     x.set_data(3,1,2);
//     x.get_data();
//     cout << x.d;
//     // cout << x.a; // not accessible as initialized in the private scope
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main (){
//     syntax
//     while (/* condition */)
//     {
//         /* code */
//     }

//     int n = 1;
//     while (1)
//     {
//        cout << n<< endl;// 99
//        n ++; // 100
//      if (n == 100){ //100
//          break;
//      }
//     }

// // nested for
//     for (int i = 1; i < 11; i++)// 10 (1 - 10)
//     {
//         for (int j = 1; j < i; j++) // 1 - 10
//         {
//             cout << '*';
//         } 
//         cout << "\n";
       
//     }
    
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main (){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,0} ;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }