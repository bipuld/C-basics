#include<iostream>
using namespace std;
class Student{
    public:
        char name[50];
        int rollno;
        void get_data()
        {
            cout<<"Input a Student name "<<endl;
            cin>>name;
            cout<<"Now,Enter the roll no of:"<<name<<endl;
            cin>>rollno;
        }
        void display(){
            cout<<"Name of student is "<<name <<" and roll no of "<<name<<" is "<<rollno<<endl;
        }
};
int main()
{
    Student s1;
    s1.get_data();
    s1.display();
}