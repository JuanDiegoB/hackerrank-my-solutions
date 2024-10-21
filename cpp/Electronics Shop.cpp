#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int i, j, product, higher = 0;
    
	for (i = 0; i < keyboards.size(); i++){
		for (j = 0; j < drives.size(); j++){
			product = keyboards[i] + drives[j];
			if (product <= b && product > higher){
				higher = product;
			}
		}
	}
	
	if (higher == 0){
		return -1;
	}
	
	return higher;
}

int main(){
	int i, aKeyboards[] = { 4 }, aDrives[] = { 5 }, b = 5;
	
	int aKeyboardsSize = sizeof(aKeyboards) / sizeof(aKeyboards[0]);
	int aDrivesSize = sizeof(aDrives) / sizeof(aDrives[0]);

	vector<int> keyboards (aKeyboardsSize);
	vector<int> drives (aDrivesSize);
	
	for (i = 0; i < aKeyboardsSize; i++){
		keyboards[i] = aKeyboards[i];
	}
	for (i = 0; i < aDrivesSize; i++){
		drives[i] = aDrives[i];
	}
	
	cout << getMoneySpent(keyboards, drives, b) << endl;
	return 0;
}
