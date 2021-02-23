//
// Created by 硬汉J on 2021/2/23.
//

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin>>v[i];
    }
    int beg, end;
    vector<int> dp(n);    // dp[i] is max sum of subarray ending with v[i]
    dp[0]=v[0], end=0;
    for(int i=1; i<n; ++i){
        dp[i] = max(dp[i-1]+v[i], v[i]);
        if(dp[i]>dp[end]){
            end = i;
        }
    }
    int j, sum;
    for(j=end, sum=0; j>=0; --j){
        sum += v[j];
        if(sum==dp[end]){
            beg = j;    // get the smallest j if duplicated
            //break;
        }
    }
    if(dp[end]<0){
        cout<<0<<" "<<v[0]<<" "<<v[n-1]<<endl;
        return 0;
    }
    cout<<dp[end]<<" "<<v[beg]<<" "<<v[end]<<endl;
    return 0;
}
