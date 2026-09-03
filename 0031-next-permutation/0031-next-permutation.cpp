class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                int min=nums[i];
                int k=i;
                for(int j=i;j<n;j++)
                {
                    if(nums[j]<=min && nums[i-1]<nums[j])
                    {
                        min=nums[j];
                        k=j;
                    }
                }
                swap(nums[i-1],nums[k]);
                reverse(nums.begin()+i,nums.end());
                return ;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};