// TC -> O(N)
// SC -> O(K)
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        long long currWindowSum = 0;
        int n = nums.size(), i = 0, j =0;
        unordered_set<int> st;

        while(j < n)
        {
            while(st.count(nums[j])){
                currWindowSum -= nums[i];
                st.erase(nums[i]);
                i += 1;
            }

            currWindowSum += nums[j];
            st.insert(nums[j]);

            if(j - i + 1 == k){
                ans = max(ans, currWindowSum);

                currWindowSum -= nums[i];
                st.erase(nums[i]);
                i += 1;
            }
            j++;
        }
        return ans;
    }
};
