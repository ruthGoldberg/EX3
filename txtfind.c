#include <stdio.h>
#include <string.h>

#define LINE 256
#define WORD 30


int getLine(char s[]) {
    int count = 0;
    while (scanf("%c", &s[count]) != EOF){

        if (s[count] == '\n') {
            s[count]= '\0';
            break;
        }
        count++;
    }
    return count;
}




int getWord(char w[]) {
    int count = 0;
    while (scanf("%c", &w[count]) != EOF){

        if ((w[count ] == '\n') || (w[count] == '\t') || (w[count] == ' ') || (w[count]) == '\0') {
            w[count]='\0';
            break;
        }
        count++;
    }
    return count;

}

int substring(char *str1, char *str2) {
    int j = 0;
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    for (int i = 0; i < str1Len; i++) {
        if (str1[i] == str2[0]) {
            for (j = 1; j < str2Len; j++) {
                if (str1[i + j] != str2[j]) {
                    break;
                }
            }
            if (j == str2Len) {
                return 1;
            }
        }
    }
    return 0;
}

int similar(char *s, char *t, int n) {
    int sLen = strlen(s);
    int tLen = strlen(t);
    char temp[sLen];
    int j = 0;
    int k = 0;
    if (sLen == tLen) {
        if (n != 0)
            return 0;
        else {
            if (substring(s, t) == 1)
                return 1;
        }
    }
        for (int i = 0; i < sLen; i++) {
            if (s[i] != t[j]) {
                n--;
            } else {
                temp[k++] = s[i];
                j++;
            }
        }
        if (n != 0)
            return 0;

        return (substring(temp, t));


}

void print_lines(char *str) {

    char text[LINE];
    int chars = 0;
    while (1) {
        memset(text, 0, LINE);
        chars = getLine(text);
        if (chars == 0)
            break;
        int bool = substring(text, str);
        if (bool)
            printf("%s\n", text);

    }

}

void print_similar_words(char *str) {

    char word[WORD];
    int chars = 0;
    while (1) {
        memset(word, 0, WORD);
        chars = getWord(word);
        if (chars == 0)
            break;
        if(similar(word,str,0))
            printf("%s\n", word);
        if(similar(word, str , 1))
            printf("%s\n", word);
    }

}



	

