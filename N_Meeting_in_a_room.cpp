#include<bits/stdc++.h>
using namespace std;


struct Data{
  int start;
  int end;
  int pos;
};

bool comparator(Data val1,Data val2){
  return val1.end<val2.end;
}

int maxMeeting(vector<int>&start,vector<int>&end, int n){
  vector<Data>ar(n);
  for(int i=0;i<n;i++){
    ar[i].start=start[i];
    ar[i].end=end[i];
    ar[i].pos=i+1;
  }
  sort(ar.begin(),ar.end(),comparator);
  int cnt=1;
  int freetime=ar[0].end;
  vector<int>ds;
  ds.push_back(ar[0].pos);
  for(int i=1;i<n;i++){
    if(ar[i].start>freetime){
      cnt+=1;
      freetime=ar[i].end;
      ds.push_back(ar[i].pos);
    }
  }
  return cnt;
}

int main(){
  int n;
  cin>>n;
  vector<int>start;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    start.push_back(x);
  }
  vector<int>end;
  for(int i=0;i<n;i++){
    int k;
    cin>>k;
    end.push_back(k);
  }
  cout<<maxMeeting(start,end,n);
  return 0;
}