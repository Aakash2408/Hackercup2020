#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
	int p; cin >> p;
	for(int c = 1; c <= p; c++) {
		cout << "Case #" << c << ": ";
		// inputs
		int n; cin >> n;
		string s; cin >> s;
		// number of A's and B's
		int ca = 0, cb = 0;
		
		// count A's and B's
		for(int i = 0; i < n; i++) {
			if(s[i] == 'A')	ca++;
			if(s[i] == 'B')	cb++;
		}

		if(abs(ca - cb) == 1) {
			cout << "Y" << endl;
		}
		else {
			cout << "N" << endl;
		}
	}
}