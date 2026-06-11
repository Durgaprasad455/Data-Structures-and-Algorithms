// rotate matrix by 90 degrees 
#include<bits/stdc++.h>
using namespace std;
// bruteforce solution
vector<vector<int>>zeromat(vector<vector<int>>&mat,int n ,int m){
  vector<vector<int>>ans(n,vector<int>(m)); 
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      ans[j][n-1-i]=mat[i][j];
    }
  }
  return ans;
}

//optimal solution
vector<vector<int>>zmat(vector<vector<int>>&mat,int n,int m){
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<m;j++){
      swap(mat[i][j],mat[j][i]);
    }
  }
  for(int i=0;i<n;i++){
    reverse(mat[i].begin(),mat[i].end());
  }
  return mat;
}

int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>>mat(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>mat[i][j];
    }
  }
  /* vector<vector<int>>ans = zeromat(mat,n,m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  } */

  zmat(mat,n,m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}