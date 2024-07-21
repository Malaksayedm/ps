#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// Function to calculate the area
float calculateArea(string shape, float params[]) {
    if (shape == "rectangle") {
        return params[0] * params[1];
    } else if (shape == "triangle") {
        return 0.5 * params[0] * params[1];
    } else if (shape == "circle") {
        return M_PI * params[0] * params[0];
    } else if (shape == "square") {
        return params[0] * params[0];
    } else if (shape == "trapezoid") {
        return 0.5 * (params[0] + params[1]) * params[2]; 
    } else if (shape == "rhombus") {
        return 0.5 * params[0] * params[1]; 
    } else if (shape == "hexagon") {
        return (3 * sqrt(3) / 2) * params[0] * params[0];
    } else if (shape == "octagon") {
        return 2 * (1 + sqrt(2)) * params[0] * params[0];
    } else {
        cout << "Shape not recognized." << endl;
        return 0;
    }
}
int main() {
    // prompting user for the shape 1/1.5
    string shape;
    unsigned paramCount;
    cout << "Enter the shape: ";
    cin >> shape;

    // check the validaty of the choice for the shape 1/1
    if (shape == "rectangle" || shape == "triangle" || shape == "trapezoid" || shape == "rhombus") {
        paramCount = 2;
        if (shape == "trapezoid") {
            paramCount = 3;
        }
    } else if (shape == "circle" || shape == "square" || shape == "hexagon" || shape == "octagon") {
        paramCount = 1;
    } else {
        cout << "Shape not recognized." << endl;
        return 1;
    }
    
    // fill in the dimensions array 2/3
    float params[paramCount];
    for (int i = 0; i < paramCount; ++i) {
        cout << "Enter parameter " << i + 1 << ": ";
        cin >> params[i];
        if (params[i] <= 0)
            i--;
    }

    // printing out the area of the shape 1/1
    float area = calculateArea(shape, params);
    cout << "The area of the " << shape << " is: " << area << endl;

    return 0;
}
// great work 😎 8/10 ⭐
