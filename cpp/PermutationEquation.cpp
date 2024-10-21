#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

/*
 * Complete the 'permutationEquation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY p as parameter.
 */
vector<int> permutationEquation(vector<int> p) {
  vector<int> p_result(p.size());

  for (int i = 1; i <= p.size(); i++) {
    for (int j = 0; j < p.size(); j++) {
      if (i == p[j]) {
        for (int k = 0; k < p.size(); k++) {
          if (j+1 == p[k]) {
            p_result[i - 1] = k + 1;
            break;
          }
        }
        break;
      }
    }
  }

  return p_result;
}

int main()
{
  system("cls");
  vector<int> p = {5, 2, 1, 3, 4};
  vector<int> result = permutationEquation(p);

  for (size_t i = 0; i < result.size(); i++) {
    cout << result[i];

    if (i != result.size() - 1) {
      cout << "\n";
    }
  }
}