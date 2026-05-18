class Solution {
public:
    bool isPalindrome(string s) {
       int n=s.size();
       string s1="";
       for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s1+=tolower(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z'){
            s1+=s[i];
        }
        else if(s[i]>='0' && s[i]<='9'){
            s1+=s[i];
        }
       } 
       int m=s1.size();
       for(int i=0;i<m/2;i++){
        if(s1[i]!=s1[m-i-1])return false;
       }
       return true;
    }
};
