#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<int,int>&a,pair<int,int>&b){
  return (double)a.first/a.second > (double)b.first/b.second;
}

double fractknapsack(vector<pair<int,int>>&arr,int w){
  sort(arr.begin(),arr.end(),comparator);
  double totalval=0;
  for(int i=0;i<arr.size();i++){
    if(arr[i].second<=w){
      totalval+=arr[i].first;
      w=w-arr[i].second;
    }else{
      totalval+=((double)arr[i].first/arr[i].second )* w;
      break;
    }
  }
  return totalval;
}

int main(){
  int n,w;
  cin>>n>>w;
  vector<pair<int,int>>arr(n);{
    for(int i=0;i<n;i++){
      cin>>arr[i].first>>arr[i].second;
    }
  }
  cout<<fractknapsack(arr,w);
  return 0;
}