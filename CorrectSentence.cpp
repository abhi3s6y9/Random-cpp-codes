// #include <iostream>
// #include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t>0)
    {
        string st;
        getline(cin, st);
        // cout<<st<<endl;
        int k = st[0] - '0';
        string str[k];
        int j=0;
        
        for(int i=2;i<st.length();i++)
        {
            if(j>=k || st[i]=='\n')
                break;
            if(st[i]!=' ')
                str[j].push_back(st[i]);
            if(st[i]==' ')
            {
                j++;
            }
        }
        
        // for(int i=0;i<k;i++)
        // {
        //     for(int j=0;j<str[i].length();j++)
        //         cout<<str[i][j];
        //     cout<<" ";
        // }
        // cout<<endl;
        
        int f=1;
        for(int i=0;i<k;i++)
        {
            char ch = str[i][0];
            int grp;
            if(ch>='a' && ch<='m')
                grp = 1;
            else if(ch>='N' && ch<='Z')
                grp = 2;
            else
            {    
                f=0;
                break;
            }
            
            if(grp==1)
            {
                for(int j=0;j<str[i].length();j++)
                {
                    char chr = str[i][j];
                    if(chr>='a' && chr<='m')
                        continue;
                    else
                    {
                        f=0;
                        break;
                    }
                }
            }
            else
            {
                for(int j=0;j<str[i].length();j++)
                {
                    char chr = str[i][j];
                    if(chr>='N' && chr<='Z')
                        continue;
                    else
                    {
                        f=0;
                        break;
                    }
                }
            }
        }
        
        if(f==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        
        t--;
    }
    return 0;
}
