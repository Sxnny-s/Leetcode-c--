#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
         // pair speeds and positions
        vector<pair<double,double>> arr; 

        for(int i {}; i < position.size();i++){
            arr.push_back({position[i],speed[i]});
        }

        sort(arr.rbegin(), arr.rend());

        // init stack 
        stack<double> st;
        // iterate through the speeds and positions sorted
        for(int i {}; i < arr.size();i++){
            // calculate the time it takes the car to reach the target
            double time = (target - arr[i].first) / arr[i].second;
            cout << time << '\n';
            // while the !st.isempty()  and the top of our stack time is <= the current finishing time
            while(!st.empty() && time <= st.top()){
                // pop off the stack
                time = st.top();
                st.pop();
            }
            // add the current finishing time to stack
            st.push(time);    
        }
        // return the stack length
        return st.size();
    }
    }

};