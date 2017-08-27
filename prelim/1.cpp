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
