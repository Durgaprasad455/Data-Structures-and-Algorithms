// find the number which appears once and other numbers appear twice
#include<bits/stdc++.h>
using namespace std;  

//bruteforce O(n^2)
void bruteforce(vector<int>&a,int n){
  for(int i=0;i<n;i++){
    int num=a[i];
    int count=0;
    for(int j=0;j<n;j++){
      if(a[j]==num){
        count++;
      }
    }
    if(count==1){
      cout<<num<<" ";
      break;
    }
  } 
}

// better solution -> hashing
void better(vector<int>&a,int n){
  int maxi=a[0];
  for(int i=1;i<n;i++){
    maxi=max(maxi,a[i]);
  }
  int hash[maxi]={0};
  for(int i=0;i<n;i++){
    hash[a[i]]++;
  }
  for(int i=0;i<n;i++){
    if(hash[a[i]]==1){
      cout<<a[i]<<" ";
      break;
    }
  }
}

// better solution -> using map
void betterMap(vector<int>&a,int n){
  map<int,int>mp;
  for(int i=0;i<n;i++){
    mp[a[i]]++;
  }
  for(auto it : mp){
    if(it.second==1){
      cout<<it.first<<" ";
      break;
    }
  }
}

// optimal -> xor  a^a==0 and a^0==a
void optimal(vector<int>&a,int n){
  int x=0;
  for(int i=0;i<n;i++){
    x=x^a[i];
  }
  cout<<x<<" ";
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
  // bruteforce(a,n);
  // better(a,n);
  //betterMap(a,n);
  optimal(a,n);
  return 0;
}