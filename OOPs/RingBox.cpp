#include <iostream>
using namespace std;

class Ring
{
private:
	float radius;
public:
	void getRadius(){
		cin>>radius;
	}

	float ringArea(){
		return 3.14*radius*radius;
	}
	
};

class Box
{
private:
	float length;
	float breadth;
	float height;
public:
	void getRect()
	{
		cin>>length>>breadth>>height;
	}

	float boxArea(){
		return length*breadth;
	}

};

int main()
{
	Ring ring;
	Box box;
	ring.getRadius();
	box.getRect();

	if (ring.ringArea() < box.boxArea())
	{
		cout<<"Yes";
	}else{
		cout<<"No";
	}

	return 0;
}