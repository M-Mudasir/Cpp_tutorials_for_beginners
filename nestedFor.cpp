#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string s(2,'.'); // must be a character
    //cout<<s;
    // for (int i =1; i<=10; i++){
    //     for (int i =10 ; i>=1 ; i--){
    //         cout<<'*';
    //     }
    // cout<<endl;
    // }
    // for (int i =1; i<=9; i++){
    //     for (int i =1 ; i<=9 ; i++){
    //         cout<<i;
    //     }
    // cout<<endl;
    // }
    // for (int i=0; i<9; i++){
    //     for (int j =1; j<=9-i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // for (int i=0; i<9; i++){
    //     for (int j =9-i; j>=1; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    //  for (int i=1; i<=9; i++){
    //     for (int j =1; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // for (int i = 1; i<=9; i++){
    //     for (int j =1; j<10; j++){
    //         cout<< i;
    //     }
    //     cout<<endl;
    // }
    // for (int i = 1; i<=9; i++){
    //     for (int j =1; j<10; j++){
    //         cout<< j;
    //     }
    //     cout<<endl;
    // }
    // for (int i = 9; i>=1; i--){
    //     for (int j =9; j>0; j--){
    //         cout<< i;
    //     }
    //     cout<<endl;
    // }
    // for (int i = 1; i<=9; i++){
    //     for (int j =9; j>0; j--){
    //         cout<< j;
    //     }
    //     cout<<endl;
    // }
    // *** alphabet rangoli ***
    //                 int
    //                a=9,b=9;
    //            for(int j=1; j<=
    //          9; j++) {cout<<string
    //   (-j+b,' '); cout<<string(j,'*');
    // cout<<string(j-1,'*');cout<<endl;a--;}
    //   for(int j=8;j>=1;j--){cout<<string
    //     (-j+b,' ');cout<<string(j,'*');
    //         cout<<string(j-1,'*');
    //               cout<<endl;
    //                 a--;}

    // char letters[27] = {'a','b','c','d','e','f','g','h',
    // 'i','j','k','l','m','n','n','o','p','q','r','s','t','u',
    // 'v','w','x','y','z'};
    // cout << letters;
    char letters[26], alphabet = 'a';
    for (int i = 0; i < 26; i++)
    {
        letters[i] = alphabet;
        alphabet++;
    }
    // for (int i=0; i<26; i++){
    //     cout<< letters[i]<<endl;
    // }
    int n;
    cout << "enter your desired number representing the alphabet : ";
    cin >> n;
    char temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = letters[i];
    }
    int a = n, b = n;

    for (int i = 1; i < n; i++)
    {
        for (int j = 2 * n; j > (2 * i); j--)
        {
            cout << '-';
        }
        for (int j = 0; j < i; j++)
        {
            if (j < i - 1)
            {
                cout << temp[n - 1 - j] << '-';
            }
            else
            {
                cout << temp[n - 1 - j] << '-';
            }
        }
        for (int j = i - 1; j > 0; j--)
        {
            if (j > 1)
            {
                cout << temp[n - j] << '-';
            }
            else
            {
                cout << temp[n - j];
            }
        }
        for (int j = 2 * n; j > (2 * i); j--){
            if ((i==1 )&& (j== 2*n))
            {
                continue;
            }
            else{
                cout<<'-';
            }
        }
        cout << endl;
    }
     for (int i = n; i >= 1; i--)
    {
        for (int j = 2 * n; j > (2 * i); j--)
        {
            cout << '-';
        }
        for (int j = 0; j < i; j++)
        {
            if (j < i - 1)
            {
                cout << temp[n - 1 - j] << '-';
            }
            else
            {
                cout << temp[n - 1 - j] << '-';
            }
        }
        for (int j = i - 1; j > 0; j--)
        {
            if (j > 1)
            {
                cout << temp[n - j] << '-';
            }
            else
            {
                cout << temp[n - j];
            }
        }
        for (int j = 2 * n; j > (2 * i); j--)
        {
            if ((i==1 )&& (j== 2*n))
            {
                continue;
            }
            else{
                cout<<'-';
            }
        }
        cout << endl;
    }

    return 0;
}