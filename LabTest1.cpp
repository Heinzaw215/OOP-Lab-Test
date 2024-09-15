#include <iostream>
using namespace std;

// Define a structure to represent a distance
struct Distance {
    int feet;
    float inches;
};

// Function to return the larger of two Distance values
Distance largerDistance(Distance d1, Distance d2) {
    // Convert both distances to inches for comparison
    float totalInches1 = d1.feet * 12 + d1.inches;
    float totalInches2 = d2.feet * 12 + d2.inches;

    // Compare and return the larger Distance
    if (totalInches1 > totalInches2)
        return d1;
    else
        return d2;
}

int main() {
    Distance dist1, dist2, larger;

    // Input first distance
    cout << "Enter first distance (feet inches): ";
    cin >> dist1.feet >> dist1.inches;

    // Input second distance
    cout << "Enter second distance (feet inches): ";
    cin >> dist2.feet >> dist2.inches;

    // Find the larger distance
    larger = largerDistance(dist1, dist2);

    // Output the larger distance
    cout << "The larger distance is: " << larger.feet << " feet " << larger.inches << " inches." << endl;

    return 0;
}

