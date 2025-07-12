#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string p, s, s2 = "";
        cin >> p >> s;

        bool flag = true;
        int ln_r = p.size(), ln_s = s.size();

        vector<string> ss, pp;

        for (int i = 0; i < ln_s; i++)
        {
            s2+=s[i];

            if(i == ln_s-1 || s[i]!=s[i+1])
            {
                ss.push_back(s2);
                s2="";
            }
        }


        string s3 = "";
        for (int i = 0; i < ln_r; i++)
        {
            s3+=p[i];

            if(i == ln_r-1 || p[i]!=p[i+1])
            {
                pp.push_back(s3);
                s3="";
            }
        }

        vector<pair<int,char>>mp_p;
        vector<pair<int,char>>mp_s;

        for (auto x:pp)
        {
            mp_p.push_back({x.size(),x[0]});
        }

        for (auto x:ss)
        {
            mp_s.push_back({x.size(),x[0]});
        }

        for (int i = 0; i < mp_p.size(); i++)
        {
            if(mp_p.size()!=mp_s.size())
            {
                flag = false;
                break;
            }
            else
            {
                if(!(mp_s[i].first>=mp_p[i].first && mp_s[i].first <= mp_p[i].first*2) || mp_p[i].second!=mp_s[i].second)
                {
                    flag = false;
                    break;
                }
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        


        
    }
    

    return 0;
}