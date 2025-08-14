class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        if(t.size() > n)
            return "";
        
        unordered_map<char, int> mpp;

        for(char c : t)
            mpp[c]++;
        
        int requiredCount = t.size();
        int i = 0,j = 0;
        long long minWindowSize = INT_MAX;
        int start_i = 0;

        while(j < n)
        {
            char ch = s[j];
            if(mpp[ch] > 0)
                requiredCount--;
            
            mpp[ch]--;
            
            while(requiredCount == 0)
            {
                long long currWindowSize = j - i + 1;

                if(minWindowSize > currWindowSize){
                    minWindowSize = currWindowSize;
                    start_i = i;
                }
                
                mpp[s[i]]++;
                if(mpp[s[i]] > 0)
                    requiredCount++;
                
                i++;
            }
            j++;
        }
        cout<<"Start i "<<start_i<<" Min window Size : "<<minWindowSize<<endl;
        return minWindowSize == INT_MAX ? "" : s.substr(start_i, minWindowSize);
    }
};
