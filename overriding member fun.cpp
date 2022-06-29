#include<iostream>
using namespace std;
class add{
protected:
    int x,y;
public:
    void get_n(){
    cout<<"Enter the num"<<endl;
    cin>>x;
    }
};
class a:public add{

public:
    a(){
   int sum=0;
    }
     void get_n(){
    cout<<"Enter the num"<<endl;
    cin>>y;
    }
    void sum1(){
    cout<<"SUM : "<<x+y<<endl;
    }
};
int main(){
a obj;
obj.add::get_n();
obj.a::get_n();
obj.sum1();
}
