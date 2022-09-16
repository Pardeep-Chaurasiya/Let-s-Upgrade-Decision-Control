// If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits.

#include <iostream>
using namespace std;
int main()
{
	int num,a,b,c,d,e;
	cout<<"Enter a five digit number : ";
	cin>>num;
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	cout<< a+b+c+d+e <<" is the sum of the digits of the number "<< num;
	return 0;
}