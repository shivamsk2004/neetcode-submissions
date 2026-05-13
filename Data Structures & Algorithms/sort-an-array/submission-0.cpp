class Solution {
    private:
    int partition(vector<int>&arr,int low,int high){
        int pivot=arr[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
    }
    void quicksort(vector<int>&arr,int low,int high){
        if(low<high){
            int pi=partition(arr,low,high);
            quicksort(arr,low,pi-1);
            quicksort(arr,pi+1,high);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
       int n=nums.size(); 
    //    vector<int>arr(n);
       quicksort(nums,0,n-1);
       return nums;
    }
};