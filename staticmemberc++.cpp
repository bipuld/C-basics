// type of static members
// 1.Static local variables (static storage classes)
// 2.static member variables
// 3.static member functions
// Static local variables
// synatx:
//Static local variables
#include <iostream>
using namespace std;
// using namespace std;
// int c_fun(){
//     static int count=0;
//     count++;
//     cout<<count<<endl;
// }

// int main(){
//     c_fun();
//     c_fun();
//     c_fun();
//     c_fun();
//     c_fun();
// }
//static member variables and  static member functions
// class Teacher{
//     int x,y;
//     static int z;
//     public:
//     Teacher(int a,int b,int c)
//     {
//         a=x;
//         b=y;
//         c=z;
//     }

//     void display();
//   static void D1(){
//       cout<<"Value of z = "<<z<<endl;
//   }
// };
// //declearing static outsdie the class
// int Teacher::z=0;
// void Teacher :: D1(){

//          cout<<"Value  of X ="<<x<<" y = "<<y<<" & Z = "<<z<<endl;
//          }
// int main(){
//     Teacher obj(10,20,30);
//     obj.display();
//     Teacher obj1(15,85,100);
//     obj1.display();
//     Teacher::D1();//accesing static member without object
// }
// class D{
//     int a,sum;
//     static int y;
//     public:
//     D(int k)
//     {
//         sum=0;
//         a=k;
//         }
//      static int  get();
//     void print(){
//         sum=a+y;
//         cout<<"Sum: "<<sum<<endl;
//     }
// };
//  int D::get(){

//        cout<<"Enter value of Y "<<endl;
//         cin>>y;
//     }
// int main(){
//     D o(5);
//     D::get();
//     o.print();
//     return 0;

// }
// int functions(){
//     static int y=0;
//     y++;
//     cout<<"Y " <<y<<endl;
// }
// int main(){
//     functions();
//       functions();
//         functions();
//           functions();
//             functions();
// return 0;
// }














































