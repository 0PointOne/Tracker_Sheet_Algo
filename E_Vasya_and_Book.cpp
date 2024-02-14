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
    ll n, x, y, d;  cin >> n >> x >> y >> d;
    if(!(abs(y - x) % d == 0 || (n - y) % d == 0 || (y - 1) % d == 0)){
        cout << -1 << endl;        
    }
    else{

        if(abs(x - y) % d == 0){
            cout << abs(x - y) / d << endl;
            return;
        }
        
        else{

            ll a = INT_MAX, b = INT_MAX;
            if((y - 1) % d == 0){

                ll move_to_one = x / d;
                if(x % d)       move_to_one++;
                
                ll move_to_y = y / d;
                a = move_to_one + move_to_y;
            }
            if((n - y) % d == 0){
                ll move_to_n = (n - x) / d;
                if((n - x) % d)     move_to_n++;
                
                ll move_to_y = (n - y) / d;
                
                b = move_to_n + move_to_y;

            }

            cout << min(a, b) << endl;
        }

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