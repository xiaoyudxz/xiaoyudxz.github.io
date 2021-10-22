#include<bits/stdc++.h>
using namespace std;
int main() {
	/* iÊújºá */ 
	int n;
	cin>>n;
	int a[n+1][n+1],tmp=1;
	memset(a,0,sizeof(a));
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n-i; j++) {
			a[i][j]+=a[i][j-1]+tmp;
			if(j==1)tmp--;
			tmp++;
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
		a[0][n-i+1]=a[1][n-i]+tmp+1;
		   /* j+1         j */  
		tmp=1;
	}
	return 0;
}
