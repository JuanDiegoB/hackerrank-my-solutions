//#include<iostream>
#include <bits/stdc++.h>

using namespace std;

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
	
	int catA = abs(x - z);
	int catB = abs(y - z);
	
	if (catA < catB){
		return "Cat A";
	} else if (catB < catA){
		return "Cat B";
	} else {
		return "Mouse C";
	}
}

int main()
{

    string result = catAndMouse(1, 2, 3);

    cout << result << endl;
}
