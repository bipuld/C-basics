//userdefine to userdefine in to usedefine
#include<iostream>
using namespace std;
// class triangle
// {
//     int height,base,areaT;
// public:
//     triangle(int x,int y)
//     {
//         height=x;
//         base=y;
//         areaT=0.5*height*base;
//     }
//     void out()
//     {
//         cout<<"area of Triangle: "<<areaT<<endl;
//     }
//  int get_b(){
//   return base;
// }
// int get_h(){
// return height;
// }
// };
// class rectangles//destination class
// {
//     int length,width,AreaR;
//     public:
//     rectangles(int l,int w)
//     {
//         length=l;
//         width=w;
//         AreaR=length*width;
//         }

//     rectangles(triangle t){
//     length=t.get_b();
//     width=t.get_h();
//     AreaR=length*width;
//     }
//     void out1()
//     {
//         cout<<"Area of rectangles :"<<AreaR<<endl;
//     }
// };
// //source claass by using operator casting in source class

// int main()
// {
//     triangle T(10,20);//source
//     rectangles r=T;//des
//     r.out1();
//     T.out();
// }
//by using operator casting in source class
//  using constructor in destinatoin class
// class Rectangle{ //source class
//     int length,breadth,area_rec;
//     public:

//     Rectangle(int x,int y){
//         length=x;
//         breadth=y;
//         area_rec=length*breadth;
//     }
// //    using operator casting in source class
// //     operator Triangle(){
// //     Triangle temp(length,breadth);
// //     return temp;

// // }
// int get_h(){
//     return length;
// }
// int get_b(){
//     return breadth;
// }
//     void out1(){
//         cout<<"area of rectangle :"<<area_rec<<endl;
//     }


// };
// //destintion class
// class Triangle{
//     int width,height,area_t;
//     public:
//     Triangle(int w,int h){
//         width=w;
//         height=h;
        
//     }
//     Triangle(Rectangle temp){ //by using Conversion constructor in destination class
//         width=temp.get_b();
//         height=temp.get_h();
//         area_t=0.5*height*width;
        
//     }
//     void print(){
//         cout<<"Area of triangle :"<<area_t<<endl;
//     }

// };


// int main(){
//     Rectangle r(20,20);//soruce class
//     Triangle T=r;//Destinaationo class
//     r.out1();
//     T.print();


// }

