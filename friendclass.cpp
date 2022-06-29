#include<iostream>
using namespace std;
class A{

    int x;
    public:
    void input(int n)
    {
        x=n;
        cout<<"The data you input  x as "<<x<<endl;
    }
    friend class D;
};
class D{
    int sum,y,z;
    public:
    void input(int a,int b){
    y=a;
    z=b;
    cout<<"The data you input  y"<<y<<" and z is as "<<z<<endl;
    }
    void add(A obj){
        int sum=obj.x+y+z;
    cout<<"Sum is :"<<sum<<endl;
    }
};
int main(){
    A o;
    D o2;
    o.input(566);
    o2.input(4444,66);
    o2.add(o);
}
