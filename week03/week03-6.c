#include<iostream>
using namespace std;
int main(){
  int a[10];
  int now,n(0);
  while(1){
  	cin>>now;
  	if(now==0)break;
  	a[n++] = now;
  }
  cin>>now;
  int ans=0;
  for(int i=0;i<n;i++){
  	if(a[i]==now)ans++;
  }
  cout<<ans<<endl;
  return 0;
}
