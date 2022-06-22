string highestValuePalindrome(string s, int n, int k) {
    int l = 0, r = n-1;
    vector<bool> changed(n); //identify which index has changed 
    
    // making the string palindrome (without considering k)
    while (l <= r)
    {
        if (s[l] != s[r]) // a miss-match
        {
            // choose the largest of the two sides and equate the other side to it 
            if(s[l]>s[r])
            {
                s[r] = s[l];
                changed[r] = true;
            }
            else  
            {
                s[l] = s[r];
                changed[l] = true;
            }
            k--;
        }
        l++;
        r--;
    }
    
    // means that number of miss-matches are greater than the given k, so no solution exists
    if (k < 0) return "-1";
    
    l = 0;
    r = n-1;
    
    // handling the palindrome to be the largest possible
    while (l <= r)
    {
        if(l == r && k >= 1) // reached the last stage and there is still a possible move, situation when len(str) is odd
        {
            s[l]='9';
            break;
        }
        
        // encountered a char that can be of larger value
        if (s[l] < '9')
        {
            // if neither of the right and left chars have been changed before and there are still 2 or more possible moves
            if(!changed[l] && !changed[r] && k >=2)
            {
                s[l] = '9';
                s[r] = '9';
                k -= 2;
            }
            
            // if either the right or left chars have been changed before and there is still 1 or more possible moves (cannot be both as in the previous step we were changing just the left or the right)
            if ((changed[r] || changed[l]) && k >= 1)
            {
                s[l] = '9';
                s[r] = '9';
                k--;
            }
        }
        l++;
        r--;
    }
    
    return s;
}
