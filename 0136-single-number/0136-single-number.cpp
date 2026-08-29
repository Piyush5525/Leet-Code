class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int b=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j] && i!=j)
                {
                    b++;
                }
            }
            if(b<=0)
            {
                return nums[i];
            }
        }
        return 0;
    }
};