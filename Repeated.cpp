int solve(string a, string b)
    {
        int m=a.size();
        int n=b.size();
        
        for(int i=0;i<=m-n;i++)
        {
            int j;
            
            for(j=0;j<n;j++)
            {
                if(a[i+j]!=b[j])
                    break;
            }
            if(j==n)
            {
                return 1;
            }
                
        }
        return 0;
    }
    
    int repeatedStringMatch(string a, string b) {
        int m=a.size();
        int n=b.size();
        int ans=1;
        
        string s=a;
        
        while(a.size()<b.size())
        {
            a+=s;
            ans++;
        }
        
        if (solve(a,b))
            return ans;
        
            
        if (solve(a+s,b))
            return ans+1;
        
        
        return -1;
    }
