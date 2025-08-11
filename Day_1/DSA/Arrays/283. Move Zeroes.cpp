// TC -> O(N)
// SC -> O(N)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zc = 0;
        int n = nums.size();
        vector<int> temp;
        for(int i = 0;i < n;i++)
        {
            if(nums[i] == 0)
                zc++;
            else
                temp.push_back(nums[i]);
        }
        while(zc--)
            temp.push_back(0);
        
        nums = temp;
    }
};
