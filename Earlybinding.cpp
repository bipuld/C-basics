#include<iostream>
using namespace std;
class Adidas
{
    public:

    virtual void sportwear()
    {
        cout << "Adidas brand has sport wear product which is available in our store"<<endl;
    }
};
class Sneaker:public Adidas
{
    public:
    void sportwear()
    {
        cout << "Sneaker of Adidas brand has sport wear product which is not available in our store"<<endl;
    }
    
};//functiion overriding
int main()
{
    Sneaker running;
    Adidas *ptr=&running;
    ptr->sportwear();
    return 0;
}