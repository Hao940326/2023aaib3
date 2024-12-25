#include<iostream>
using namespace std;
int helper(int a,int b){
	int ans=0,carry=0;
	while(a>0||b>0){
		int now =a%10+b%10+carry;
		carry=now/10;
		ans+=carry;
		a/=10;
		b/=10;
	}
	return ans;
}
int main(){
  int a,b;
  while(cin>>a>>b){
  	if(a==0&&b==0)break;
  	int ans = helper(a,b);
  	if(ans==0)cout<<"No carry operation."<<endl;
  	else if(ans==1)cout<<"1 carry operation."<<endl;
  	else cout<<ans<<" carry operations."<<endl;
  }
  return 0;
}
