// The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters

#include<iostream>
using namespace std;
 
int main(){

    float km, m, cm, f, in;
    cout<<"Enter distance in kilometers: ";
    cin>>km;

    m = km * 1000;
    cm = km * 1000 * 100;
    f = km * 3280.84;
    in = km * 39370.08;

    cout<<"\nThe distance in Feet: "<<f;
    cout<<"\nThe distance in Inches: "<<in;
    cout<<"\nThe distance in Meters: "<<m;
    cout<<"\nThe distance in Centimeters: "<<cm;

    return 0;
}