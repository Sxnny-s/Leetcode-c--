class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    
        vector<vector<int>> res;
        int min_diff {MAX_INT};

        sort(arr.begin(), arr.end());

        for(int i {}; i < arr.size() - 1;i++){
            min_diff = min(min_diff, arr[i+1] - arr[i]);
        }

        for(int i {}; i < arr.size() - 1;i++){

            vector<int> pair {arr[i], arr[i + 1]};
            if(arr[i+ 1] - arr[i] == min_diff){
                res.push_back(pair);

            }
        }
        
        return pair;

    }
};