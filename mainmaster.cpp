#include <iostream>

using namespace std;

int main()
{
    string z;
    int x,y;
    int sqcontrol;
	int sq;
    int recmode;
	int reclong,recshort;
	int trimode;
	int tria,trib,tric;
	int triareay;
	int triareax;
	int triheight;
	int tribase;
	
	cout<<"Please Enter a number"<<endl;
	cin>>x;
	cout<<"Please Enter a number"<<endl;
	cin>>y;
	cout<<"Please Enter an operation"<<endl;
	cin>>z;
	
	if (z == "+"){
		cout<<x+y<<endl;
	} else if (z == "-"){
		cout<<x-y<<endl;
	} else if (z == "*"){
		cout<<x*y<<endl;
	} else if (z == "/"){
		cout<<x/y<<endl;
	} else if (z == "+!"){
		cout<<y+x<<endl;
	} else if (z == "-!"){
		cout<<y-x<<endl;
	} else if (z == "*!"){
		cout<<y*x<<endl;
	} else if (z == "/!"){
		cout<<y/x<<endl;
	} else if (z == "AD") {
		cout<<"Please Enter a mode. 1 to calcuate the are of a square . to  2 to calculate the perimeter of a square. 3 to enter rectangle mode 4 to enter triangle mode"<<endl;
		cin>>sqcontrol;
	} else {
		cout<<"WTF?"<<endl;
	}
	
	switch (sqcontrol){
		case 1:
			cout<<"Enter How long one side of the square:"<<endl;
			cin>>sq;
			
			cout<<sq * sq<<endl;
			break;
		case 2:
			cout<<"Enter How long one side of the square:"<<endl;
			cin>>sq;
			
			cout<<sq * 4<<endl;
			break;
		case 3:
			cout<<"1 to calculate area of a rectangle. 2 to calculate the perimeter of a rectangle"<<endl;
			cin>>recmode;
			break;
		case 4:
			cout<<"1 to calculate area of a triangle. 2 to calculate the perimeter of a triangle"<<endl;
			cin>>trimode;
			break;
		default:
			cout<<"WDYM"<<endl;
			break;
	}
	
	switch (recmode){
		case 1:
			cout<<"Please Enter how long is the short side of the rectangle"<<endl;
			cin>>recshort;
			cout<<"Please Enter how long is the long side of the rectangle"<<endl;
			cin>>reclong;
			
			cout<<recshort * reclong<<endl;
			break;
		case 2:
			cout<<"Please Enter how long is the short side of the rectangle"<<endl;
			cin>>recshort;
			cout<<"Please Enter how long is the long side of the rectangle"<<endl;
			cin>>reclong;
			
			cout<<recshort + recshort + reclong + reclong<<endl;
			break;
		default:
		    cout<<"WAT"<<endl;
			break;
	}
	
	switch (trimode){
		case 1:
			cout<<"Please Enter the height of the triangle"<<endl;
			cin>>triheight;
			cout<<"Please Enter the base long of the triangle"<<endl;
			cin>>trilong;
			
			triareay = triheight * trilong;
			triareax = triareay / 2;
			
			cout<<triareax<<endl;
			break;
	}	
	

    return 0;
}
