// TC -> O(N+M)
// SC -> O(26)
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();

        if(n > m)
            return false;
        
        vector<int> s1_freq(26, 0), s2_freq(26, 0);
        for(auto i : s1)
            s1_freq[i - 'a']++;
        
        int i = 0, j = 0;
        while(j < m){
            s2_freq[s2[j] - 'a']++;
            if((j - i + 1) > n){
                s2_freq[s2[i] - 'a']--;
                i++;
            }

            if(s1_freq == s2_freq){
                return true;
            }
            j++;
        }
        return false;
    }
};
