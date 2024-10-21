#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector<int> h, string word) {
	string letters = "abcdefghijklmnopqrstuvwxyz";
	int i, j, may = 0, wordSize = word.size();
	
	for ( i=0 ; i<letters.size() ; ++i ) {
		for ( j=0 ; j<word.size() ; ++j ) {
			if (letters[i] == word[j] && may < h[i]){
				may = h[i];
			} 
		}
	}
	
	return may * wordSize;
}

int main(){ 
	int arrH[] = { 1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 };
	//int arrH[] = { 1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7 };
	string word = "abc";
	//string word = "zaba";
	
	unsigned arrHSize = sizeof(arrH) / sizeof(int);
	vector<int> h;
	
	h.assign(arrH, arrH + arrHSize);
	
	int result = designerPdfViewer(h, word);
	cout << result;
	return 0;
}
