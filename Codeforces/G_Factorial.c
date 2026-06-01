#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--){
        long long int n, Factorial=1;
        scanf("%lld", &n);

        for (int i = 1; i <=n; i++) 
            Factorial *= i;

        printf("%lld\n", Factorial);
    }

    return 0;
}