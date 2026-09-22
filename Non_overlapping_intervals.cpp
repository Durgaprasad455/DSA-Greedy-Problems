#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int>&val1,const pair<int,int>&val2){
  return val1.second<val2.second;
}

int nonoverlap(vector<pair<int,int>>&v,int n){
  sort(v.begin(),v.end(),comp);
  int cnt=1;
  int lastEndTime=v[0].second;
  for(int i=1;i<n;i++){
    if(v[i].first>=lastEndTime){
      cnt=cnt+1;
      lastEndTime=v[i].second;
    }
  }
  return n-cnt;
}

int main(){
  int n;
  cin>>n;
  vector<pair<int,int>>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
  }
  cout<<nonoverlap(v,n)<<endl;
}