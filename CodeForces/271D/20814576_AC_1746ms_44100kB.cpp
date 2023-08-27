#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
set<ll> a; long long c = 0;
char s[1520], v[30];
 
int main(){
  int k;
  cin >> s >> v >> k;
  int n = strlen(s);
  for(int i = 0;i<n;++i){
    int kk=0;
    ll h=0;
    for(int j=i;j<n;++j){
 
        if(v[s[j]-'a'] == '0'){
            ++kk;
            if(kk>k)break;
          }
        h=(h*131)^s[j];
        a.insert(h);
    }
  }
 
  cout << a.size();
 
 
  }