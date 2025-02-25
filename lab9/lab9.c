#include<stdio.h>
#include<string.h>
#define MAXLEN 128
#define len 20

void remove_first_word(char strings[][MAXLEN], int count);
int input_strings(char strings[][MAXLEN]);

int main(void)
{
    char str[len][MAXLEN];

    printf("Vvedite <=20 strok. <128 simvolov.\n");

    int count_lines = input_strings(str);

    remove_first_word(str, count_lines);

   return 0;
}
