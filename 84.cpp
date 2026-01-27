// 84. Largest Rectangle in Histogram
#include <stack>
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // res to hold answer
        int res {};
        // append 0 to the end to clearn of any heights 
        heights.push_back(0);
        // init a stack (monotonic increasing) (heigh, index)
        stack<pair<int,int>> st;
        // iterate through heights
        for(int i {}; i < heights.size();i++){
            // if stack is not empty and the current hight is less than the top
            int idx {i};
            while(!st.empty() && heights[i] < st.top().first){
                // pop height and index
                int height {st.top().first};
                int index {st.top().second};
                st.pop();

                // width = i - stack index
                int width {i - index};
    
                // width * height == area of box
                res = max(height * width,res);
                idx = index;
            }
            st.push({heights[i],idx});
        }  
        // return res
        return res;
    }
};



// Input: heights = [2,1,2]
// Output:  3
