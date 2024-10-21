#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Complete the jumpingOnClouds function below.
 * 
 * 
 * @param c: the cloud types along the path
 * @param k: the length of one jump
 * @return the energy level remaining.
 */ 
int jumpingOnClouds(vector<int> c, int k) {
  int e = 100; // energy
  int n = c.size();

  int i = 0;
  
  do
  {
    i += k;
    
    if (i >= n)
    {
      i -= n;
    }
    
    if (c[i] == 1)
    {
      e -= 3;
    } else {
      e--;
    }

  } while (i != 0);
  
  return e;
}

int main()
{
  int k = 3;
  vector<int> c {1, 1, 1, 0, 1, 1, 0, 0, 0, 0}; // {0, 0, 1, 0, 0, 1, 1, 0}

  int result = jumpingOnClouds(c, k);
  
  cout << result;
  
  return 0;
}