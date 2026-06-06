//longest consecutive sequence in an array
#include<bits/stdc++.h>
using namespace std;

//bruteforce
bool linears(vector<int>&a,int num){
  for(int i=0;i<a.size();i++){
    if(a[i]==num){
      return true;
    }
  }
  return false;
}
 
void bruteforce(vector<int>&a,int n){
  int longest=1;
  for(int i=0;i<n;i++){
    int x=a[i];
    int cnt=1;
    while(linears(a,x+1)){
      x=x+1;
      cnt=cnt+1;
    }
    longest=max(longest,cnt);
  }
  cout<<longest<<endl;
}

//better solution
void better(vector<int>&a,int n){
  sort(a.begin(),a.end());
  int longest=1;
  int lastsmaller=INT_MIN;
  int cntcurrent=0;
  for(int i=0;i<n;i++){
    if(a[i]-1==lastsmaller){
      cntcurrent+=1;
      lastsmaller=a[i];
    }
    else if(a[i]-1!=lastsmaller){
      cntcurrent=1;
      lastsmaller=a[i];
    }
    longest=max(longest,cntcurrent);
  }
  cout<<longest<<endl;
}

//optimal solution
void optimal(vector<int>&a,int n){
  int longest=1;
  unordered_set<int>st;
  for(int i=0;i<n;i++){
    st.insert(a[i]);
  }
  for(auto it:st){
    if(st.find(it-1)==st.end()){
      int cnt=1;
      int x=it;
      while(st.find(x+1)!=st.end()){
        x=x+1;
        cnt=cnt+1;
      }
      longest=max(longest,cnt);
    }
  }
  cout<<longest<<endl;
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
  //better(a,n);
  optimal(a,n);
}