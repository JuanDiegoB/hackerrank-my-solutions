#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector<int> height) {
	int i, may = 1, doses = 0;
	for( i=0 ; i<height.size() ; ++i ) {
		if (may < height[i]) {
			may = height[i];
		}
	}
	if (may > k) {
		doses = may - k;
	}
	return doses;
}


int main(){
	int k = 7;
	int aHeight[] = { 2,5,4,5,2 };
	
	unsigned aHeightSize = sizeof(aHeight) / sizeof(int);
	
	vector<int> height;
	
	height.assign(aHeight, aHeight + aHeightSize);
	
	int result = hurdleRace(k, height);
	cout << result << "\n";
	
	return 0;
}
