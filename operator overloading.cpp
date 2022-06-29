#include<iostream>
using namespace std;
class social_network
{
    int x;
    public:
    social_network(int a)
    {
        a=x;
    }
    void operator +()
    {
        ++a;
    }
 void display()
 {
     cout << "x: " << a << endl;
 }
};
int  main()
{
    social_network facebook(600);
    operator++;
    facebook.display();
}
