#include <bits/stdc++.h>
using namespace std;
typedef double dl;
typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
// #define int long long
#define endl '\n'
const int MOD=1e9+7,mod=998244353;
const double PI = 3.14159265358979323846;
void solve()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        int l=0;
        if(s[3]!='=')l=3;
        string ss=s.substr(l,3);
        if(ss=="xxx")a.push_back(2);
        else if(ss=="xx." || ss==".xx")a.push_back(1);
        else a.push_back(0);
    }
    int ans=0;
    for(auto i:a)ans^=i;
    if(ans==0)cout<<"Polycarp\n";
    else cout<<"Monocarp\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
