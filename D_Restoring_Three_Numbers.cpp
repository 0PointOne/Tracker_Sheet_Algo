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
    
    vector<int> v(4);
    int mx = INT_MIN, mx_idx = -1;
    for(int i = 0; i < 4; i++){
        cin >> v[i];
        if(mx < v[i]){
            mx = v[i];
            mx_idx = i;
        }

    }
    for(int i = 0; i < 4; i++){
        if(i != mx_idx){
            cout << mx - v[i] << " ";
        }
    }

}

int main(){
    fast_io;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}