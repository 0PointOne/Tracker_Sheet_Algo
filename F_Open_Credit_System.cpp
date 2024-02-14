#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define v_all v.begin(), v.end()
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define input_v for(auto &it : v)   cin >> it;
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<int> v(n);
    input_v(v);

    vector<pair<int, int> > p;
    int mx = INT_MIN, mn = INT_MAX;
    for(int i = n-1; i > 0; i--){
        mx = max(v[i], mx);
        mn = min(v[i], mn);
        p.push_back({mx, mn});
    }
    reverse(p.begin(), p.end());

    // print_v_pair(p);
    int ans = INT_MIN;
    for(int i = 0; i < n-1; i++){
        int k =  max(v[i] - p[i].first, v[i] - p[i].second);
        ans = max(ans, k);
    }
    cout << ans << endl;
    
}

int main(){
    fast_io;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}