// // syntax
// // class A{

// // };
// // class B:public A{

// // };
// // class C: public A{

// // };
// // class D:public A,public B{

// // };
// #include<iostream>
// using namespace std;
// class A{
//     protected:
//     int x;
//     public:
//     void getdata(){
//         cout<<"Hello ! Bipul Enter the value of X"<<endl;

#include<iostream>
using namespace std;
//postfix
class A{
int x,c;
public:
    A(){
    }
A(int a,int  y){
    x=a;
    c=y;

}
void shw(){
    cout<<"Value of x c === "<<x<<"\n"<<c<<endl;
}
friend A operator +(A &temp,A &temp1);
};
A operator +(A &temp,A &temp1){
    A t;
    t.x=temp.x+temp1.x;
    t.x=temp.c+temp1.c;
    return t;

}
int main(){
    A a(5,5),b(4,6),c;
    c=a+b;
    c.shw();
}





