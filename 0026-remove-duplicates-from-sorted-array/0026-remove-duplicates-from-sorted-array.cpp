class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int b=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                b++;
                nums[b]=nums[i+1];
            }
        }
        return b+1;
    }
};