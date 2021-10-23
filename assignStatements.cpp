#include <iostream>
using namespace std;

int main() {
   //avg 4 kittens per litter && max up to 12 is a possibility
   int catlitterSize;
   int yearlyKittenLitters;
   int annualKittenLitterCount;

   catlitterSize = 1; // Low end of litter size range
   // Consider c++ rand for litters ranging 1-12
   yearlyKittenLitters = 5; // Low end of litters per year

   cout << "One female cat may give birth to ";
   annualKittenLitterCount = catlitterSize * yearlyKittenLitters;
   cout << annualKittenLitterCount << " kittens," << endl;
   
   catlitterSize = 12; // High end
   yearlyKittenLitters = 5; // High end

   cout << "and up to ";
   annualKittenLitterCount = catlitterSize * yearlyKittenLitters;
   cout << annualKittenLitterCount << " kittens, in a year." << endl;
   
   return 0;
}