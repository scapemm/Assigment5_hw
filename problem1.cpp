#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> vec1(n);
    for(int i=0; i<n; ++i) cin >> vec[i];
    for(int i=0; i<n; ++i) cin >> vec1[i];
    int cnt=0;
    for(int i=0; i<n; ++i){
        cnt += vec[i]*vec1[i];
    }
    cout  << cnt;
    return 0;
    
}
