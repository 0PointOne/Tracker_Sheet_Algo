#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t, i = 0;  cin >> t;
    while(i++ < t){
        int num;
        cin >> num;
        
        vector<int> v;
        while(num){
            int rem = num % 10;
            num /= 10;
            v.push_back(rem);
        }
  
        bool isPa = true;
        int s = 0, e = v.size()-1;
        while(s <= e){
            if(v[s++] != v[e--]){
                isPa = false;
                break;
            }
        }

        cout << "Case " <<  i << ": " << (isPa ? "Yes" : "No") << endl;
  
    }
    
    return 0;
}