class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int k = i + 1;
            int l = n - 1;
            while (k < l) {
                int check = nums[i] + nums[k] + nums[l];
                if (check < 0) {
                    k++;
                } else if (check > 0) {
                    l--;
                } else {
                    vector<int> temp = {nums[i], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && nums[k]==nums[k-1])k++;
                    while(k<l && nums[l]==nums[l+1])l--;
                }
            }
        }
        return ans;
    }
};
