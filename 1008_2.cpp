#include<iostream>
using namespace std;

int main(){
	int a[100000];
	/*这边如果定的数组太小的话，会导致出现“段错误”的错误提示，
	咱们开大点就行了，举个例子，这边如果定义int a[100]的话就会报错*/
	int m,n;
	cin >> n >> m;
	for(int i = 0;i < n; i++)
		cin >> a[i];
	for(int i = n;i >= 0; i--)
		a[i+m] = a[i];//向后移m位
	int i = n;
	for(i = n;i < n + m; i++)
		a[i%n] = a[i];
	cout << a[0];
	for(int j = 1; j < n; j++)
		cout << " " << a[j];
	return 0;
}
