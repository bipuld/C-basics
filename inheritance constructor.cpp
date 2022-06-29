#include<iostream>
using namespace std;
//syntax derived class constructor:based claass constructor prametrized(argumemts)
//order of exceution of constructor default
class A{
    protected:
    int x,sum;
    public:
    A(){
    
        cout<<"HEllo con from base"<<endl;
    }
};
class B:public A
{   int y;
    public:
    B(){

        cout<<"SUM ="<<endl;
    }

};
int main(){
    B k;
}