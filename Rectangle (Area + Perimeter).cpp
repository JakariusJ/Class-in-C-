#include <iostream>
using namespace std;

class rectangle
{
private:
    double length;
    double width;

public:
    void set_dimension(double rectlength, double rectwidth)
    {
        length = rectlength;
        width = rectwidth;
    }

    double get_area()
    {
        return length * width;
    }

    double get_peri()
    {
        return 2 * (length + width);
    }

    void displaydetails()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << get_area() << endl;
        cout << "Perimeter: " << get_peri() << endl;
    }
};

int main()
{
    rectangle rect1;

    rect1.set_dimension(5.0, 3.0);
    rect_1.displaydetails();


    return 0;
}