string funnyString(string s) {
    int size = s.length();
    vector<int> fro;
    vector<int> refer;
    
    for (int i = 0 ; i< size-1; i++)
    {
        fro.push_back( abs(int(s[i]) - int(s[i+1])) );
        refer.push_back( abs(int(s[size-i-1]) - int(s[size-i-2])) );
        if(fro.back()!=refer.back()) return "Not Funny";
    }
    return "Funny";
}