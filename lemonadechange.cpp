#include<bits/stdc++.h>
using namespace std;

bool lemonade(vector<int>&a,int n){
  int five=0;
  int ten=0;
  int twenty=0;
  for(int i=0;i<n;i++){
    if(a[i]==5){
      five=five+1;
    }
    else if(a[i]==10){
      if(five){
        five=five-1;
        ten=ten+1;
      }else{
        return false;
      }
    }
    else{
      if(ten>0 && five>0){
        twenty=twenty+1;
        ten=ten-1;
        five=five-1;
      }
      else if(five>=3){
        five=five-3;
      }else{
        return false;
      }
    }
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
  if(lemonade(a,n)){
    cout<<"true";
  }else{
    cout<<"false";
  }
}