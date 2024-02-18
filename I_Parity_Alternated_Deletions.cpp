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
    vector<int> odd, even;
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(num & 1)     odd.push_back(num);
        else            even.push_back(num);
    }

    sort(odd.begin(), odd.end(), greater() );
    sort(even.begin(), even.end(), greater() );

    int o = 0, e = 0, k = 0;

    if(odd.size() > even.size()){
        while(e < even.size()){
            e++;
        }
        ll sum = 0;
        for(int i = e + 1; i < odd.size(); i++){
            sum += odd[i];
        }
        cout << sum << endl;
    }

    else if(odd.size() < even.size()){
        while(o < odd.size()){
            o++;
        }
        ll sum = 0;
        for(int i = o + 1; i < even.size(); i++){
            sum += even[i];
        }
        cout << sum << endl;
    }
    else{
        cout << 0 << endl;
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