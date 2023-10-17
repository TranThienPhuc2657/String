#include <bits/stdc++.h>
using namespace std;
#define file(name) if (fopen(name".inp","r")) {freopen(name".inp","r",stdin); freopen(name".out","w",stdout);}
#define pb push_back
#define fi first
#define se second
using ll=long long;
const int N=1e6+5;

bool comp(pair<pair<char,int>,int> c, pair<pair<char,int>,int> b) {
    if (c.fi.se==b.fi.se) return c.se < b.se;
    return c.fi.se<b.fi.se;
}

void solve() {
    map <char,int> cnt;
    vector <pair<pair<char,int>,int>> a;
    int appear[28]={0};
    string s;

    cin >> s;
    for (int i=0; i<s.length(); i++) {if (cnt.find(s[i])==cnt.end()) appear[s[i]-'a']=i+1; cnt[s[i]]++;}
    for (auto i: cnt) a.pb({{i.fi,i.se},appear[i.fi-'a']});
    sort(a.begin(),a.end(),comp);
    if (a[0].fi.se==1) cout << a[0].se;
    else cout << -1;
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    file("BAI3");

    int tests; cin >> tests; while (tests--) solve();
    return 0;
}
