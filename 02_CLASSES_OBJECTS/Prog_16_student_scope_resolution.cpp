#include<iostream>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    void SetData(string, int);
    void DisplayData()
    {
        cout<<"Name = "<< name << endl;
        cout<<"Age = "<< age;
    }
};

void student::SetData(string name, int age)
{
    this->name=name;
    this->age=age;
}

int main()
{
    student s1;
   
    s1.SetData("abc",5);
    s1.DisplayData();
    return 0;
}
