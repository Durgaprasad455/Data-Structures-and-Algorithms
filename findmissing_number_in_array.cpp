// find missing number in an array

#include<bits/stdc++.h>
using namespace std;

//bruteforce
void bruteforce(vector<int>&a,int n){
  for(int i=1;i<=n;i++){
    int flag=0;
    for(int j=0;j<n-1;j++){
      if(i==a[j]){
        flag=1;
        break;
      }
    }
    if(flag==0){
      cout<<i<<" ";
    }
  }
}

void better(vector<int>&a,int n)
{
  int hash[n+1]={0};
  for(int i=0;i<n-1;i++){
    hash[a[i]]=1;
  }
  for(int i=1;i<=n;i++){
    if(hash[i]==0){
      cout<<i<<" ";
    }
  }
}

//optimal1 sum of natutal numbers formula
void optimal1(vector<int>&a,int n){
  int s1=(n*(n+1))/2;
  int s2=0;
  for(int i=0;i<n-1;i++){
    s2=s2+a[i];
  }
  cout<<(s1-s2)<<" ";
}

// optimal2 using xor
void optimalXOR(vector<int>&a,int n){
  int x1=0,x2=0;
  for(int i=0;i<n-1;i++){
    x2=x2^a[i];
    x1=x1^(i+1);
  }
  x1=x1^n;
  cout<<(x1^x2)<<" ";
}
int main(){
  int n;
  cin>>n;
  vector<int>a;
  for(int i=0;i<n-1;i++){
    int x;
    cin>>x;
    a.push_back(x);
  }
  //bruteforce(a,n);
  // better(a,n);
  // optimal1(a,n);
  optimalXOR(a,n);
}