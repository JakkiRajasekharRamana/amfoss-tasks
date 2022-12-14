#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    
    char a[200];
    
    printf("Sentence:");
    scanf("%[^\n]s",&a);
    
    int sentences=0;
    int words=1;
    int letters=0;
    
    for(int i=0;i<strlen(a);i++)
    {
        if(isalpha(a[i]))
        {
            letters++;
        }
    }
    for(int i=0;i<strlen(a);i++)
    {
        if(isspace(a[i]))
        {
            words++;
        }
    }
    for(int i=0;i < strlen(a);i++)
    {
        if(a[i]=='.' || a[i]=='!' || a[i]=='?')
        {
            sentences++;
        }
    }
    
    float L= (float) letters/words *100;
    float S= (float) sentences/words *100;
    
    int index = 0.0588 * L - 0.296 * S - 15.8;
    
    if(index<1)
    {
        printf("Grade is below 1");
    }
    
    else if(index>16)
    {
        printf("Grade is above 16");
    }
    else
    {
        printf("Grade is %i",index);
    }
}

