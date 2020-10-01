#include<bits/stdc++.h>
using namespace std;
void find(double p){
	cout<<ceil(sqrt(2*365*log(1/(1-p))));
	return ;
}
int main(){
	double n;
	cin>>n;
	find(n);
}
