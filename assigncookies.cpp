#include<bits/stdc++.h>
using namespace std;

void greedy(vector<int>&a,vector<int>&b,int n,int m){
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int l=0;
  int r=0;
  while(l<m){
    if(a[r]<=b[l]){
      r=r+1;
    }
    l=l+1;
  }
  cout<<r;;
}

int main(){
  int n,m;
  cin>>n;
  cin>>m;
  vector<int>a;
  vector<int>b;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  for(int i=0;i<m;i++){
    int y;
    cin>>y;
    b.push_back(y);
  }
  greedy(a,b,n,m);
}
