#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    int id;
    double gpa;

    student(int x,double y)
 {
     id=x;
     gpa=y;
 }
 void display()
 {
     cout<<id<<" "<<gpa<<endl;
 }



};



int main()
{
    student alim(256,3.3);
    alim.display();


}
