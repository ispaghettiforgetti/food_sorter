#include <stdio.h>
#include <string.h>

// function to sort food names alphabetically
void sort(char food[][100], int count)
{
    char temp[100];
    for(int i=0; i<count-1; i++)
    {
        for(int j=0; j<count-i-1; j++)
        {
            if(strcmp(food[j], food[j+1]) > 0)
            {
                // swapping strings
                strcpy(temp, food[j]);
                strcpy(food[j], food[j+1]);
                strcpy(food[j+1], temp);
            }
        }
    }
}

int main()
{
    char food[100][100];
    int n, i;

    printf("Enter number of food items: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter food item %d: ", i+1);
        scanf("%s", food[i]); // input food name (no spaces)
    }

    // calling sorting function
    sort(food, n);

    printf("\nSorted food items:\n");
    for(i=0; i<n; i++)
    {
        printf("%s\n", food[i]);
    }

    return 0;
}

