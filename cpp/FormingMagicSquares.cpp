#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
	int validateRepeat = 0;
	int nums[] =
	for(int k = 0; k < 10; k++){
		for (int i = 0; i < 3; i++) {
        	for (int j = 0; j < 3; j++) {
            	if (s[i][j] == k){
            		validateRepeat ++;
            		if(validateRepeat==2){
            			
            		}
            	}
        	}
    	}
    	
	}
	
}

int main()
{
    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);
        for (int j = 0; j < 3; j++) {
            cin >> s[i][j]; 
        }
    }

    int result = formingMagicSquare(s);

    cout << result << "\n";

    return 0;
}

