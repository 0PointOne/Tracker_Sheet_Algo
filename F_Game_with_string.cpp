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

    int turn = 0; 

    stack<int> st;
    for(int i = 0; i < s.size(); i++){

        if(st.empty() || st.top() != s[i])  st.push(s[i]);

        else if(st.top() == s[i]){
            turn++;
            st.pop();
        }
        
    }
    cout << (turn & 1 ?  "Yes" :   "No" ) << endl;

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