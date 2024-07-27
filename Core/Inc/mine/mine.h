#include "ssd1306.h"

#include <stdio.h>

int setup() {
    ssd1306_Init();

    return 0;
}

int loop() {
    char buf[32];
    sprintf(buf, "test: %d", 1);
    ssd1306_WriteString(buf, Font_11x18, White);

    return 0;
}