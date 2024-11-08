#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int res=0;
    for(int i=0; i<n; ++i) cin >> vec[i];
    for(int i=0; i<n; ++i){
        bool ans=1;
        for(int j=0; j<n; ++j){
            if(vec[j]%vec[i]!=0) ans=0;
        }
        if(ans){
            res=vec[i];
            break;
        }
    }
    if(res==0) cout << -1;
    else cout << res;
    return 0;
    
}
