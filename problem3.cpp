#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int res=0;
    for(int i=0; i<n; ++i) cin >> vec[i];
    for(int i=0; i<n; ++i){
        if(count(vec.begin(),vec.end(),vec[i])==1){
            cout << vec[i];
            
        }
    }
    return 0;
    
}
