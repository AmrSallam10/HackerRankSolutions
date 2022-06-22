string superReducedString(string s) {
    int size = s.length();
    int top = -1;
    char *stack = new char [size];
    
    for (int i = 0 ; i < size; i++)
    {
        if (i == 0) stack[++top] = s[i];
        else  
        {
            if(stack[top] == s[i]) top--;
            else stack[++top] = s[i];
        }
    }
    
    if (top == -1) return "Empty String";
    else  
    {
        string out = "";
        for (int i = 0 ; i<= top ; i++)
        {
            out += stack[i];
        }
        
        return out;
    }
}