//C. Equalize
#include <iostream>
#include <utility>
#include <bitset>
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n; cin>>n;
   string s1,s2; cin>>s1>>s2;
   int  cost=0;
   for(int i=0;i<n;){
    if(s1[i]!=s2[i]){
        //either swap or flip
        if(i+1<n && s1[i]!=s1[i+1] && s1[i+1]!=s2[i+1]){
            //swap
            i+=2;
        }
        else{
            i++;
        }
        cost++;
    }
    else{
        i++;
    }
   }
   cout<<cost<<endl;
}
