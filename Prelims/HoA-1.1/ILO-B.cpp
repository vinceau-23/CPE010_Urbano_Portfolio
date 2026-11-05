#include <iostream>

class Triangle{
private:
    double totalAngle, angleA, angleB, angleC;
    public:
    Triangle(double A, double B, double C);
    void setAngles(double A, double B, double C);
    const bool validateTriangle();
    };
int count = 0;
int main() {
    Triangle set1(40,30,110);
    if (set1.validateTriangle()) {
        std::cout << "The shape is a valid triangle.\n";
    }else {
        std::cout << "The shape is Not a valid triangle.\n";
    }
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

    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
