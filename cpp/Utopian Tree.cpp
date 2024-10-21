#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
	int i, height = 0;
	for ( i=0 ; i<=n ; ++i ) {
		if ( i%2 == 0 ) {
			++height;
		} else {
			height *= 2;
		}
	}
	return height;
}

int main()
{
	
	int n = 3;
	
    int result = utopianTree(n);
    cout << result << "\n";
    return 0;
}
