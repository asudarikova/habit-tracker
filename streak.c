#include <stdio.h>

int count_streak(int days[], int n) {
    int streak = 0;
    for (int i = n - 1; i >= 0 && days[i]; i--) {
        streak++;
    }
    return streak;
}

int main(void) {
    int days[] = {1, 0, 1, 1, 1};
    printf("Серия: %d дней\n", count_streak(days, 5));
    return 0;
}
