#include <stdio.h>

int main() {
    // BY SKAYLATK
    for (int i = 1; i <= 99999; i++) {
        char fname[40];
        char g[] = "😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅";
        sprintf(fname, "LABESK%d.text", i);
        FILE *f;
        f = fopen(fname, "w");
        fprintf(f, g);
        fclose(f);

    }
}