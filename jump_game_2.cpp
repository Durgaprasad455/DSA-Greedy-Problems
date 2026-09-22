#include<bits/stdc++.h>
using namespace std;

int jumpgame2(vector<int>&ar,int n){
  int jumps=0;
  int l=0;
  int r=0;
  while(r<n-1){
    int farthest=0;
    for(int j=l;j<=r;j++){
      farthest=max(j+ar[j],farthest);
    }
    l=r+1;
    r=farthest;
    jumps=jumps+1;

  }
  return jumps;
}

int main(){
  int n;
  cin>>n;
  vector<int>ar;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    ar.push_back(x);
  }
  cout<<jumpgame2(ar,n);
}