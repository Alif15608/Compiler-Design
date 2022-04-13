#include <bits/stdc++.h>
using namespace std;

string readfile(string s)
{
    ifstream file;
    file.open(s);
    string k;
    string l;
    while(getline(file,k))
    {
        l+=k+'\n';
    }
    return l;
}

int main()
{
    string p = readfile("in.txt");
    cout<<p<<endl;
    return 0;
}
