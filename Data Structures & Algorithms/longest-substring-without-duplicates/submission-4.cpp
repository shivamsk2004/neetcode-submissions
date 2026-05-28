class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)return 0;
        //z x y z x y z
        //0 1 2 3 4 5 6
        vector<int>hash(128,-1);
        int l=0;
        int r=0;
        int maxi=1;
        while(r<n){
            if(hash[s[r]]!=-1){
                l=max(l,hash[s[r]]+1);
            }
            // cout<<l<<" "<<r<<endl;
            maxi=max(maxi,r-l+1);
            hash[s[r]]=r;
            r++;
        }
        return maxi;
    }
};
