#include<iostream>
using namespace std;
// class A{
//     public:
//    virtual void out(){
//         cout<<"Hello !plesase Virtual"<<endl;
//     }
// };
// class B:public A{
//    public:
//     void out(){
//         cout<<"Hello ! Inheritance"<<endl;

// }
// };
// int main(){
//         B obj;
//         A *ptr;
//         ptr=&obj;
//         ptr->out();

// }
class shape{
    public:
   virtual  void draw()=0;//abstract class and we cannot mmake object of this class and we can acess them by using pinter

};
class circle:public shape{
    public:
    void  draw(){
        cout<<"Drwaing circle address is "<<this<<endl;
        cout<<"Example of virtual class and address is "<<this<<endl;
    }
};
class line:public circle{
    public:
    void  draw(){
        cout<<"Drawing line address is "<<this<<endl;
    }
};
int main(){
    shape *p1,*p2;
    circle obj1;
    line obj2;
    p2=&obj2;
    p1=&obj1;
    p1->draw();
    p2->draw();
}
