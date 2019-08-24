// This program calculates the user's pay.

#include <iostream>

int main()
{
  double bars, rate, pay;

  std::cout << "Earnings will be calculated as followed.\n";
  // Get the number of bars sold.
  std::cout << "How many bars did you sell? Bars sold:";
  std::cin >> bars;

  // Get the rate per bar.
  std::cout << "How much was each bar? Rate:";
  std::cin >> rate;

  // Calculate the pay.
  pay = bars * rate;

  // Display the pay.
  std::cout << "You got $" << pay << std::endl;

  return 0;
}
