class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int lcs = 1;

        for(int i=0;i<nums.size();i++){
            int currnum = nums[i];
            int currlen = 1;

            int next = currnum+1;

            while(true){
                bool found = false;

                for(int j=0;j<nums.size();j++){
                    if(nums[j] == next){
                        found = true;
                        currlen++;
                        next++;
                        break;
                    }
                }

                if(!found){
                    break;
                }
            }
        lcs = max(lcs,currlen);
        }
        return lcs;
    }
};
