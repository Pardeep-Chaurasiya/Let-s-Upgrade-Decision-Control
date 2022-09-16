// The length & breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the
// area & perimeter of the rectangle, and the area &
// circumference of the circle.

#include<iostream>
using namespace std;
 
int main(){

     float l, b, r,ca, cc, ra, rp;

    cout<<"Enter the length of rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of rectangle: ";
    cin>>b;

    cout<<"Enter the radius of circle: ";
    cin>>r;

     ra = l * b;    
     rp = 2 * (l + b);    

     ca = 3.14 * r * r;   
     cc = 2 * 3.14 * r;  

     cout<<"\nThe area of the rectangle: "<<ra;
     cout<<"\nThe perimeter of the rectangle: "<< rp;
     cout<<"\n\nThe area of the circle: "<<ca;
     cout<<"\nThe circumference of the circle: "<< cc;

    return 0;
}