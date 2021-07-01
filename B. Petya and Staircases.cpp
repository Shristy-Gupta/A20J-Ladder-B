//B. Petya and Staircases
#include <iostream>
#include <utility>
#include <bitset>
#include <bits/stdc++.h>
#include <unordered_map>
#include <cmath>
#include <cstdint>
#include <map>
using namespace std;


int main(){

    int n,m; cin>>n>>m;
    int mp[m+10];
    string ans="YES";
    for(int i=0;i<m;i++){
     cin>>mp[i];

    }
    sort(mp,mp+m);
    if(mp[0]==1 || mp[m-1]==n){
        cout<<"NO"<<endl;
        return 0;
    }
   //can hump +2 or +3
   for(int i=0;i<m-2;i++){
      //look for continuous 3 blocks
      if(mp[i+2]==mp[i]+2){
        cout<<"NO"<<endl;
        return 0;
      }

   }
   cout<<ans<<endl;
    return 0;
}
