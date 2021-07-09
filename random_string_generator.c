#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

static char *StringGenerator(unsigned string_size){
    static char char_list[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!/<>$*_()[]{}&@#";
    char *random_string;
    if (string_size >= 12) {
        random_string = malloc(string_size + 1);
        for (int i = 0; i <= string_size; i++){
            int rnd_key = rand() % (int) (sizeof (char_list)-1);
            random_string[i] = char_list[rnd_key];
        }
    } else {
        random_string = malloc(12);
        for (int i = 0; i < 12; i++) {
            int rnd_key = rand() % (int) (sizeof(char_list)-1);
            random_string[i] = char_list[rnd_key];
        }
    }
    printf("Random string generated : \n %s", random_string);
    free(random_string);
    return 0;
}

int main() {
    unsigned int size_of_string;
    time_t t;
    srand((unsigned ) time (&t) * size_of_string);
    printf("Enter the size of the output string (by default 12 characters long): \n");
    scanf("%u",&size_of_string);
    StringGenerator(size_of_string);
    return 0;
}
