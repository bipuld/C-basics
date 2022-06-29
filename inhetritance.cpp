//virtual function
//late binnding orstatuic binding ordynamic binding
//Runtime polymaharism
#include<iostream>
using namespace  std;
class LumbiniICT
{
public:
   virtual void study()
    {
        cout<<"Study in lumbini ICT"<<endl;
    }
};
class BscCsit:public LumbiniICT
{
public:
   void study()
    {
        cout<<"Study BSCCSIT"<<endl;
    }

};
int main()
{
   BscCsit obj1;
   LumbiniICT *ptr=&obj1;//Early binding
   ptr->study();
   return 0;
}






