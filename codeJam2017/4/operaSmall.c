#include <stdio.h>

int main(void)
{
    int T, Smax, i, j, shy, addon, stand;
    char str[100];

    freopen("A-large-practice.in", "r", stdin);
    scanf("%d", &T);
    freopen("Result.txt", "w", stdout);
    for(i = 0; i < T; i++) {
        stand = 0;
        addon = 0;
        scanf("%d %s", &Smax, str);
        for (j = 0; j <= Smax; j++) {
            shy = str[j] - '0';
            if (stand >= j) {
                stand += shy;
            } else {
                if(!shy) continue;
                addon += j - stand;
                stand = j + shy;
            }
        }
        printf("Case #%d: %d\n", i+1, addon);
    }
}

