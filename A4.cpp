#include<iostream>
using namespace std;

struct Point{
	 double x, y;
    Point();
    Point(double _x, double _y) {
        x= _x;
        y = _y;
    }

    void print() {
        cout << "(" << x << " , " << y << ")"<< endl;
    	}
 	};

int main()
{
    Point a(0, 0);
    a.print();
    cout << "Dia chi cua A: " << &a << endl;    
    cout << "Dia chi cua toa do x: " << &(a.x) << endl; 
    cout << "Dia chi cua toa do y: " << &(a.y) << endl;
    return 0;
}
