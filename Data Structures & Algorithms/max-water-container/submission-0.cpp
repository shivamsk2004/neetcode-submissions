class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        //1 7 2 5 4 7 3 6
        //2 2 2
        int i=0;
        int j=n-1;
        int maxi=0;
        while(i<j){
            int width=(j-i);
            int mini=min(heights[i],heights[j]);
            maxi=max(maxi,mini*width);
            if(heights[i]<=heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};
