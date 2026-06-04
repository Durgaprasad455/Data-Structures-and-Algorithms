//rearrange array elements by sign equal sign elements

#include<bits/stdc++.h>
using namespace std;

//bruteforce solution
void bruteforce(vector<int>&a,int n){
  vector<int>p;
  vector<int>ng;
  for(int i=0;i<n;i++){
    if(a[i]>0){
      p.push_back(a[i]);
    }
    else{
      ng.push_back(a[i]);
    }
  }
  int m=p.size();
  for(int i=0;i<m;i++){
    a[2*i]=p[i];
    a[(2*i)+1]=ng[i];
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}

//optimal solution
void optimal(vector<int>&a,int n){
  int p=0;
  int ng=1;
  vector<int>ans(n);
  for(int i=0;i<n;i++){
    if(a[i]<0){
      if(ng<n){
        ans[ng]=a[i];
        ng+=2;
      }
    }
    else{
      if(p<n){
        ans[p]=a[i];
        p+=2;
      }
    }
  }
  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
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
  //bruteforce(a,n);
  optimal(a,n);
}