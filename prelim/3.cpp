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
