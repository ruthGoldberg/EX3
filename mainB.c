#include <stdio.h>
#include "EX3.h"

#define WORD 30


int main() {
    char str[WORD] = {0};
    char choice;
    getWord(str);
    scanf("%c\n", &choice);

    switch (choice) {

        case 'a':
            print_lines(str);
            break;
        case 'b':
            print_similar_words(str);
            break;
    }

//char line[] ="looking for the word cat";
//int n = substring(line , "cat");
//    printf("%d\n",n);


}


