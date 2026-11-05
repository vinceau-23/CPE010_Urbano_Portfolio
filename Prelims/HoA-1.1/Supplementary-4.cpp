#include <iostream>

class Triangle{
private:
    double totalAngle, angleA, angleB, angleC;
    public:
    Triangle(double A, double B, double C);
    void setAngles(double A, double B, double C);
    const bool validateTriangle();
    double areaTriangle(double base, double height);
    double perimeterTriangle(double A, double B, double C);
    void triangleType();
    };

int count = 0;
int main() {
    Triangle set1(80,190,90);
    if (set1.validateTriangle()) {
        std::cout << "The shape is a valid triangle.\n";
    }else {
        std::cout << "The shape is Not a valid triangle.\n";
    }
    set1.areaTriangle(40,110);
    set1.perimeterTriangle(12,10, 20);
    set1.triangleType();
    return 0;
}
Triangle::Triangle(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A+B+C;
}
void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
}
const bool Triangle::validateTriangle() {
    return (totalAngle <=180);
}
double Triangle::areaTriangle(double base, double height) {
    double area =  (base*height)/2;
    std::cout << "The area of your triangle is " << area << "\n";
    return area;
}
double Triangle::perimeterTriangle(double A, double B, double C) {
    double P = A+B+C;
    std::cout << "The perimeter of your triangle is " << P<< std::endl;
    return P;
}
void Triangle::triangleType() {
    if (angleA == 90 or angleB == 90 or angleC == 90) {
        std::cout << "Right angled.\n";
    }
    else if (angleA > 90 or angleB > 90 or angleC > 90){
        std::cout << "Obtuse angled.\n";
    } else{
        std::cout << "Acute angled\n";
    }
}