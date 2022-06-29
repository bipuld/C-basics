#include<iostream>
using namespace std;
//syntax
/* class_name{
    acess speciffier:
    data members;
     return type member function name//function decleration
};
return type Class name::member function name of that class()
{

}
*/
class Mobile{
    string IMI;
    string mob_name;
    public:
    void get_data();
    void display_data();
};
//accessing member function outside the class
void Mobile::get_data(){
    cout<<"Enter the name of mobile"<<endl;
    cin>>mob_name;
    cout<<"And also the IMI of "<<mob_name<<endl;
    cin>>IMI;
}
void Mobile::display_data(){
    cout<<"The name of Phone is "<<mob_name<<" and "<<mob_name<<" contain Imi number are: "<<IMI<<endl;
}
int main()
{
    Mobile bipul;
    bipul.get_data();
    bipul.display_data();







}
