#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
public:
    Point(int X=60, int Y=80)
    {
        x = X;
        y = Y;
    }
    void setPoint(int i, int j);
    void display();
};
void Point::setPoint(int i, int j)
{
    x += i;
    y += j;
}
void Point::display()
{
    cout << "(" << x << "," << y << ")" << endl;
}
int main()
{
    Point point;
    point.display();
    point.setPoint(20, 10);
    point.display();
    return 0;
}

