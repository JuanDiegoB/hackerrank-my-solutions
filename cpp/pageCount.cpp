#include<iostream>

using namespace std;

// https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=false

int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
	for (int i = 0; i <= n; i+=2){		
		if (p-i <= 1 || (n%2 == 1 && n-i-p <= 1) || (n%2 == 0 && n-i-p <= 0)) {
			return i/2;
		}
	}
}

int main(){
	
	
	cout<<pageCount(6,5)<<endl;
	return 0;
}




