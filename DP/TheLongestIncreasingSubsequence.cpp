int longestIncreasingSubsequence(vector<int> arr) {
    
// this is a solution using DP of complexity O(n^2)

    // vector<int> f (arr.size(),1);
    // vector<pair<int,int>> s(arr.size());
    // if (arr.size() == 1) return 1;
    
    // for (int i = 1; i < arr.size() ; i++)
    //     for (int j = 0 ; j < i ; j++)
    //         if(arr[i]>arr[j] && f[i]<=f[j])
    //             f[i] = 1+f[j];
    
    // return *max_element(f.begin(), f.end());
    
// this is a solution using binary search (lower_bound uses BS) of complexity O(nlong)
    vector<int>v;
    v.push_back(arr[0]);
    
    for (int i = 0 ; i<arr.size(); i++)
    {
        auto it = lower_bound(v.begin(), v.end(), arr[i]);
        if (it == v.end())
            v.push_back(arr[i]);
        else 
            v[it-v.begin()]=arr[i];
    }
    return v.size();
}