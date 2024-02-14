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

bool licky_Div(int n){
    
    while(n){
        int rem = n % 10;
        if(!(rem == 4 || rem == 7)){
            return false;
        }
        n /= 10;
    }
    return true;
}

void solve(){
    
    ll n;   cin >> n;

    vector<int> v;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
            if(n / i != i){
                v.push_back(n/i);
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(licky_Div(v[i])){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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