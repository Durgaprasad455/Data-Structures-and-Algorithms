// second largest element in the array
#include<bits/stdc++.h>
using namespace std;

//brute force
void bruteForce(vector<int>&a,int n){
  sort(a.begin(),a.end());
  int largest=a[n-1];
  int slargest=0;
  for(int i=n-2;i>=0;i--){
    if(a[i]<largest){
      slargest=a[i];
      break;
    }
  }
  cout<<slargest<<endl;;
}

// better solution
void better(vector<int>&a,int n){
  int largest=a[0];
  for(int i=0;i<n;i++){
    if(a[i]>largest){
      largest=a[i];
    }
  }
  int slargest=-1;
  for(int i=0;i<n;i++){
    if(a[i]>slargest && a[i]!=largest){
      slargest = a[i];
    }
  }
  cout<<slargest<<endl;
}

// optimal solution
void optimal(vector<int>&a,int n){
  int largest=a[0];
  int slargest=INT_MIN;
  for(int i=1;i<n;i++){
    if(a[i]>largest){
      slargest=largest;
      largest=a[i];
    }else if(a[i]<largest && a[i]>slargest){
      slargest=a[i];
    }
  }
  cout<<slargest<<endl;
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
  // bruteForce(a,n);
  // better(a,n);
  optimal(a,n);
  return 0;
}