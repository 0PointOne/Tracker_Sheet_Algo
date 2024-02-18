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
    
    int n, k;  cin >> n >> k;
    vector<int> v(n);
    input_v(v);

    vector<int> box;

    while(n > 0 && n / 2 < k-- ){
        box.push_back(v[n-1]);
        n--;
    }

    
    int s = 0, e = n - 1;
  
    while(s < e){
        box.push_back(v[s++] + v[e--]);
    } 
    
    cout << *max_element(box.begin(), box.end()) << endl;
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