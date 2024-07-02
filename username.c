#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  
    
    while (t--) {
        long long n;
        scanf("%lld", &n);  
        
        if (n < 2) {
            printf("0\n");
        } else {
            long long result = (n - 1) / 2;
            printf("%lld\n", result);
        }
    }

    return 0;
}

