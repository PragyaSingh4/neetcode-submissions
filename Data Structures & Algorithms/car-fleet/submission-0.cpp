class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,double>>cars;
        for(int i = 0;i<n;i++)
        {
            double time = (double)(target-position[i])/speed[i];
            cars.push_back({position[i],time});
        }
        sort(cars.begin(),cars.end(),greater<>());
        int fleet = 0;
        double maxi = 0;
        for(auto &points :cars)
        {
            if(points.second>maxi)
            {
                fleet++;
                maxi = points.second;
            }
        }
        return fleet;
    }
};
