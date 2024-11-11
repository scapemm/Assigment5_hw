#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int res=0;
    for(int i=0; i<n; ++i) cin >> vec[i];
    int k=n-1;
    for(int i=0; i<n && k!=i; ++i){
      for(int j=k; j!=n-i; j--) res= max(res,vec[j]-vec[i]);
        k--;
        if(k==i) break;
    }
    cout << res;
    return 0;
    
}
