#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int o = 0, z = 0;
		for (char c : s)
			if (c == '1')
				++o;
			else
				++z;
       // cout<<o<<" "<<z<<endl;
		if (min(o, z)%2==1)
			cout << "DA" << endl;
		else
			cout << "NET" << endl;
	}

}
