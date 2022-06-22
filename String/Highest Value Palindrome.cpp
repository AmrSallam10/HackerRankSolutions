string highestValuePalindrome(string s, int n, int k) {
    int l = 0, r = n-1;
    vector<bool> changed(n);
    
    while (l <= r)
    {
        if (s[l] != s[r])
        {
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
    
    if (k < 0) return "-1";
    
    l = 0;
    r = n-1;
    
    while (l <= r)
    {
        if(l == r && k >= 1)
        {
            s[l]='9';
            break;
        }
        if (s[l] < '9')
        {
            if(!changed[l] && !changed[r] && k >=2)
            {
                s[l] = '9';
                s[r] = '9';
                k -= 2;
            }
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