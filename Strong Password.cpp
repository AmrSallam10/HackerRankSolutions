int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int current_size = n;
    int ret = 0;
    bool contain_digit = false;
    bool contain_lower = false;
    bool contain_upper = false;
    bool contain_spec = false;
    char c;
    for (int i = 0 ; i<n ; i++)
    {
        c = password[i];
        if (isupper(c)) contain_upper = 1;
        else if (islower(c)) contain_lower = 1;
        else if (isdigit(c)) contain_digit = 1;
        else if (!((c >= int('A') && c <=int('Z')) ||
        (c >= int('a') && c <= int('z')) ||
        (c >= int('0') && c <= int('9')))) contain_spec = 1;
    }
    
    if (!contain_spec) ret ++;
    if (!contain_upper) ret++;
    if (!contain_lower) ret++;
    if (!contain_digit) ret++;
    
    current_size += ret;
    if(current_size < 6) ret += (6 - current_size);
    
    return ret;
}