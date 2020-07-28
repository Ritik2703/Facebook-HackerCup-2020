/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define forp(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
ll t,n;
string a,b;
class radherani{
	public:
	radherani()
	{
	freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    t = 1;
    cin >> t; 
    forp(i,t)
    {
    cout << "Case #" << i+1 << ": "<<endl; 
	cin >> n;
    cin >> a >> b;
    vector< vector<int> > dp(n);
    forp(i,n) {
        dp[i] = vector<int> (n, 0);
        dp[i][i] = 1;
        if (b[i] == 'N') 
		continue;
        if (i > 0 && a[i - 1] == 'Y')
		dp[i][i - 1] = 1;
        if (i + 1 < n && a[i + 1] == 'Y')
		dp[i][i + 1] = 1;
    }
    forp(i, n) forp(j, n) forp(k, n)
        if (dp[i][j] && dp[j][k]) dp[i][k] = 1;
    forp(i, n) {
        forp(j, n)
            if (dp[i][j])
			cout << "Y";
			else cout << "N";
        cout << endl;
    }
}
}
};
int main()
{
   fast
   radherani r;
   return 0;
}
