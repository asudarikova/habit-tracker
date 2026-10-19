#include <stdio.h>

/* Процент выполнения привычки за период */
double percent_done(int done, int total) {
    if (total == 0) return 0;
    return 100.0 * done / total;
}
