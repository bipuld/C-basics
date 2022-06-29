#include<iostream>
using namespace std;
class Student{
    protected:// PROTECTED can be acces only inside the class and only in derived class
  //private can be acess only inside the class by using help of member function and if member function is acessing the  private of class and if member function is public then it can be acess outside the class
  
        char name[50];
        int rollno;
        public://public can be acess inside the clas and outside the class also
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