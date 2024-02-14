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
    
    string s;   cin >> s;
    vector<int> v;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+'){
            v.push_back(s[i] - '0');
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size() - 1; i++)   cout << v[i] << "+";
    cout << v.back();
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