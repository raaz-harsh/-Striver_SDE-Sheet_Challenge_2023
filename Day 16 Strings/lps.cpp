string longestPalinSubstring(string str)
{
    // Write your code here.
    int n = str.length();
    int l,r;
    string temp = str.substr(0,1);
    int strlen = 1;

    for(int i = 1; i <= n; i++)
    {
        

        //even
        l = i-1;
        r = i;
        while(l>= 0 && r <n && str[l]== str[r])
        {
            if(r-l+1> strlen)
            {
                temp = str.substr(l,r-l+1);
                strlen = r-l+1;
            }
            l--;
            r++;
        }

        //odd
        l = i-1;
        r = i+1;

        while(l >= 0 && r <n && str[l] == str[r])
        {
            if(r-l+1 > strlen) //if it is greater than prev palin string
            {
                temp = str.substr(l,r-l+1);
                strlen = r-l +1;
            }
            l--;
            r++;
        }
    }

    return temp;
    
}