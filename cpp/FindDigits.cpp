#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */
int findDigits(int n) {
  vector<int> digits;
  int number = n;
  int result = 0;
  while (number > 0)
  {
    int digit = number % 10;
    
    if (digit != 0)
    {
      digits.push_back(digit);
    }
  
    number /= 10;
  }
  
  for (int digit : digits)
  {
    if (n % digit == 0) {
      result ++;
    }
  }
  
  return result;
}

int main()
{
  int t, n;
  cout << "Number of test cases: "; 
  cin >> t;
  
  for (int t_itr = 0; t_itr < t; t_itr++) {
    cout << "Enter a number: "; 
    cin >> n;
    
    int result = findDigits(n);

    cout << result << "\n";
  }
  return 0;
}