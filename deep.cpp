class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        sort(candidates.begin(), candidates.end());

        solve(0, target, candidates, curr, ans);

        return ans;
    }

    void solve(int index, int target, vector<int>& candidates,
               vector<int>& curr, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {

            // Skip duplicate elements at the same recursion level
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted, no need to check larger elements
            if (candidates[i] > target)
                break;

            curr.push_back(candidates[i]);

            // i + 1 because each element can be used only once
            solve(i + 1, target - candidates[i], candidates, curr, ans);

            curr.pop_back();
        }
    }
};