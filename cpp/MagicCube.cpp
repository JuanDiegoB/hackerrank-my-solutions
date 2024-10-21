#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> a) {
	int i, j, counter = 0, aux, currentPos = -1, may = 0;
	for( i=0 ; i<a.size()-1 ; ++i ) {
		for( j=i+1 ; j<a.size() ; ++j ) {
			if (a[i] > a [j]) {
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
	for( i=0 ; i<a.size() ; ++i ) {
		if ( i > currentPos ) {
			for( j=i ; j<a.size() ; ++j ) {
				if ( abs( a[i] - a[j] ) <= 1 ) {
					++ counter;
					currentPos = j;
				}
			}
			if ( counter > may ) {
				may = counter;
			}
			counter = 0;
		}
    	
	}
	return may;
}

int main(){
	//int arr[] = {1,1,2,2,4,4,5,5,5};
	int arr[] = {4, 6, 5, 3, 3, 1};
	//int arr[] = {1, 2, 2, 3, 1, 2};
	unsigned arrSize = sizeof(arr) / sizeof(int);
    vector<int> a;
    a.assign(arr, arr + arrSize);
    int result = pickingNumbers(a);
    cout << result;
	return 0;
}
