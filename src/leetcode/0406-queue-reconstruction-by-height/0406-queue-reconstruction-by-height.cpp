class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b) {
        if (a[0] == b[0]) {
            return a[1] < b[1];
        } else {
            return a[0] > b[0];
        }
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>> &people) {
        sort(people.begin(), people.end(), compare);
        vector<vector<int>> ans;
        int idx;
        for (int i = 0; i < people.size(); ++i) {
            idx = people[i][1];
            ans.insert(ans.begin() + idx, people[i]);
        }
        return ans;
    }
};
