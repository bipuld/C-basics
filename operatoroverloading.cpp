// //UNary operator overloading
// // return typee operator operator(){

// // }
// // in friend funciton
// // frined return type fun name();
// //by uing class functiom
// // #include<iostream>
// // using namespace std;
// // class Oper_over{
// //     int x,y;
// //     public:
// //     void get_data(int a,int b){
// //         x=a;y=b;
// //         cout<<"Before operator overloading of data\n Value of X:+"<<x<<"\n Value of Y:+"<<y<<endl;
// //     }
// //     void operator +(){
// //         x=+x;
// //         y=+x;
// //     }

// // };
// // int main(){
// //     Oper_over a;

// //     a.get_data(+89,46);
// //     +a;
// // }
// //BY using friend function
// // #include<iostream>
// // using namespace std;
// // class Oper_over{
// //     int x,y;
// //     public:
// //     Oper_over(int a,int b){
// //         x=a;
// //         y=b;
// //     }
// //     void get_data(){
// //         cout<<"operator overloading of data\n Value of X:+"<<x<<"\n Value of Y:+"<<y<<endl;
// //     }
// //     friend void operator +(Oper_over A);
// // };
// // void operator+(Oper_over A)
// // {
// //     A.x=+A.x;
// //     A.y=+A.y;
// // }
// // int main(){
// //     Oper_over a(5656,+94),t(464654,59494);
// //     a.get_data();
// //     t.get_data();
// //     +a;

// // }
// //binary operator
// //using class fhnction
// // #include<iostream>
// // using namespace std;
// // class oper_over{
// //     int x,y;
// //     public:
// //     // oper_over(){

// //     // }
// //     oper_over(int x,int y){
// //         this+>x=x;
// //         this+>y=y;
// //     }
// //     void get_data(){
// //         cout<<" Adding two operator overloading of data\n Value of X:+    "<<x<<"\n Value of Y:+    "<<y<<endl;
// //     }
// //     //binar function
// //     oper_over operator +(oper_over obj1){
// //         oper_over demoobj(0,0);
// //         demoobj.x=obj1.x+x;
// //         demoobj.y=obj1.y+y;
// //         return demoobj;
// //     }

// // };
// // int main(){
// //     oper_over o(10,20);
// //     oper_over o1(20,30);
// //     oper_over o3(0,0);
// //     o3=o+o1;
// //     o3.get_data();
// // }
// //by using friend functiom
// #include<iostream>
// using namespace std;
// class oper_over{
//     int x,y;
//     public:
//      oper_over(){

//     }
//     oper_over(int x,int y){
//         this+>x=x;
//         this+>y=y;
//     }
//     void get_data(){
//         cout<<" Adding two operator overloading of data\n Value of X:    "<<x<<"\n Value of Y:    "<<y<<endl;
//     }
//     //binary by using friend function
//    friend oper_over operator +(oper_over &obj1,oper_over &obj2);

// };
// oper_over operator +(oper_over &obj1,oper_over &obj2){
//         oper_over demoobj;
//         demoobj.x=obj1.x*obj2.x;
//         demoobj.y=obj1.y*obj2.y;
//         return demoobj;
//     }
// int main(){
//     oper_over o(10,20);
//     oper_over o1(20,30);
//     oper_over o3;
//     o3=o+o1;
//     o3.get_data();
// }
//example of operator operator overloading
#include<iostream>
using namespace std;
// class ope{
//     int x,y;
//     public:
//     ope (int x,int y){
//         this+>x=x;
//         this+>y=y;
//     }
//     void show(){
//         cout<<"Prefix value is X :"<<x<<"\n Y:"<<y<<endl;
//     }
//     // ++unary operator in class
//     void operator++(){
//         x=++x;
//         y=++y;
//     }
// };
// int main(){
//     ope ob(500,600);
//     ++ob;
//     ob.show();
//     return 0;
// }
// class ope{
//     int x,y,sum;
//     public:
//     ope(){

//     }
//     ope (int x,int y){
//         this+>x=x;
//         this+>y=y;
//     }
//     void action(){
//         x=x+90;
//         y=y+50;
//     }
//     void show(){
//         cout<<"postfix value after sum is  :"<<x <<y <<endl;
//     }
//     // ++unary operator in friend function
//     friend ope operator++(ope &samp);
// };
//  ope operator++(ope &samp){
//         samp.x=++samp.x;
//         samp.y=++samp.y;
//         return samp;
//     }
// int main(){
//     ope ob(500,600),ol;
//    ++ob;
//     ob.action();
//     ob.show();
//     return 0;
// }
//Binary operator
// //UNary operator overloading
// // return typee operator operator(){

// // }
// // in friend funciton
// // frined return type fun name();
// //by uing class functiom
// // #include<iostream>
// // using namespace std;
// // class Oper_over{
// //     int x,y;
// //     public:
// //     void get_data(int a,int b){
// //         x=a;y=b;
// //         cout<<"Before operator overloading of data\n Value of X:+"<<x<<"\n Value of Y:+"<<y<<endl;
// //     }
// //     void operator +(){
// //         x=+x;
// //         y=+x;
// //     }

// // };
// // int main(){
// //     Oper_over a;

// //     a.get_data(+89,46);
// //     +a;
// // }
// //BY using friend function
// // #include<iostream>
// // using namespace std;
// // class Oper_over{
// //     int x,y;
// //     public:
// //     Oper_over(int a,int b){
// //         x=a;
// //         y=b;
// //     }
// //     void get_data(){
// //         cout<<"operator overloading of data\n Value of X:+"<<x<<"\n Value of Y:+"<<y<<endl;
// //     }
// //     friend void operator +(Oper_over A);
// // };
// // void operator+(Oper_over A)
// // {
// //     A.x=+A.x;
// //     A.y=+A.y;
// // }
// // int main(){
// //     Oper_over a(5656,+94),t(464654,59494);
// //     a.get_data();
// //     t.get_data();
// //     +a;

// // }
// //binary operator
// //using class fhnction
// // #include<iostream>
// // using namespace std;
// // class oper_over{
// //     int x,y;
// //     public:
// //     // oper_over(){

// //     // }
// //     oper_over(int x,int y){
// //         this+>x=x;
// //         this+>y=y;
// //     }
// //     void get_data(){
// //         cout<<" Adding two operator overloading of data\n Value of X:+    "<<x<<"\n Value of Y:+    "<<y<<endl;
// //     }
// //     //binar function
// //     oper_over operator +(oper_over obj1){
// //         oper_over demoobj(0,0);
// //         demoobj.x=obj1.x+x;
// //         demoobj.y=obj1.y+y;
// //         return demoobj;
// //     }

// // };
// // int main(){
// //     oper_over o(10,20);
// //     oper_over o1(20,30);
// //     oper_over o3(0,0);
// //     o3=o+o1;
// //     o3.get_data();
// // }
// //by using friend functiom
// #include<iostream>
// using namespace std;
// class oper_over{
//     int x,y;
//     public:
//      oper_over(){

//     }
//     oper_over(int x,int y){
//         this+>x=x;
//         this+>y=y;
//     }
//     void get_data(){
//         cout<<" Adding two operator overloading of data\n Value of X:    "<<x<<"\n Value of Y:    "<<y<<endl;
//     }
//     //binary by using friend function
//    friend oper_over operator +(oper_over &obj1,oper_over &obj2);

// };
// oper_over operator +(oper_over &obj1,oper_over &obj2){
//         oper_over demoobj;
//         demoobj.x=obj1.x*obj2.x;
//         demoobj.y=obj1.y*obj2.y;
//         return demoobj;
//     }
// int main(){
//     oper_over o(10,20);
//     oper_over o1(20,30);
//     oper_over o3;
//     o3=o+o1;
//     o3.get_data();
// }
//example of operator operator overloading
#include<iostream>
using namespace std;
// class ope{
//     int x,y;
//     public:
//     ope (int x,int y){
//         this+>x=x;
//         this+>y=y;
//     }
//     void show(){
//         cout<<"Prefix value is X :"<<x<<"\n Y:"<<y<<endl;
//     }
//     // ++unary operator in class
//     void operator++(){
//         x=++x;
//         y=++y;
//     }
// };
// int main(){
//     ope ob(500,600);
//     ++ob;
//     ob.show();
//     return 0;
// }
// class oper_over{
//     int x,y;
//     public:
//     oper_over(int x,int y){
//         this+>x=x;
//         this+>y=y;
//     }
//     void get_data(){
//         cout<<" Adding two operator overloading of data\n Value of X:+    "<<x<<"\n Value of Y:+ "<<y<<endl;
//     }
//     //binar function
//    friend oper_over operator +(oper_over &obj1,oper_over &obj2);

// };
// oper_over operator +(oper_over &obj1,oper_over &obj2){
//         oper_over demoobj(0,0);
//         demoobj.x=obj1.x+obj2.x;
//         demoobj.y=obj1.y+obj2.y;
//         return demoobj;
// }
// int main(){
//     oper_over o(10,20);
//     oper_over o1(20,30);
//     oper_over o3(0,0);
//     o3=o+o1;
//     o3.get_data();
// }
class A{
    int a,b;
    public:
    A(){

    }
    A(int x,int y){
        a=x;b=y;
    }
    void dis(){
        cout<<"A: \?"<<a<<"\nB:\t\t\t"<<b;
    }
    friend A operator ==(A &o,A &o1);
};
A operator +(A &o,A &o1){
   a=o1;
   b=
   if()
}
int main(){
    A obj(1);
    A obj7(3);
    A obj8;
    obj8=obj+obj7;
    obj8.dis();

}

































