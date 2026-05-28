class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0;
        int r=0;
        int ans=0;
        vector<int>hash(26,0);
        while(r<n){
            hash[s[r]-'A']++;
            int maxi=0;
            for(int i=0;i<26;i++){
                maxi=max(maxi,hash[i]);
            }
            if(r-l+1-maxi<=k)ans=max(ans,r-l+1);
            else{
                hash[s[l]-'A']--;
                l++;
            }
            r++;
        }
        return ans;
    }
};
