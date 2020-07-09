#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int sentence = 0;
    int letters = 0;
    int words = 0;

   string s = get_string("Text: ");

    for (int i=0; i < strlen(s); i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
        sentence++;
        };
    };
    for (int i=0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
        letters++;
        };
    };
        for (int i=0; i < strlen(s); i++)
    {
        if (s[i] == ' ' )
        {
        words++;
        };
    };
    float L = round(letters)/(words+1)*100;
    float S = round(sentence)/(words+1)*100;
 //   printf("Sentence is %i",sentence);
  //  printf("\nWords are %i",words+1);
//    printf("\nletters are %i",letters);
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int finalindex = round(index);
  //  printf("\nL is %f",L);
//    printf("\nS is %f",S);
    if (finalindex < 1)
    {
        printf("Before Grade 1");
    }
    else if (finalindex >= 16)
    {
        printf("Grade 16+");
    }
    else {
    printf("\nGrade %i\n",finalindex);//round((float) index));
        }
};