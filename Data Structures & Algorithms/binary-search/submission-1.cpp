class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int start =0;
        int end = n;
        int mid = start+(end-start)/2;

        while(start<=end){
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                end = mid - 1;
            } 
            else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }
        return -1;
    }
};
