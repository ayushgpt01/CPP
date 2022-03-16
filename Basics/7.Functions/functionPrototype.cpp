#include<iostream>
using namespace std;

const long double pi = 3.14159265359;

double CalcVolumeCylinder(double radius,double height); // variable names can be ommited
double CalcAreaCircle(double radius);
void AreaCircle();
void VolumeCylinder();

int main() {
    AreaCircle();
    VolumeCylinder();
    return 0;
}

void VolumeCylinder(){
    double radius {},height {};
    cout << "Enter the radius of cylinder : ";
    cin >> radius;
    cout << "Enter the height of cylinder : ";
    cin >> height;
    cout << "The volume of Cylinder is " << CalcVolumeCylinder(radius,height) << endl;
}

void AreaCircle(){
    double radius {};
    cout << "Enter the radius of Circle : ";
    cin >> radius;
    cout << "The Area of Circle is " << CalcAreaCircle(radius) << endl;
}

double CalcVolumeCylinder(double radius,double height) {
    return CalcAreaCircle(radius) * height;
}

double CalcAreaCircle(double radius) {
    return pi * radius * radius;
}