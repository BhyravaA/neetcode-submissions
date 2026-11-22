class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int k=size-1;
        int i=0;
        while(i <= k)
        {
            
            if(nums[i] != val)
            {
                i++;
                continue;
            }
            else
            {
                while(k >= i && nums[k] == val)
                {
                    k--;
                }
                if(k <= i)break;
                nums[i]=nums[k];
                k--;
                            i++;
            }
        }
        return k+1;
    }
};