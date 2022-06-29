#include<iostream>
//Object pointer same as a pointer in C
using namespace std;
/*class FathEr{;
    double x,y;
public:
    FathEr(double a,double b)
    {
        x=a;
        y=b;
    }

    void ask_money(){
    cout<<"Hello Son! give me money "<<x<<" million $ for buying house and also "<<y<<" million $ for buying rollsroyce: "<<endl;
    cout<<"value of obj address is"<<this<<endl;
    }
};
int main()
{
    FathEr harry(8900,89585);
    FathEr *iptr;
    iptr=&harry;
    iptr->ask_money();
    cout<<"obj address "<<&harry<<endl;
    cout<<"obj address of pointer is "<<iptr<<endl;


}*/
//use of this pointer
            //1.determing the adress of object  by using this in member funnction

using namespace std;
/*class FathEr{
    double x,y;
public:
    FathEr(double a,double b)
    {
        x=a;
        y=b;
    }

    void ask_money(){
    cout<<"Hello Son! give me money "<<x<<" million $ for buying house and \n"<<y<<" million $ for buying rollsroyce \n";
    cout<<"Address of current obj is"<<this<<endl;//this is uses of this function
    }
};
int main()
{
    FathEr harry(8900,89585);
    harry.ask_money();
}*/
            //2 to make compiler easy for not getting confce in local variable and passing variable in constructor or member funiton
            using namespace std;
class FathEr{
    double x,y,l,p;
public:
    FathEr(double x,double y)
    {
        this->x=x;//left x in local variable and right x is passing variable
        this->y=y;
    }

    void ask_money(double l,double p){

    this->l=l;
    this->p=p;
    cout<<"Hello Son! give me money "<<x<<" million $ for buying house and \n"<<y<<" million $ for buying rollsroyce \n";
    cout<<"Hello Son! Take this money "<<l<<" million $ for buying villa and \n"<<p<<" million $ for buying Lamborgini Urus \n";
    cout<<"Address of current obj is"<<this<<endl;//this is uses of this function
    }
};
int main()
{
    FathEr harry(8900,89585);
    harry.ask_money(5600,56556.36);
}




























