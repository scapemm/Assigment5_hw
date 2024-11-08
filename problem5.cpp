#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int up=0,low=0;
    for(int i=0; i<a.size(); ++i){
        if('a'<=a[i] && a[i]<='z') low++;
    }
    up=a.size()-low;
    cout << up <<' ';
    for(int i=0; i<a.size(); ++i){
        if('A'<=a[i]) cout << a[i] << ' ';
    }
    cout << "\n";
    cout << low << ' ';
    for(int i=0; i<a.size(); ++i){
        if('a'<=a[i]) cout << a[i] << ' ';
    }
    return 0;
    
}
