#include <iostream>
using namespace std;
/*
    A drink costs 2 dollars. A taco costs 4 dollars. Given the number of each, compute total cost and assign totalCost with the result. Ex: 4 drinks and 6 tacos yields totalCost of 32.
*/
int main() {
   int numBeverages;
   int numBurritos;
   int totalCost;

   cin >> numBeverages;
   cin >> numBurritos;

   totalCost = (numBurritos * 4) + (numBeverages * 2);

   cout << "Total cost: " << totalCost << endl;

   return 0;
}