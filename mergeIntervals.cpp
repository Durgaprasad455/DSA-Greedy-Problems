#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>merge(vector<vector<int>>&intervals){
  vector<vector<int>>mergeIntervals;
  sort(intervals.begin(),intervals.end());
  vector<int>tempinterval=intervals[0];
  for(auto it:intervals){
    if(it[0]<=tempinterval[1]){
      tempinterval[1]=max(it[1],tempinterval[1]);
    }
    else{
      mergeIntervals.push_back(tempinterval);
      tempinterval=it;
    }
  }
  mergeIntervals.push_back(tempinterval);
  return mergeIntervals;
}

int main(){
  int n;
  cin>>n;
  vector<vector<int>>intervals(n,vector<int>(2));
  for(int i=0;i<n;i++){
    cin>>intervals[i][0]>>intervals[i][1];
  }
  vector<vector<int>>ans=merge(intervals);
  for(auto interval:ans){
    cout<<"["<<interval[0]<<","<<interval[1]<<"]";
  }
  return 0;
}