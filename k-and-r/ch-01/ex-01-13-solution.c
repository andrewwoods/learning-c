#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0
#define MAX_LENGTH 20
#define BAR_CHARACTER ":"

/* count digits, white space, and others */
main()
{
    int b, b_max, c, i, nwhite, nother;
    int status = OUT_WORD;
    int lengths[MAX_LENGTH];
    int current_length = 0;

    for (i = 0; i < MAX_LENGTH; i++)
    {
        lengths[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {

        if (c >= 'a' && c <= 'z')
        {
            status = IN_WORD;
            ++current_length;
        }

        if (status == OUT_WORD)
        {
            ++lengths[current_length];
            current_length = 0;
        }

        status = OUT_WORD;
    }

    /* 
        Print the chart
    
        The chart starts at 1 because the index represents word lengths,
        and a word must have at least 1 letter. 
     */
    for (i = 1; i < MAX_LENGTH; i++)
    {
        printf("%2d %2d ", i, lengths[i]);

        /* Create the bar */
        for (b = 1, b_max = lengths[i]; b <= b_max; b++)
        {
            printf(BAR_CHARACTER);
        }
        printf("\n");
    }
    printf("\n");
}