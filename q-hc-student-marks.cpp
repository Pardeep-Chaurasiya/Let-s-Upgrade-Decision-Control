// If the marks obtained by a student in five different subjects
// are input through the keyboard, find out the aggregate marks
// and percentage marks obtained by the student. Assume that
// the maximum marks that can be obtained by a student in each
// subject is 100.

#include<iostream>
using namespace std;
 
int main(){

    int hindi, math, english, science, art, total;
    float percentage;
    
    cout<<"Enter the marks of Hindi: ";
    cin>>hindi;

    cout<<"Enter the marks of Math: ";
    cin>>math;

    cout<<"Enter the marks of English: ";
    cin>>english;

    cout<<"Enter the marks of Science: ";
    cin>>science;

    cout<<"Enter the marks of Art: ";
    cin>>art;

    total = hindi+math+english+science+art;

    percentage = total/5;

    cout<<"\nAggregate marks: "<< total;
    cout<<"\nPercentage marks: "<< percentage;

    return 0;
}