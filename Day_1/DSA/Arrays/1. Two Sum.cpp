// TC -> O(N*N)
// SC -> O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < n;j++){
                if(i != j){
                    if(nums[i] + nums[j] == target){
                        ans.push_back(i);
                        ans.push_back(j);
                        return ans;
                    }
                }
            }
        }
        return ans;
    }
};

// TC -> O(N)
// SC -> O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];
            if (mpp.find(rem) != mpp.end()) {
                return {mpp[rem], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
