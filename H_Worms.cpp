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

void number_of_pile(vector<int> &pf, int m){
    int s = 0, e = pf.size()-1;

    int mid = s + (e - s) / 2;
    while(s <= e){

        if((pf[mid] == m) || (pf[mid -1] < m && pf[mid] > m) || (pf[mid] > m && mid == 0) || (pf[mid] < m && mid == pf.size()-1)){
            cout << mid + 1 << endl;
            return;
        }
        else if(pf[mid - 1] > m)        e = mid - 1;
        else        s = mid + 1;

        mid = s + (e - s) / 2; 
    }
}

void solve(){
    
    int n;  cin >> n;
    vector<int> pf(n);
    int k;  cin >> k;   
    pf[0] = k;

    for(int i = 1; i < n; i++){
        cin >> k;
        pf[i] = pf[i-1] + k;
    }

    // print_v(pf);

    int q;  cin >> q;
    while(q--){
        int m;  cin >> m;

        // number_of_pile(pf, m);
        
        auto it = lower_bound(pf.begin(), pf.end(), m);

        cout << it - pf.begin() + 1 << endl;

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