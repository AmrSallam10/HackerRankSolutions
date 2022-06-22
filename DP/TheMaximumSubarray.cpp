vector<int> maxSubarray(vector<int> arr) {
    
    int lastMaxSum = arr[0];
    int maxSum = arr[0];
    int maxSubSeq = arr[0];

    for (int i = 1 ; i < arr.size() ; i++)
    {
        int num = arr[i];
        int currentMax = max(num, num + lastMaxSum);
        lastMaxSum = currentMax;
        maxSum = max(maxSum, currentMax);
        maxSubSeq = max(max(maxSubSeq, maxSubSeq + num), num);
    }
    
    return (vector<int>(2) = {maxSum, maxSubSeq});
}