#include <stdio.h>

int main() {
    int x, y, c, flag= -1;
    scanf("%d %d %d", &x, &y, &c);

    for (int i = x; i <=y; i++){  // Print a number between A and B (inclusive) that is a multiple of C
        if(i%c ==0) {
            flag = i;
            break;
        }
    }
    if(flag == -1) printf("-1");
    else printf("%d", flag);

    return 0;
}