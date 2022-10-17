class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> res(n,-1);
        stack<int> s;
        for(int i=0; i<n;i++){
            while(!s.empty() && arr[i]>arr[s.top()]){
                int idx = s.top();
                s.pop();
                res[idx] = arr[i];
            }
            s.push(i);
        }
        return res;
    }
};
