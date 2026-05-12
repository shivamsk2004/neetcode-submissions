class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1)return strs[0];
        vector<string>v;
        for(int i=0;i<n;i++){
            string s1=strs[i];
            for(int j=i+1;j<n;j++){
                string s2=strs[j];
                string t="";
                for(int k=0;k<min(s1.size(),s2.size());k++){
                    if(s1[k]==s2[k]){
                        t+=s1[k];
                    }
                    else{
                        break;
                    }
                }
                v.push_back(t);
            }
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.size()<b.size();
        });
        return v[0];
    }
};