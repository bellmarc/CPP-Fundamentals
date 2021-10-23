
#include <iostream>
using namespace std;

/* Computes the total cost of leasing a car given the down payment,
   monthly rate, and number of months

   Below is a simple program that includes an expression involving integers.
*/

int main() {
   int downPayment;
   int autoPaymentPerMonth;
   int numMonths;
   int totalCost;  // Computed total cost to be output

/* Enter down payment: 500
   Enter monthly payment: 300
   Enter number of months: 60
   Total cost: 18500
*/
   cout << "Enter down payment: ";
   cin  >> downPayment;

   cout << "Enter monthly payment: ";
   cin  >> autoPaymentPerMonth;

   cout << "Enter number of months: ";
   cin  >> numMonths;

   totalCost = downPayment + (autoPaymentPerMonth * numMonths);

   cout << "Total cost: " << totalCost << endl;

      return 0;
}