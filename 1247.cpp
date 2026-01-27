class Solution {
public:
    int minSteps(string s, string t) {
        int res {};

        unordered_map<int,int> sm;
        unordered_map<int,int> tm;

        for(int i {}; i < s.size();i++){
            sm[s[i]]++;
            tm[t[i]]++;
        }
        
        for(auto& [key, value] : sm){
            if (sm[key] > tm[key]){
                res += abs(sm[key] - tm[key]);
            }
        }

        return res;

    }
};