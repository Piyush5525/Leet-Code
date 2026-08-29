class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c = 0, b = 0;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
            {
                b++;
            }
            else
            {
                c = max(c, b);
                b = 0;
            }
        }

        c = max(c, b);

        return c;
    }
};