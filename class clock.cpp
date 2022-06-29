#include <iostream>
using namespace std;

// create a class
class Room {

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
    void getdata(){
    	cout<<"Enter length,breadth,height:"<<endl;
    	cin>>length>>breadth>>height;
	}
};

int main() {

    // create object of Room class
    Room r1[30];
    int i,n;
    cout<<"Enter no of room that you calculate"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
    	r1[i].getdata();
	}

    // assign values to data members
//    room1.length = 42.5;
//    room1.breadth = 30.8;
//    room1.height = 19.2;

    // calculate and display the area and volume of the room
    for(i=0;i<n;i++){
	cout << "Area of Room =  " << r1[i].calculateArea() << endl;
    cout << "Volume of Room =  " << r1[i].calculateVolume() << endl;
}
    return 0;
}
