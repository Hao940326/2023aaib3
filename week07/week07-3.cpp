#include"bits/stdc++.h"
using namespace std;
int main(){
	int a;
	vector<int>tmp;
	while(cin>>a){
		tmp.push_back(a);
		sort(tmp.begin(),tmp.end());
		if(tmp.size()%2!=0)cout<<tmp[tmp.size()/2]<<endl;
		else cout<<(tmp[tmp.size()/2]+tmp[tmp.size()/2-1])/2<<endl;
	}
}