#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int res=0;
    for(int i=0; i<n; ++i) cin >> vec[i];
    int k=n-1;
    int i=0;
    while(i<=k){
      for(int h=0; h<=k; h++)
      res= max(vec[k]-vec[h],res);
      i++;
      k--;
    }
    
    cout << res;
    return 0;
    
}
