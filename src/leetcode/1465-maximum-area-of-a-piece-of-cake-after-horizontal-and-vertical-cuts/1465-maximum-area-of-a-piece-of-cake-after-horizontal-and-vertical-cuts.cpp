#include <bits/stdc++.h>

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const long long int m = pow(10, 9) + 7;
    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        vector<int> hvec;
        hvec.emplace_back(horizontalCuts[0]);
        for (int i = 1; i < horizontalCuts.size(); i++) {
            hvec.emplace_back(horizontalCuts[i] - horizontalCuts[i - 1]);
        }
        hvec.emplace_back(h - horizontalCuts.back());
        vector<int> wvec;
        wvec.emplace_back(verticalCuts[0]);
        for (int i = 1; i < verticalCuts.size(); i++) {
            wvec.emplace_back(verticalCuts[i] - verticalCuts[i - 1]);
        }
        wvec.emplace_back(w - verticalCuts.back());
        long long int a = *max_element(hvec.begin(), hvec.end());
        long long int b = *max_element(wvec.begin(), wvec.end());
        return (a % m * b % m);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
