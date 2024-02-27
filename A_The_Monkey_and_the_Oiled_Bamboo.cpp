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

bool cmp(int a, int b){
    return a > b;
}

void solve(){
    int n;    cin >> n;
    vector<int> v(n);
    
    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i == 0)  mx = v[i];
        mx = max(mx, v[i] - v[i-1]);
    }

    int k = mx;
    bool reach = true;
    if(v[0] == k)    k--;

    for(int i = 1; i < n; i++){

        if(v[i] - v[i-1] == k)      k--;

        else if(k < v[i] - v[i-1]){
            reach = false;
            break;
        }
    }
    cout << (!reach ?  mx + 1 : mx ) << endl;
}

int main(){
    fast_io;

    int t = 1;
    cin >> t;
    int i = 0;
    while(i++ < t){
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}