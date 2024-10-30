// input output 
#include <iostream>
using namespace std;

int main()
{
   cout<<"Harsh Dsa Starting"<<endl;
   string a;
   
   cout<<"enter your name:";
   cin>>a;
   cout<<"the name entered is: "<<a<<"\n";
   //to enter two number at a time
   cout<<"enter both number with space between them:";
   int c;
   int b;
   cin>>c>>b;
   cout<<"numbers are :"<<c<<" and "<<b;
   return 0;

    
}
//Datatypes
#include<iostream>
using namespace std;
int main(){
    cout<<"hi' lets start datatype"<<endl;
    int a;//4 byte
    long b;//8 byte
    long long c;//8 byte
    string d;//
    char e;//1 byte
    getline(cin,d);
    cout<<d;
    return 0;
}
//if-else statement
// These condition can go nested too
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter your age: ";
    cin>>a;
    if(a>18){
        cout<<"eligible for voting";
    }
    else if(a<18){
        cout<<"Not eligible for Voting";
    }
    else{
        cout<<"Go create voting ID";
    }
    
   return 0;
   
}
//Switch Statement
#include<iostream>
    using namespace std;
    int main(){
    int a;
    cout<<"enter the number of day you want to print:";
    cin>>a;
    switch(a){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thrusday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Staurday";
        break;
        case 7:
        cout<<"Sunday best day";
        break;
        default:
        cout<<"Not yet Defined";
        break;
    }
    
    
    
    return 0;
}



//Basic of Array and Strings
# include<iostream>
using namespace std;
int main(){
   
    int a;
    cout<<"enter number of element of array:";
    cin>>a;
     int arr[a];
    for (int i=0;i<a;i++){
        cin >> arr[i] ;
    }
    cout<<"the array is:";
    for (int i=0;i<a;i++){
        cout<<arr[i];
    }
    
    return 0;
}
//leetcode first question
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();
        int a = 0;
        int b = 0;
        int i;
        int j;
        int matrix1[m][n];

        if (m >= 1 && m <= 200 && n >= 1 && n <= 200) {
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    if (matrix[i][j] == 0) {
                        while (j < n && a < m) {
                            matrix1[a][j] = 0;
                            a = a + 1;
                        }
                        while (i <= m && b < n) {
                            matrix1[i][b] = 0;
                            b = b + 1;
                        }
                    }
                }
            }
        }
    }
};

//striever sheet for loop Fibonacci series
#include<bits/stdc++.h>
using namespace std;

int main()
{       int n;
        cin>>n ;
        int a = 1;
        int b =1;
        if (n>0){
        for (int i=0;i<n-2;i++){
                int c=a+b;
                a=b;
                b=c;
        }
        cout<<b;}
        else{
                cout<<a;
        }
}
//striever sheet while loop quesition Here, we will use a while loop and print a number n's table in reverse order.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int i =10;
    while(i>0){
        cout<<a*i<<" ";
        i--;
    }
    return 0;
}

