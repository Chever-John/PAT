//
// Created by 硬汉J on 2021/2/24.
//

#ifndef TEST_SOLUTIONFORROBBER_H
#define TEST_SOLUTIONFORROBBER_H


class SolutionForRobber {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        int n;
        n = nums.size();
        cout << n << endl;
        vector<int> dp(n + 1, 0);
        dp[1] = nums[0];
        for (int i = 2; i <= n; i++) {
            dp[i] = max(dp[i - 1], nums[i - 1] + nums[i - 2]);
        }
        return dp[n];
    }
};


#endif //TEST_SOLUTIONFORROBBER_H
