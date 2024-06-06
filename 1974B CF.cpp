//1974-B
#include<bits/stdc++.h>
using namespace std;

// used set to store the letters of the word without repetition and in ascending order
// made to iterators one from start and one from end as implied in codethat first corresponds to last
// stored the corresponding key value in a map and then iterated over string to change the values!!

int main() {
    int t;
    cin >> t;

    while (t--) {
        map <char,char> m;
        string s;
        string copy;

        int n;
        cin>>n;
        set <char> ss;
        cin>>s;
        set<char>::iterator itrf;
        set<char>::reverse_iterator itrr=ss.rbegin();
        map<string, int>::iterator it;
        copy=s;
        for (int i = 0; i < n; ++i)
        {
            ss.insert(s[i]);
        }
        for(itrf=ss.begin(); itrf!=ss.end();itrf++){
            m.insert({*itrf,*itrr});
            itrr++;
        }
       for (int i = 0; i < n; ++i)
       {
           for(auto &it:m){
            if (it.second==copy[i])
            {
                s[i]=it.first;
            }
           }
       }
       cout<<s<<endl;
    
}
return 0;
}

