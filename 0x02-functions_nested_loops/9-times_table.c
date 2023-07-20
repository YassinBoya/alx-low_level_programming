#include "main.h"

void times_table(void) {
    int i, j, product;

    _putchar(48);
    for (i = 0; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            product = i * j;

            if (j != 0) {
                _putchar(',');
                _putchar(' ');
            }

            if (product < 10) {
                _putchar(' ');
            } else {
                _putchar((product / 10) + '0');
            }

            _putchar((product % 10) + '0');
        }
        _putchar('\n');
    }
}
