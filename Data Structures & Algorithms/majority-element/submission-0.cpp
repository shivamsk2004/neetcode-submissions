class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int el;
        for(int i=0;i<n;i++){
            if(cnt==0)el=nums[i];
            if(el==nums[i]){
                cnt++;
            }
            else if(el!=nums[i])cnt--;
        }
        cnt=0;
        for(int i=0;i<n;i++){
            if(el==nums[i])cnt++;
        }
        if(cnt>=n/2)return el;
        return -1;
    }
};