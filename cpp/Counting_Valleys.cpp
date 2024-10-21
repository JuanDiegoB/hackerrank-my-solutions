#include<iostream>

using namespace std;

int countingValleys(int steps, string path) {
	int n = 0, valleys = 0;
	bool belowSeaLevel = false;
	 
	for (int i = 0; i < steps; i++){
		if (path[i] == 'U'){
			n++;
			if (n == 0 && belowSeaLevel == true) {
				valleys++;
				belowSeaLevel = false;
			}
		} else {
			n--;
			if (n < 0){
				belowSeaLevel = true;
			}
		}
	}
	
	return valleys;
}

int main(){
	
	cout << countingValleys(12, "DDUUDDUDUUUD") << endl;
	return 0;
}


