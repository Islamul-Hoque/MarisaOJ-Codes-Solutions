#include <stdio.h>
#include <limits.h>

int main() {
    int n, ans =0;
    scanf("%d", &n);

    int mx = INT_MIN;
    int a[101], sum =0;
    for (int i = 0; i <n; i++)  
        scanf("%d", &a[i]);

    for (int i = 1; i <n; i++)  // find max without Person 1 
        if( a[i] > mx) mx = a[i];

    if(a[0] <=mx)
        ans =  mx - a[0]  + 1;  // strictly greater (>) => +1 add hobe
    printf("%d", ans);

    return 0;
}