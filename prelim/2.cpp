#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    long long po1, po2;
    bool same=true;
    
    cin >> s;
    po1=0, po2=s.length()-1;
    
    while(po1<po2)
        if(s[po1++]!=s[po2--])
            same=false;
    
    if(same)
            cout << "same" << endl;
    
    return 0;
}
