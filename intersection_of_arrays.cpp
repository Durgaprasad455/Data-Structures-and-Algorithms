// intersection of two sorted arrays

#include<bits/stdc++.h>
using namespace std;

//bruteforce
void bruteforce(vector<int>&a,vector<int>&b,int n,int m){
  vector<int>ans;
  vector<int>vis(m,0);
  for(int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      if(a[i]==b[j] && vis[j] == 0){
        ans.push_back(a[i]);
        vis[j]=1;
        break;

      }
      if(b[j]>a[i]){
        break;
      }
    }
  }
  for(auto it:ans){
    cout<<it<<" ";
  }
}

// optimal -> 2 pointer approach
void optimal(vector<int>&a,vector<int>&b,int n,int m){
  vector<int>ans;
  int i=0,j=0;
  while(i<n&&j<m){
    if(a[i]<b[j]){
      i++;
    }else if(a[i]>b[j]){
      j++;
    }else{
      ans.push_back(a[i]);
      i++;
      j++;
    }
  }
  for(auto it :ans){
    cout<<it<<" ";
  }
}

int main(){
  int n,m;
  cin>>n>>m;
  vector<int>a,b;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  for(int j=0;j<m;j++){
    int c;
    cin>>c;
    b.push_back(c);
  }
  bruteforce(a,b,n,m);
}