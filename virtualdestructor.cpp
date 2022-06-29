#include<iostream>
using namespace std;
class Base{
    public:
     virtual ~Base(){
        cout<<"+++++++++Helloo ! I am a destructor"<<endl;
    }
};
class Derived_class:public Base{
    public:
    ~Derived_class(){
        cout<<"Hello ! GUyz I am destuctor from Derived class"<<endl;
    }
};
int main(){
    //syntax
    Base *ptr;
    ptr=new Derived_class;//making object dynamically
    delete ptr;
    return 0;
}
