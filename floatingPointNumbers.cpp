
#include <iostream>
using namespace std;
/*

A floating-point number is a real number containing a decimal point that can appear anywhere (or "float") in the number. Ex: 98.6, 0.0001, or -55.667. A double variable stores a floating-point number. Ex: double milesTravel; declares a double variable.

A floating-point literal is a number with a fractional part, even if the fraction is 0, as in 1.0, 0.0, or 99.573. Good practice is to always have a digit before the decimal point, as in 0.5, since .5 might mistakenly be viewed as 5.

*/

int main() {
   double milesToTravel; // User input of miles to travel
   double hoursToFly;    // Travel hours if flying those miles
   double hoursToDrive;  // Travel hours if driving those miles
   //string currentLocation ; // User input of current location 
   string yourDestination; // User input of final travel Destination 
   
   cout << "Enter travel destination: " << endl;
   cin >> yourDestination;
   cout << "Enter miles to travel: ";
   cin  >> milesToTravel;
   
   hoursToFly   = milesToTravel / 500.0; // Plane flies 500 mph
   hoursToDrive = milesToTravel / 60.0;  // Car drives 60 mph
   
   cout << milesToTravel << " miles would take:" << endl;
   cout << "   " << hoursToFly << " hours to fly" << endl;
   cout << "   " << hoursToDrive << " hours to drive" << endl;
   //cout << "From " << currentLocation;
   cout << "In order to reach, " << yourDestination << ", your destination." << endl;
   return 0;
}

/*
//Ex: Manipulating floating-point output:
// Note: setprecision() is found in the iomanip library. fixed and setprecision() are manipulators that need only be written once if the desired number of digits after the decimal point is the same for multiple floating-point numbers. 

cout << fixed << setprecision(3) << 3.1244 << endl;
cout << 2.1 << endl;
// outputs 3.124 and 2.100


// Next example: Reducing the output of pi.

cout << "Default output of pi: " << M_PI << endl;
cout << "pi reduced to 4 digits after the decimal: ";
cout << fixed << setprecision(4) << M_PI << endl;

// pi reduced to 4 digits after the decimal: 3.1416
// Default output of pi: 3.14159

*/