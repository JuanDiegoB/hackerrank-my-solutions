#include <iostream>
#include <vector>
#include <string>

using namespace std;


/*
 * Complete the 'squares' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER b
 */

int squares(int a, int b) {
  
  int result = 0;

  for (int i = 1; i*i <= b; i++)
  {
    if (i*i >= a)
    {
      result++;
    }
  }

  return result;
}

int main ()
{
  int q = 1;

  vector<int> a_vector {24};
  vector<int> b_vector {49};

  for (int q_itr = 0; q_itr < q; q_itr++) {

    int a = a_vector[q_itr];
    int b = b_vector[q_itr];

    cout << squares(a, b);
  }

  return 0;
}