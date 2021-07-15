//D. Love Song
#include <iostream>
#include <utility>
#include <bitset>
#include <bits/stdc++.h>
#include <unordered_map>
#include <cmath>
#include <cstdint>
#include <map>
using namespace std;
typedef long long int ll;
const unsigned int M=1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin>>n>>q;
    string s; cin>>s;
    ll arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        arr[i]=arr[i-1]+((s[i-1]-'a')+1);
    }
    while(q--){
        int l,r;
        cin>>l>>r;

        cout<<arr[r]-arr[l-1]<<endl;
    }
}
