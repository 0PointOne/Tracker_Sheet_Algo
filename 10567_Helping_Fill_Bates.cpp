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

void solve(string &str, vector<int> &fr){
    
    string a;   cin >> a;

    vector<int> cnt(52, 0);
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            cnt[a[i] - 'A']++;
        }
        if(a[i] >= 'a' && a[i] <= 'z'){
            cnt[a[i] - 'a' + 26]++;
        }
    }

    bool isPre = true;
    for(int i = 0; i < 52; i++){
        if(fr[i] < cnt[i]){
            cout << "Not matched" << endl;
            return;
        }
    }
    auto it = find(str.begin(), str.end(), a[a.size() - 1]);
    int last = it - str.begin();
    
    char ch = a[a.size() - 1];

    int k = (ch >= 'a' && ch <= 'z'    ?     cnt[ch - 'a' + 26]    :   cnt[ch - 'A']) - 1;

    cout << "Matched 0 " << last + k << endl;
}

int main(){
    fast_io;

    int t = 1;
    string str;   cin >> str;
    vector<int> fr(52, 0);

    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            fr[str[i] - 'A']++;
        }
        if(str[i] >= 'a' && str[i] <= 'z'){
            fr[str[i] - 'a' + 26]++;
        }
    }

    cin >> t;
    while(t--){
        solve(str, fr);
    }

    return 0;
}