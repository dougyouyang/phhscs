#include <iostream>

using namespace std;

int main()
{
    int n, array, total, cur=0;
    int i;
    
    cin >> n;
    cin >> array;
    
    total=cur=array;
    for(i=2;i<=n;i++){
        cin >> array;
        if(array>total && cur<0){
            total=cur=array;
            continue;
        }
        cur+=array, total=max(total, cur);
    }
    
    cout << total << endl;
    
    return 0;
}
