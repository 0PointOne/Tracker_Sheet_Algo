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

void solve(ll n){
    
    vector<ll> v(n);
    input_v(v);
    ll money;   cin >> money;

    sort(v.begin(), v.end());
    ll i = 0, j = n - 1, a = 0, b = 0;
    while(i < j){
        if(v[i] + v[j] == money){
           a = v[i];   b = v[j];
           i++; j--;
        }
        else if(v[i] + v[j] < money){
            i++;
        }
        else{
            j--;
        }
    }

    cout << "Peter should buy books whose prices are "<< a <<  " and "  << b << "." << endl;

}

int main(){
    fast_io;

    int t = 1;
    // cin >> t;
    ll n;  
    while(cin >> n){
        solve(n);
        cout << endl;
    }

    return 0;
}