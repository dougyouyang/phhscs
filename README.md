# phhscs
the problems suck
#include <iostream>

using namespace std;

int main()
{
    long long t[31][31];
    int i, j;
    for(i=1;i<=30;i++)
        t[i][1]=t[i][i]=1;
    
    for(i=3;i<=30;i++)
        for(j=2;j<i;j++)
            t[i][j]=t[i-1][j-1]+t[i-1][j];
    for(i=1;i<=30;i++)
        cout << t[30][i] << " ";
    cout << endl;
    
    return 0;
}

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

#include <iostream>

using namespace std;
int pre[10001];

int main()
{
    int n, array[10001];
    int i, j, lar=0;
    
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> array[i];
    for(i=1;i<=n;i++)
        pre[i]=pre[i-1]+array[i];
    
    for(i=0;i<n;i++)
        for(j=1;j<=n;j++)
            lar=max(lar, pre[j]-pre[i]);
    
    cout << lar << endl;
    
    return 0;
}
