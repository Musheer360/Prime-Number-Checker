#include <stdio.h>

int main() {
        
        int n, i, count = 0;
        printf("Enter number: ");
        scanf("%d", &n);

        for(i = 2; i <= n / 2; i++) {
                if(n % i == 0) {
                        printf("%d is not a prime number.", n);
                        count = 1;
                        break;
                }
        }

        if(count == 0) {
                printf("%d is a prime number.", n);
        }

}
