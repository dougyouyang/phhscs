#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    
    cin >> s;
    long long po1=0, po2=s.length()-1;
    while(po1<po2){
        if(s[po1]!=s[po2])
            break;
        po1++, po2--;
        if(po1>po2)
            cout << "yes" << endl;
    }
    
    return 0;
}
