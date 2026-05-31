#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1001], sum =0;
    for (int i = 0; i <n; i++) {
        scanf("%d", &a[i]);

        if(a[i] >10){
            sum += a[i] -10; // কিছু সংখ্যা দেওয়া হবে। যেগুলো 10 বা তার বেশি, সেগুলো থেকে 10 বাদ দিয়ে বাকিটুকু যোগ করো।
        }
    }
    printf("%d", sum);

    return 0;
}

