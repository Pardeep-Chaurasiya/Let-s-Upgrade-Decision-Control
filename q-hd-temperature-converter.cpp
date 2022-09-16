// Temperature of a city in Fahrenheit degrees is input through
// the keyboard. Write a program to convert this temperature
// into Centigrade degrees.

#include<iostream>
using namespace std;
 
int main(){

    float f, c;
    cout<<"Enter Temperature in Fahrenheit: ";
    cin>>f;

    c = (f-32)*5/9;

    cout<<"The Temperature in Centigrade Degree is "<<c;

    return 0;
}