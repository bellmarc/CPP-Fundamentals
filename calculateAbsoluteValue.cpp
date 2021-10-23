#include <iostream>
#include <cmath>
#include <ios>
#include <iomanip>
using namespace std;

int main() {
   double x;
   double y;
   double z;

   cin >> x;
   cin >> y;

   z = y / (sqrt(fabs(x))); 

   cout << fixed << setprecision(2); // This will output only 2 decimal places.
   cout << z << endl;

   return 0;
}