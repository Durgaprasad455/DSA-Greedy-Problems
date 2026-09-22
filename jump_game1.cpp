#include<bits/stdc++.h>
using namespace std;

int jumpgame(vector<int>&a,int n){
  int maxind=0;
  for(int i=0;i<n;i++){
    if(i>maxind){
      return false;
    }
    maxind=max(maxind,i+a[i]);
  }
  return true;
}

int main(){
  int n;
  cin>>n;
  vector<int>a;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  if(jumpgame(a,n)){
    cout<<"true";
  }else{
    cout<<"false";
  }
  return 0;
}