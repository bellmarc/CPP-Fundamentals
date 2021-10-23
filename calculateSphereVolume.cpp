#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
/*
    Given sphereRadius, compute the volume of a sphere and assign sphereVolume with the result.
    Volume of sphere = (4.0 / 3.0) π r3
*/
int main() {
    
   double sphereVolume;
   double sphereRadius;

   cin >> sphereRadius;

   double radiusTripled = sphereRadius * sphereRadius * sphereRadius;
   sphereVolume = (4.0/3.0) * radiusTripled * M_PI; //(4.0 / 3.0) used to perform floating-point division instead of (4 / 3) which performs integer division.

   cout << fixed << setprecision(2) << sphereVolume << endl;

   return 0;
}