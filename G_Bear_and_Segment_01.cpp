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
    ll st = 0, e = s.size() - 1;

    while(s[st] != '1' && st <= e){
        st++;
    }

    while(s[e] != '1'&& e >= 0){
        e--;
    }

    if(st == s.size()){
        cout << "NO" << endl;
    }
    else{
        for(int i = st; i <= e; i++){
            if(s[i] == '0'){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    
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