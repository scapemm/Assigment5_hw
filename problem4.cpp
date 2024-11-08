#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int res=0;
    for(int i=0; i<n; ++i) cin >> vec[i];
    vector<int> rv(n);
    for(int i=0; i<n; ++i){
        rv[i]=vec[i];
    }
    reverse(rv.begin(),rv.end());
    int ans=0;
    for(int i=0; i<n/2; ++i){
        for(int j=0; j<n/2; ++j){
            if(rv[i]-vec[i] > ans) ans=rv[i]-vec[i];
        }
    }
    cout << ans;
    return 0;
    
}
