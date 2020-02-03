#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main ()
{
    int H, N;

    scanf("%d %d", &H, &N);

    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    
    for(int j=0; j<N; j++)
    {
        if (H > 0)
        {
            H = H - vec.at(j);
        }
        else
        {
            printf("Yes\n");
            break;
        }

    }

    if(H<=0)
    {
        printf("No\n");
    }
    
    return 0;
}