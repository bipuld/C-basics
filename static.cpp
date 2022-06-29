// #include<iostream>
// using namespace std;
// //types of Static
// //1 Static local variable
// /*int fun()
// {

//     static int n1=0;
//     n1++;
//     cout<<"Example of Static local varible"<<n1<<endl;
// }
// int main()
// {

//     fun();
//     fun();
//     fun();

// }*/
// //Static member variable and static membr
// class Fun{
//     float n,sum;
//     static float n1;
//     Fun(){
//         n=0;
//         sum=0;
//     }
//      Fun(float x,float y,float z){
//         n=x;
//         n1=y;
//     }
//    //member fun outside the class
//     void get_result();
// };
// void Fun::get_result()
// { //result funciton
//     sum=n+sum;
//     cout<<"Sum of Number of X and y :"<<sum<<endl;
// }
// //static function
// int float::y=0;
// int main(){
//     Fun obj;
//     obj.get_result();
//     return 0;
// }
#include<iostream>
using namespace std;
// class Requ{
//     int x;
//     static float y;
//     public:
//         Requ(int a,int b){
//             x=a;
//             y=b;
//         }
//         void result();
// };
// //static funciton
// float Requ::y=0;
// //member function
// void Requ::result(){
//     cout<<"Value is X and y"<<x<<y<<endl;
// }
// int main()
// {
//     Requ oo(89,56);
//     oo.result();
// }
// static member function
//sum of two number
class  Add{
    static float x;//static member variable
    float y,sum;
    public:
    Add(){
        sum=0;
    }
    static void get_sresult( int a){
        x=a;
        cout<<"Input the numbe of elements in x:"<<a<<endl;
    }
    void get_data(int c){
          y=c;
          cout<<"the number in y:"<<c<<endl;

}
void result();
};
float Add::x;
void  Add::result()
    {
        sum=x+y;
    cout<<"sum of  X and y"<<sum<<endl;
}
int main(){
    Add value;
Add::get_sresult(8556);
    value.get_sresult(58.63);
    value.get_data(854.633);
    value.result();
    return 0;
    }

















































