#include<iostream>
using namespace std;
/*class Cons
{
    int x;
    int y,m,l;
public:
    Cons()//default consrtuctor
    cout << "We are inside the constructor"<<endl;
    cout<<"Hello Constructor"<<endl;
    cout<<"input x and y"<<endl;
    cin>>x>>y;
}
Cons(int a,int b)
{
    cout << "We are inside the parameterized constructor"<<endl;
    cout<<"Hello Constructor"<<endl;
    a=m;
    b=m;
}//parameterized constructor
displayer()
{
    cout<<"Value of X and Y are "<< x <<"and Y are "<<y;
}

};
int main()
{
    Cons player;
    Cons p1(899,777);
    player.displayer();
    p1.displayer();
}*/
/*
class Teacher{

int id;
 add;
public:
    Teacher(){
    id=90;
    add="Gaindaikot";
    cout<<"Hello I'm a Default constructors"<<endl;
    }
void display_data();
};
void Teacher::display_data(){
cout<<"Teacher address and Id no is : "<<add<<" id number is "<<id;
}
int main()
{
    Teacher math;
    math.display_data();
}*/
/*//parametrized constructor
class Teacher{
int id,ward;
 add;
public:
    Teacher(int a,int b){
    id=a;
    ward=b;
    cout<<"Hello I'm a paramterized constructors"<<endl;
    }
void getdata();
void display_data();
};
void Teacher::getdata(){
cout<<" Enter Teacher address: "<<add;
cin>>add;
}
void Teacher::display_data(){
cout<<"Teacher address and ward no and Id no is : "<<add<<ward<<" id number is "<<id;
}
int main()
{
    Teacher math(90,5);
    math.getdata();
    math.display_data();
}*/
//Copy constructor inside the class
// class Student{
// int id;
// int name;
// public:
//     Student(int a,char N ){
//       id=a;
//          name=N;
//     //  cout<<"Hello I'm a parametrized constructors"<<endl;
//      }
// Student(Student &object2)//copy constructor
// {
//     cout<<"Hello I'm a copy constructors"<<endl;
//     id=object2.id;
//     name=object2.name;
// }
// void display()
// {
//     cout<<"Example of Constructor"<<endl;
//     cout<<"Student name and id is : "<<name<<" and Id is "<<id<<endl;
// }
// };
// int main(){
//  Student object(8,5);//source object
//   //object.display();
//  Student obj1(object);//destination object with syntax
//  obj1.display();
//  return 0;
// }
class sum{
    int a,b,add;
    public:
    // sum(){

    // }
    sum(int d,int c){
        a=d;b=c;
          add=0;

    }
    sum(sum &obj1){
        a=obj1.a;b=obj1.b;
    }
    int reset();
};
int sum::reset(){
        add=a+b;
        cout<<"sum of "<<add<<endl;
    }

int main()
{
    sum o(56,2);
    sum o1(o);
    o.reset();
}










