#include <stdio.h>

int main() {
    // These two variables are the same, "auto" storage type
    // is defined automatically for variable definition inside
    // a function/block
    int player_one_score = 100;
    auto int player_two_score = 100;

    printf("Player one's score: %d\n", player_one_score);
    printf("Player two's score: %d\n", player_two_score);

    // Return success
    return 0;
};