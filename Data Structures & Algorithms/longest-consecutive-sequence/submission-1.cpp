class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        sort(nums.begin(),nums.end());
        int cnt=0;
        int maxi=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])continue;
            if(nums[i]==nums[i-1]+1){
                cnt++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt=0;
            }
        }
        maxi=max(maxi,cnt);
        return maxi+1;
    }
};
