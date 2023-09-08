class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int>m1;
        
        m1['I']=1;
        m1['V']=5;
        m1['X']=10;
        m1['L']=50;
        m1['C']=100;
        m1['D']=500;
        m1['M']=1000;
        
        
        int n=s.length();
        int d=0;
        
        for(int i=0;i<n-1;i++){
            
            if(m1[s[i]]<m1[s[i+1]]){
                d-=m1[s[i]];
            }
            else{
                d+=m1[s[i]];
            }
        }
        d+=m1[s[n-1]];
        
        return d;
    }
};