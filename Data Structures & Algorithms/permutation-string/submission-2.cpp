class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int>cnt1(26,0);
        for(auto &it:s1){
            cnt1[it-'a']++;
        }
        int n=s1.size();
        vector<int>cnt2(26,0);
        for(int i=0;i<n;i++){
            cnt2[s2[i]-'a']++;
        }
        int len=0;
        for(int i=0;i<26;i++){
            if(cnt1[i]>0){
                if(cnt1[i]==cnt2[i])len+=cnt1[i];
            }
        }
        if(len==n)return true;
        for(int i=n;i<s2.size();i++){
            cnt2[s2[i-n]-'a']--;
            cnt2[s2[i]-'a']++;
            int len=0;
            for(int j=0;j<26;j++){
            if(cnt1[j]>0){
                if(cnt1[j]==cnt2[j])len+=cnt2[j];
                }
            }
            if(len==n)return true;
        }
        return false;
    }
};
