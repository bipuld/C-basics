// friend function should be declesre inside the class and other must be in outside the class
// Friend function can be friend more than on class and also can acess private and protected memner of class
// It cannot be acessed inside the class
// it cannot direcctly acess the member of class
// member of class can be acessed by using object in function
// by friend keyword in class
// syntax:
// friend return_type function_name(class object){
//     //statment
// }
//Exmple
//example'
#include<iostream>
using namespace std;
// class Fun{
//     int a,b;
//     public:
//     Fun(){
//      a=896;
//      b=46;
//      cout<<"Hello ! From Constructor"<<endl;
//     }
//      sum info(){
//         cout<<"Exampel  of friend function"<<endl;
//     }
//     friend  sum sum(Fun );//declearinf friend function
// };
//  sum sum(Fun  o){//deffination of friend function
//     int add;
//     add=o.a+o.b;
//     cout<<"This is Example of friend function\nsum of friend function SUM =: "<<add<<endl;
// }
// int main(){
//     Fun obj;
//     obj.info();
//     sum(obj);//frined funciton
// }
//MOst imp it can be ddefine many many class
// class C2;
// class C1{
//     int x;
//     public:
//      sum input(){
//         cout<<"Hello Bipul Please! Enter the value of X "<<endl;
//         cin>>x;
//     }
//     friend int sum(C1 obj,C2 obj1);
// };
// class C2{
//     int y;
//     public:
//      sum input(){
//         cout<<"Hello Bipul! again enter the value of Y"<<endl;
//         cin>>y;
//     }
//     friend int sum(C1 obj,C2 obj1);
// };
// int sum(C1 obj,C2 obj1){
//     int add=0;
//     add=obj.x+obj1.y;
//     }
// int main(){
//     C1 o;
//     C2 o1;
//     o.input();
//     o1.input();
//     int add1=sum(o,o1);
//     cout<<"Guyz example of Friend funciton\n Sum of two number form diffrent class are :"<<add1<<endl;

// }
// class B ;
// class A{
//     long double y;
//     public:
//     A(long double a){
//         y=a;
//     }
//     friend int sum(A obj1,B obj2);
// };
// class B{
//     long double x;
//     public:
//     B(long double n){
//         x=n;
//     }
//     friend int sum(A obj1,B obj2);
// };
// int sum(A obj1,B obj2){
//     long double mul;
//     mul=obj1.y*obj2.x;
// }
// int main(){
//        long double product;
//     A a(4654654564);
//     B b(5645456465);
//      product=sum(a,b);
//     cout<<"Multiplication of :-"<<product<<endl;
//     return 0;
// }
// C++ program to demonstrate function overriding

// #include <iostream>
// using namespace std;

// class Base {
//     int x;
//    public:
//      Base(int m) {
//         x=m;
//         cout << "Base Function of X " <<x<<endl;
//     }
// };
// class Derived : public Base {
//    int b;
//    public:
//      Derived(int n,int m):Base(m) {
//          b=n;
//         cout << "Derived Function of B " <<b<< endl;
//     }
// };

// int main() {
//     Derived derived1(455,515);
//    // derived1.print();
//     //derived1.Base::print();
//     return 0;
// }































