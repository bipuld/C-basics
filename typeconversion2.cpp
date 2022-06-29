//user define too basic type
// #include<iostream>
// using namespace std;
// class Conver{
//     float feet,inch;
//     public:
//     Conver(){
//         cout<<"Conversion of meter in  to inch "<<endl;
//     }

//     void get_value(){
//         cout<<"Enter the value of Meter to convert feet and  inch to meter"<<endl;
//         cin>>feet>>inch;
//     }
//     //by using operator casting
//      operator float (){
//          float f=feet+(inch/12);
//          float ans=f/3.3;
//          return ans;

//      }
// };
// int main(){
//     Conver c;
//     c.get_value();
//     float Meter;
//     Meter=c;
//     cout<<"Meter"<<Meter;
//     return 0;
// }
//BY using constructor conversion
// #include<iostream>
// using namespace std;
// class Conver{
//     float feet,inch;
//     float meter;
//     public:
//     Conver(){
//         cout<<"Conversion of meter in  to feet and  inch "<<endl;

//     }

//  void get_value(){;
//       cout<<"Enter value of feet and inch"<<endl;
//          cin>>feet>>inch;
//     }
//     //by using constructor converter and now by using casting operator
//      operator float(){
//          float f=feet+(inch/12);
//          meter=f/3.3;
//          return meter;

//      }

// };
// int main(){
//     Conver c;
//     float Meter;
//     c.get_value();
//     Meter=c;;
//     cout<<"Meter :"<<Meter<<endl;
// }
// F = (C * 1.8) + 32.
// c=(F-32)/1.8
// #include <iostream>
// using namespace std;
// class Temp{
//     float Fahrenheit; //By  using Constructor converted
//     public:
//         Temp(){
//         Fahrenheit=0;
//         }
//     Temp(float cell){
//     Fahrenheit =(cell*1.8)+32;
//     }
//     void ans(){
//         cout<<"Temperature in Fahrenheit : "<<Fahrenheit<<endl;
//     }


// };
// int main(){
//     // Temp celisus;//by using basic to user define converting constructor
//     // float C=37.5;
//     // celisus=C;
//     // celisus.ans();

//  Temp celisus;//by using userdefine to Baisc in constructor
// float C;
// cout<<"Enter the temperature in Celsius";
// cin>>C;
//     celisus=C;
//     celisus.ans();
// }
// by using casting operator
// #include <iostream>
// using namespace std;
// class Temp{
//     float Celisus,Fahrenheit; //By  using Constructor converted
//     public:
//     void o(){
//         cout<<"Enter the temperature in Fareneit";
//         cin>>Fahrenheit;
//     }

//     operator float(){
//     Celisus=(Fahrenheit-32)/1.8;
//         return Celisus;
//     }
// };
// int main(){
//  Temp celisus;//by using userdefine to Baisc in constructor convert
// float F;
// celisus.o();

//     F=celisus;
//     cout<<" Temperature in Fahrenheit : "<<F<<endl;
// }

////////////////////////////////////////////////////////////////User define to user  deine
// #include<iostream>
// using namespace std;
// //celsisus to farenheit
// //  F = (C * 1.8) + 32.
// // (If the question asks just opposite, the formula to convert Celsius to Fahrenheit
// // is: C = (F - 32) /1.8).
// class TEMP{ //by basic to userdefine
//     int Fahrenheit;
//     public:
//      TEMP(){
//          Fahrenheit=0;
//     }
//     TEMP(int c){
//         Fahrenheit=(c*1.8)+32;
//     }
//     void get(){
//         cout<<"Tem in Fahrenheit  "<<Fahrenheit<<endl;
//     }

// };
// int main(){
// TEMP t;
// float t1=37.5;
// t=t1;
// t.get();

// }
// #include<iostream>
// using namespace std;
// //celsisus to farenheit
// //  F = (C * 1.8) + 32.
// // (If the question asks just opposite, the formula to convert Celsius to Fahrenheit
// // is: C = (F - 32) /1.8).
// class TEMP{ //by basic to userdefine //user define to farenheit
//     float celius,C;
//     public:
//      TEMP(){
//          celius=0;
//     }
//     void v(){
//     cout<<" Enter Tem in Fahrenheit  "<<endl;
// cin>>C;
//     }
//     operator float(){
//         celius=(C-32)/1.8;
//         return celius;
//     }
//     void get(){
// cout<<"Temperature in celisu"<<celius;
//     }

// };
// int main(){
// TEMP t;
// float C1;
// t.v();
// C1=t;
// t.get();

// }
