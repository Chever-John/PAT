//
// Created by 硬汉J on 2021/2/23.
//

#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n);

int main(){
    int num;
    cin >> num;
    cout << climbStairs(num) << endl;

    return 0;
}

int climbStairs(int n){
    if (n <= 2) return n;
    vector<int> dp(n + 1, 1);
    cout << "dp[0] = " << dp[0] << endl;
    for (auto i : dp) {
        cout << dp[i] << " ";
    }
    cout << endl;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[n];
}