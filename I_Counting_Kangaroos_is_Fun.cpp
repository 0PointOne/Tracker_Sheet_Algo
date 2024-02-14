#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
template<class T> using od_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

int binary_search(vector<int> &v, int n){
    int s = 0, e = v.size() - 1;

    int mid = s + (e - s) / 2;
    while(s <= e){

        if((v[mid] == n) || (v[mid + 1] > n && v[mid] < n))     return mid;
        else if(v[mid] < n)         s = mid + 1;
        else                        e = mid - 1;

        mid = s + (e - s) / 2;
    }
}

void solve(){
    int n;  cin >> n;
    vector<int> v(n);
    input_v(v);
    sort(v.begin(), v.end());

    int half = v.size() / 2;

    vector<int> v1(v.begin(), v.begin() + half); 
    vector<int> v2(v.begin() + half, v.end()); 

    int i = v1.size() - 1, j = v2.size() - 1;
    int hide = 0;
    while(i >= 0 && j >= 0){

        if(v1[i] * 2 <= v2[j]){
            hide++;
            i--;    
            j--;
        }
        else if(2 * v1[i] > v2[j]){
            i--;
        }
    }

    cout << n - hide << endl;
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