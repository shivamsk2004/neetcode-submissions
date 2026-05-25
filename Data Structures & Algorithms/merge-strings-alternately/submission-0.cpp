class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int m=word1.size();
        int n=word2.size();
        int k=0;
        for(int i=0;i<min(m,n);i++){
            ans+=word1[i];
            ans+=word2[i];
            k++;
        }
        for(int i=k;i<max(m,n);i++){
            if(m>n)ans+=word1[i];
            else ans+=word2[i];
        }
        return ans;
    }
};