#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    int n, flag=1;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i <n; i++)  
        scanf("%d", &a[i]);

    int minimum = INT_MAX;
    for (int i = 0; i <n; i++) {
        if(a[i] == 0) {
            flag = 0;
            break;
        }
        else if(abs(a[i]) < minimum) minimum = abs(a[i]);
    }
    if(flag == 1) printf("%d", minimum);
    else printf("0");

    return 0;
}