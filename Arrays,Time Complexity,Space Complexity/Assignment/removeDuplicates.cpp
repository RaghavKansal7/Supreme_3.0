class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =1,j=0;
        while(i<nums.size()){
            if(nums[i] == nums[j]) i++;
            else ums[++j] = nums[i++];
            // else{
            //     j++;
            //     nums[j] = nums[i];
            //     i++;
            // }
        }
        return j+1;
    }
};