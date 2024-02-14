#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;  cin >> t;
    while(t--){
        long long b, p, f;    cin >> b >> p >> f;

        long long h, c;    cin >> h >> c;

        long long profit = 0;
        if(h > c){

            long long mn_ham = min(b/2, p);
            profit += mn_ham * h;
            b -= 2 * mn_ham;

            profit += (c * min(b / 2, f));
        }

        else{
            long long mn_chk = min(b/2, f);
            profit += mn_chk * c;

            b -= 2 * mn_chk;
            profit += (h * min(b / 2, p));
        }

        cout << profit << endl;
    }
    
    
    return 0;
}