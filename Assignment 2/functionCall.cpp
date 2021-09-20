#include <iostream> 
#include <cmath>

using namespace std;

double volCube(double a){
    double V;

    V = pow(a,3);

    return V;
}

double volTri(double h, double a, double c, double b){
    double V;

    V = (1.0/4.0) * h * sqrt(-1 * pow(a , 4) + 2 * pow(a * b , 2) + 2 * pow(a * c, 2) - pow(b , 4) + 2 * pow(b * c , 2) - pow(c , 4));
    
    return V;
}

double volCyl(double r, double h){
    double V;

    V = 3.1415 * pow(r,2) * h;

    return V;
}

int main() {
    double cubeA, triH, triA, triC, triB, cylR, cylH, volC, volT, volCy;

    cout << "Enter the edge length of a cube: ";
    cin >> cubeA;

    cout << "Enter side a of the triangular prism: ";
    cin >> triA;

    cout << "Enter side b: ";
    cin >> triB;

    cout <<"Enter side c: ";
    cin >> triC;

    cout << "Enter the height of the triangular prism: ";
    cin >> triH;

    cout << "Enter the radius of the cylinder: ";
    cin >> cylR;

    cout << "Enter the height of the cylinder: ";
    cin >> cylH;

    volC = volCube(cubeA);

    volT = volTri(triH, triA, triC, triB);

    volCy = volCyl(cylR, cylH);

    cout << "The volume of the cube is: " << volC << endl;

    cout << "The volume of the triangular prism is: " << volT << endl;

    cout << "The volume of the cylinder is: " << volCy << endl;

    return 0;
}

