class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        int n=intervals.size();
        vector<int> temp(2,0);
        temp=intervals[0];
        for(int i=0;i<n-1;i++){
            if (intervals[i][1]>=intervals[i+1][0]){
                intervals[i+1][0]=intervals[i][0];
                intervals[i+1][1]=max(intervals[i][1],intervals[i+1][1]);
                temp[0]=intervals[i+1][0];
                temp[1]=intervals[i+1][1];
            }
            else{
                res.push_back(temp);
                if (i<n-1){
                    temp=intervals[i+1];
                }
            } 
        }
        res.push_back(temp);
        return res;
    }
};
