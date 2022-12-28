#include <iostream>
#include <cmath>
using namespace std;

float calculateArea(float width, float height){
return width * height/2;}
float calculatePerimeter(float width, float Tside1, float Tside2){
return width + Tside1 + Tside2;}

float calculateAreaR(float Rside1 , float Rside2) {
return Rside1 * Rside2;}
float calculatePerimeterR(float Rside1,float Rside2) {
return (Rside1 + Rside2)*2;
}

float calculateAreaS(float side) {
return side * side;}
float calculatePerimeterS(float side) {
return side*4;
}

float calculateAreaC(float radius) {
return pow(radius,2)*3.14 ;}
float calculateCircumferenceC(float radius) {
return 3.14 * (radius*2);
}


class Triangle {
    public:
float width;
float Tside1;
float Tside2;
float height;
};

class Rectangle {

   public:
    float Rside1;
    float Rside2;
};

class Square {
   public:
    float side;
};

class Circle {
public:
    float radius;
};

int main(){
Triangle triangle;
Rectangle rectangle;
Square square;
Circle circle;
int a1,b1,c1,d1,a2,b2,c2,d2,a3,a4;
triangle.width = a1;
triangle.height = b1;
triangle.Tside1 = c1;
triangle.Tside2 = d1;
rectangle.Rside1 = a2;
rectangle.Rside2 = b2;
square.side = a3;
circle.radius = a4;

int shapetype;
cout << "What shape do you want to calculate" << endl;
cout << "Triangle - 1 ,Rectangle - 2, Square - 3, Circle - 4 " << endl;
cin >> shapetype;


if (shapetype == 1){
cout << "Enter width,height,side1,side2 lenghts" << endl;
cin >> a1;
cin >> b1;
cin >> c1;
cin >> d1;
cout << "Area of Triangle =  " << calculateArea(a1, b1) << endl;
cout << "Perimeter of Triangle =  " << calculatePerimeter(a1, c1, d1) << endl;
}

if (shapetype == 2){
cout << "Enter side1,side2,side3,side4 lenghts" << endl;
cin >> a2;
cin >> b2;
cin >> c2;
cin >> d2;
cout << "Area of Rectangle =  " << calculateAreaR(a2, b2) << endl;
cout << "Perimeter of Rectangle =  " << calculatePerimeterR(a2,b2) << endl;
};

if (shapetype == 3){
cout << "Enter side lenghts" << endl;
cin >> a3;
cout << "Area of Square =  " << calculateAreaS(a3) << endl;
cout << "Perimeter of Square =  " << calculatePerimeterS(a3) << endl;
};

if (shapetype == 4){
cout << "Enter diameter lenghts" << endl;
cin >> a4;
cout << "Area of Circle =  " << calculateAreaC(a4) << endl;
cout << "Circumference of Circle =  " << calculateCircumferenceC(a4) << endl;
}
 return 0;
}
