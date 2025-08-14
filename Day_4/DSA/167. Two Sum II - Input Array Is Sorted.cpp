// TC -> O(N)
// SC -> O(2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        int i = 0, j = n - 1;

        while(i < j){
            int sum = nums[i] + nums[j];
            if(sum == target){
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                return ans;
            }
            else if(sum > target){
                j--;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};
