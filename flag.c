#include<stdio.h>

int main() {
    int i, j;
    int circle = 60;    // characters per line;


    // Stripe colors (R,G,B)
    int saffron[3] = {255, 153, 51};
    int white[3]   = {255, 255, 255};
    int green[3]   = {19, 136, 8};
    int navy[3]    = {0, 0, 128};  // Chakra color

    // Top stripe (Saffron);
    for (i = 0; i < 5; i++) {
        for (j = 0; j < circle; j++){
            printf("\x1b[48;2;%d;%d;%dm  ", saffron[0], saffron[1], saffron[2]);
        }
        printf("\x1b[0m\n");
    }

    // Middle stripe (White with Chakra in center)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < circle; j++) {
            if (j > circle/2 - 3 && j < circle/2 + 3) {
                printf("\x1b[48;2;%d;%d;%dm\x1b[38;2;%d;%d;%dmO ",
                       white[0], white[1], white[2],
                       navy[0], navy[1], navy[2]);
            }
             else {
                printf("\x1b[48;2;%d;%d;%dm  ", white[0], white[1], white[2]);
            }
        }
        printf("\x1b[0m\n");
    }

    // Bottom stripe (Green)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < circle; j++) {
            printf("\x1b[48;2;%d;%d;%dm  ", green[0], green[1], green[2]);
        }
        printf("\x1b[0m\n");
    }

     return 0;
}