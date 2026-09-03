class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int j=0,k=0,b[n/2],c[n/2];
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                b[j]=nums[i];
                j++;
            }
            else
            {
                c[k]=nums[i];
                k++;
            }
        }
        j=0;
        k=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                nums[i]=b[j];
                j++;
            }
            else
            {
                nums[i]=c[k];
                k++;
            }
        }
        return nums;
    }
};