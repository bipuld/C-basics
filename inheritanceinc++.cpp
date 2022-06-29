// type of Inheritance in c++
// 1single inheritance
// 2 Multiple inheritance
// 3 muti-level inheritance
//4 hierarchy inheritance
//5 hybrid innheritance

//single inheritance
#include<iostream>
using namespace std;
// class BaseClass{
//     protected:
//     int x,y;
//     public:
//     void get(int a,int b){
//         x=a;
//         y=b;
//     }
// };
// class Derivedclass:public BaseClass{
//     int sum;
//     public:
//     void result(){
//         sum=x+y;
//         cout<<"Sum of X AND Y:"<<sum<<endl;
//     }
// };
// int main(){
//     Derivedclass obj;
//     obj.get(1,2);
//     obj.result();
// }
//2 multi-level inheritance
// syntax::
// class BaseClass{
// //statment
// };
// class D1:public BaseClass{
//     //statment
// }
// class D2:public D1{

// }
//3 multiple class
// class Father{

// };
// class Mother {

// };
// class child:publlic father,public mother{

// }
//example of Multi-level inheritance
// class Father{
//     public:
//     void d(){
//         cout<<"hello father"<<endl;
//     }
// };
// class mother:public Father{
//     public:
//      void d1(){
//         cout<<"hello mother"<<endl;
//     }
// };
// class child:public mother{
//     public:
//     void d2(){
//         cout<<"hello child"<<endl;
//     }
// };
// int main(){
//     child c1;
//     mother m1;
//     m1.d();
//     c1.d1();
//     c1.d2();

// }
//multiple inheritance
// class Father{
// protected:
// int x;
// public:
// void INPUT(){
//     cout<<"Enter the input value"<<endl;
//     cin>>x;
// }
// };
// class Mother{
//     protected:
//     int y;
//     public:
//     void INPUT(){
//     cout<<"Enter the input value"<<endl;
//     cin>>y;
// }

// };
// class Child:public Father,public Mother{
// int sum,z;
// public:
// Child(){
//     sum=0;
// }
//   void INPUT(){
//     cout<<"Enter the input value"<<endl;
//     cin>>y;
// }
// void result(){
//     sum=x+y+z;
//     cout<<"The result is ::"<<sum<<endl;
// }
// };
// int main(){
//     Child c1;
//     c1.Father::INPUT();//ambugue in multiple inheriitance
//     c1.Mother::INPUT();
//     c1.Child::INPUT();
//     c1.result();
// }
//multiple inheritancce
// class A{
//     public:
//     void r1(){
//         cout<<"Hello A"<<endl;
//     }
// };
// class B{
//     public:
//     void r2(){
//         cout<<"Hello B"<<endl;
//     }
// };
// class C2:public A,public B{
// public:
// void r3(){
//     cout<<"Hello C"<<endl;
// }
// };
// int main(){
//     C2  c;
//     c.r1();
//     c.r2();
//     c.r3();
// }
//ABMiguity in Multiple  inheritance
// class A{
//     public:
//     void r1(){
//         cout<<"Hello A"<<endl;
//     }
// };
// class B{
//     public:
//     void r1(){
//         cout<<"Hello B"<<endl;
//     }
// };
// class C2:public A,public B{
// public:
// void r2(){
//     cout<<"Hello C"<<endl;
// }
// };
// int main(){

//     C2  c;
//     c.r2();
//     c.r1();
//     c.r1();
// }

// class Foods{
//     public:
//     void deliver(){
//         cout<<"Hey! We are delivering food from 8pm-9pm"<<endl;
//     }
// };
// class Food{
//     public:
//     void deliver(){
//         cout<<"Hey! Not delivering fodd today!!!"<<endl;
//     }

// };
// class FinalFood:public Foods,public Food{
// public:
// void deli(){
//     cout<<"Okay fine!"<<endl;
// } 
// };
// int main(){
// FinalFood f;
//     f.Foods::deliver();
//     f.Food::deliver();
//     f.deli();
// }
#include<iostream>
using namespace std;
class A{
    public:
    void d(){
        cout<<"Hello"<<endl;
    }
};
class B{
    public:
    void d(){
        cout<<"World"<<endl;
        
    }
};
class C:public A,public B{
    public:
    void d1(){
        cout<<"o"<<endl;
    }
};
int main(){
    C a;
    a.A::d();
    a.B::d();
    a.d1();
}










































































































