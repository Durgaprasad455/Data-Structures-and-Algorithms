// set matrix zero 
#include<bits/stdc++.h>
using namespace std;
//better solution
vector<vector<int>>zeromat(vector<vector<int>>&mat,int n,int m){
  int r[n]={0};
  int c[m]={0};
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(mat[i][j]==0){
        r[i]=1;
        c[j]=1;
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(r[i] || c[j]){
        mat[i][j]=0;
      }
    }
  }
  return mat;
}

//optimal solution
vector<vector<int>>zmat(vector<vector<int>>&mat,int n,int m){
  int col0=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(mat[i][j]==0){
        mat[i][0]=0;
        if(j!=0){
          mat[0][j]=0;
        }else{
          col0=0;
        }
      }
    }
  }
  for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
      if(mat[0][j]==0 || mat[i][0]==0){
        mat[i][j]=0;
      }
    }
  }
  if(mat[0][0]==0){
    for(int j=0;j<m;j++){
      mat[0][j]=0;
    }
  }
  if(col0==0){
    for(int i=0;i<n;i++){
      mat[i][0]=0;
    }
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
  //zeromat(mat,n,m);
  zmat(mat,n,m);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}