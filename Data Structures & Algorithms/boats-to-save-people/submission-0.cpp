class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int cnt=0;
        int i=0;
        int j=people.size()-1;
        //1 2 2 3 3
        while(i<j){
            int sum=people[i]+people[j];
            if(sum<=limit){
                i++;
                j--;
                cnt++;
            }else{
                j--;
                cnt++;
            }
        }
        if(i==j)return cnt+1;
        return cnt;
    }
};