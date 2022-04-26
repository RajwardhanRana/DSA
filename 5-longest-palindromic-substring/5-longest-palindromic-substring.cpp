class Solution {
public:
    string longestPalindrome(string s) {
         int start=0;
        int end=0;
        int n=s.size();
        for(int i=1;i<n;i++)
        {int l=i-1;           
            int h=i;
            while(l>=0 && h<n && s[l]==s[h])
            {if(end-start < h-l ) 
                { start=l;
                    end=h; }
                l--;
                h++;}
            l=i-1;
            h=i+1;
            while(l>=0 && h<n && s[l]==s[h])
            {if(end-start < h-l )
                {start=l;
                    end=h;}
                l--;
                h++;}
        }
        
        string ans="";
        for(int i=start;i<=end;i++)
            ans+=s[i];
        
        return ans;
    }
};