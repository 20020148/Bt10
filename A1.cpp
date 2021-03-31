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
        cout << "(" << x << " , " << y << ")";
    	}
 	};

int main()
{
    Point a(0, 0);
    a.print();
    return 0;
}
