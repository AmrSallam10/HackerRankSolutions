string isValid(string s) {
    
    int size = s.length();
    map <char, int> f;
    vector<int> v;
    
    for (int i = 0 ; i < size ; i++)
        f[s[i]]++;
    
    for (auto x: f)
        v.push_back(x.second);
        
    sort(v.begin(), v.end());
    
    if (v.front() == v.back()) return "YES";
    else if (v.front()==1 && *(v.begin()+1) == v.back()) return "YES";
    else if (v.front() == *(v.rbegin()+1) && (v.back() - *(v.rbegin()+1)==1)) return "YES";
    else return "NO";
}