#include <iostream>
using namespace std;

class Shape {

    protected:
        int width;
        int height;

    public:
        void setWidthAndHeight(int w, int h){

            width = w;
            height = h;
        }
};

class Rectangle: public Shape{

  public:
    int areaOfRectangle(){

        return (width * height);
    }
};

class Triangle : public Shape{

    public: 
        int areaOfTriangle(){

            return (width * height);

        }

};

int main() {

    int rectWidth, rectHeight, triWidth, triHeight;

    cout << "Enter the width of the rectangle: ";
    cin >> rectWidth;

    cout << "Enter the height of the rectangle: ";
    cin >> rectHeight;

    cout << "Enter the width of the triangle: ";
    cin >> triWidth;

    cout << "Enter the height of the triangle: ";
    cin >> triHeight;

    Rectangle rectOne;
    Triangle triOne;

    rectOne.setWidthAndHeight(rectWidth, rectHeight);
    cout << "The area of the rectangle is: " << rectOne.areaOfRectangle() << "\n";

    triOne.setWidthAndHeight(triWidth, triHeight);
    cout << "The area of the triangle is: " << triOne.areaOfTriangle();

}