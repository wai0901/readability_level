#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void){

    string text = get_string("Text: ");

    float sentances = 0;
    float words = 0;
    float letters = 0;

    for (int i = 0; i <= strlen(text); i++){
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122)){
            letters++;
        }
        if (text[i] == 46 || text[i] == 33 || text[i] == 63){
            sentances++;
        }
        if (text[i] == 32){
            words++;
        }
    }

    float averageW = 100 / ((float)words + 1);
    float L = averageW * (float)letters;
    float S = averageW * (float)sentances;
    int indexN = round(0.0588 * L - 0.296 * S -15.8);

    if (indexN <= 1){
        printf("Before Grade 1\n");
    }
    else if (indexN > 1 && indexN < 16){
        printf("Grade %i\n", indexN);
    }
    else {
        printf("Grade 16+\n");
    }
}