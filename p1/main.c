#include <stdio.h>

int main()
{
    char x[11];
    
    char maxChar;
    int max=0;
    
    scanf("%s", x);
    
    for (char *p = x; p<x+10; p++) {
        int count =0;
        for(char *q=x; q< x+10; q++) {
            if (*q == *p) {
                count ++;
            }
        }
        if (count > max) {
            max = count;
            maxChar = *p;
        }
    }
    
    printf("%c %d", maxChar, max);
    

    return 0;
}
