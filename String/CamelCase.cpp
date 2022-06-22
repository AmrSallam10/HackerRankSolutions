int camelcase(string s) {
    int size = s.length();
    
    if (size == 0) return 0;
    else 
    { 
        int c = 1;  
        for (int i = 0 ; i < size ; i++)
        {
            if (isupper(s[i])) c++;
            else c = c; 
        }
        return c;
    }

}