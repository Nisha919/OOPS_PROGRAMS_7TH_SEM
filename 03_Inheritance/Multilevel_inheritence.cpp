#include<iostream>
using namespace std;


class person{
public:
 void display1()
 {
 cout<<"\nperson class";
 }


};
class student:public person{

public:
void display2(){

cout<<"\nstudent class";

}


};
class ITstudent:public student{

public:
 void display3()
 {
 cout<<"\nIT student class";


 }


};

int main()
{
person p;
student s;
ITstudent i;
 p.display1();
 s.display2();
 s.display1();
 i.display3();
  i.display2();
   i.display1();
 }





