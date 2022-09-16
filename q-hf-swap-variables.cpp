// Two numbers are input through the keyboard into two
// locations C and D. Write a program to interchange the
// contents of C and D.

#include<iostream>
using namespace std;
 
int main(){

    int C, D, T;
     cout<<"Enter the value of C";
     cin>>C;

     cout<<"Enter the value oof D";
     cin>>D;

     C = C+D; 
     D = C-D; 
     C = C-D; 


     cout<<"\n The value of C: "<<C;
     cout<<"\n The value of D: "<<D;

    return 0;
}