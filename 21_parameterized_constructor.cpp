#include<iostream>
using namespace std;
class employee
{
private:
    int ID,salary;
    string name,Dept;
public:
    employee()
    {

        cout<<"Constructor called"<<endl;
    }
    void read();
    void display();
};
void employee :: read()
{
   cin>>ID>>salary;
   cin>>name>>Dept;
}
void employee :: display()
{
    cout<<ID<<endl;
    cout<<salary<<endl;
    cout<<name<<endl;
    cout<<Dept<<endl;
}
int main()
{

    employee e1;
    e1.read();
    e1.display();
    return 0;
}
