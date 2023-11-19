#include <iostream>
#include <stdexcept>
using namespace std;
// Function to solve the linear equation ax + b = 0
double solveLinearEquation(double a, double b) {
    // Check if 'a' is zero (division by zero is undefined)
    if (a == 0) {
        throw invalid_argument("Coefficient 'a' cannot be zero. The equation has no solution or infinite solutions.");
    }

    // Calculate the solution x = -b/a
    return -b / a;
}

int main() {
    try {
        // Example usage
        double a, b;

        cout << "Enter the coefficient 'a': ";
        cin >> a;

        cout << "Enter the coefficient 'b': ";
        cin >> b;

        // Call the function to solve the linear equation
        double solution = solveLinearEquation(a, b);

        // Output the solution
        cout << "Solution: x = " << solution << endl;

    }
    catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
