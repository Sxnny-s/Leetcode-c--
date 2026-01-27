class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        // pair and sort positions and speed in an vector
        vector<pair<int,int>> arr;
        for(int i {}; i < position.size();i++){
            arr.push_back({position[i],speed[i]});
        }

        sort(arr.rbegin(),arr.rend());

        // init min_speed (hold the speed of the slowest fleet)
        double min_speed = (double)(target - arr[0].first ) / arr[0].second;
        // init fleets (couts number of fleets)
        int fleets {1};

        // iterate through out sorted array 
        for(auto& [pos,spd] : arr){

            // calculate the time to target
            double time = double(target - pos) / spd;

            // if time is <= min_speed
            if(time > min_speed){
                min_speed = time;
                fleets++;
                //else fleets++
                // min speed == time
            }
        }

        // return fleets
        return fleets;
    }
};