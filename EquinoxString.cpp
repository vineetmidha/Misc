
// https://www.codechef.com/LTIME95C/problems/EQUINOX

#include <iostream>
using namespace std;

#define int long long 

void solve(int test=0)
{
    int n, a, b;
    cin >> n >> a >> b;

    int sarthak=0, anu=0;

    string search="EQUINOX";

    unordered_set<char> mp(search.begin(), search.end());

    string s;   

    while (n--)
    {
        cin >> s;

        if (mp.count(s[0]) > 0)
            sarthak+=a;
        else
            anu+=b;
    }

    if (sarthak > anu)
        cout << "SARTHAK";
    else if (anu > sarthak)
        cout << "ANURADHA";
    else
        cout << "DRAW";

    cout << "\n";
}

signed main() {
	int t;
	cin >> t;
	
	while (t--)
	{
	    solve();
	}
	
	return 0;
}

