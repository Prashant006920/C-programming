// 17. Count number of vowels and consonants in a text
#include <stdio.h>
#include <ctype.h>

int main() {
    char text[200];
    int i, vowels = 0, consonants = 0;
    
    printf("Enter a text: ");
    scanf(" %[^\n]", text); // read a line including spaces

    for(i = 0; text[i] != '\0'; i++) {
        char ch = tolower(text[i]);
        if((ch >= 'a' && ch <= 'z')) {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}


