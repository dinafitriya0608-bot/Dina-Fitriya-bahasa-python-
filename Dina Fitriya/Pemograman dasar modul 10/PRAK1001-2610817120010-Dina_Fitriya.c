#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d! = %lld\n", n, factorial(n));
    return 0;
}