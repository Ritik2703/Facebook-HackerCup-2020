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
#define forp(i,x,n) for(int i=x;i<n+x;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
ll t,n;
string s;
class radherani{
	public:
	radherani()
	{
	freopen("inp2.txt", "r", stdin);
    freopen("out2.txt", "w", stdout);
	t = 1;
    cin >> t; 
    forp(i,1,t)
    {
    cout << "Case #" << i << ": "; 
    cin >> n;
    cin>>s;
    ll a=0,b=0;
    forp(i, 0, n)
	if(s[i] == 'A')
	a++;
	else 
	b++;
    if(abs(a-b) == 1)
	cout << "Y"; 
	else
	cout << "N";
    cout << endl;
}
}
};
int main()
{
   fast
   radherani r;
   return 0;
}

