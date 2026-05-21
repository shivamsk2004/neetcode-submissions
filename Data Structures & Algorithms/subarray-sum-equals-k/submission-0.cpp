class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        //2 -1 1 2
        //2  1 2 4
        int res=0;
        int currsum=0;
        unordered_map<int,int>pref;
        pref[0]=1;
        for(int num:nums){
            currsum+=num;
            int diff=currsum-k;
            res+=pref[diff];
            pref[currsum]++;
        }
        return res;
    }
};