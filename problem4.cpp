#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int res=0;
    for(int i=0; i<n; ++i) cin >> vec[i];
    int k=n-1;
    for(int i=0; i<n; ++i){
      if(k>i)res=max(res,vec[k]-vec[i]);
      else break;
    }
    cout << res;
    return 0;
    
}
