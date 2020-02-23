//#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
const int INF=2147483647;
using namespace std;


int m[20];
int main(){
	int T;
	long long a,b,c;//原来的int不对 
	scanf("%d",&T);
	int m=1;
	while(T--){
		scanf("%lld%lld%lld",&a,&b,&c);//注意long long类型的数据输入是%lld 
	
		if(a+b>c) {
			printf("Case #%d: true",m);
			if(T) printf("\n");
		}
		else {
			printf("Case #%d: false",m);
			if(T) printf("\n");	
		}
		m++;
	}
	return 0;
}