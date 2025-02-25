#include<stdio.h>
#include<string.h>
#define MAXLEN 128
#define LEN 20

void remove_first_word(char strings[][MAXLEN], int count)
{
    printf("\n");
    printf("RESULT:\n\n");

    char* first_word;
    char* other_words;
    for(int i = 0; i<count; i++)
    {
    char* str = strings[i];

    while (*str == ' ')
        str++;

        first_word = strtok(str, " ");
        other_words = str + strlen(first_word)+1;

    while(*other_words==' ')
        other_words++;

    printf("%d: %s\n", i+1, other_words);
    }
}

int input_strings(char strings[][MAXLEN])
{
    int count = 0;
    printf("?");
    while(gets(strings[count])){
        if (strlen(strings[count]) == 0)
            break;
    count++;
    printf("?");
    }
    return count;
}
