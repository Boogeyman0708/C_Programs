#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int *b, int **c, int s1, int s2, int s3);

void display(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
}

int main()
{
    int *a1, *a2, *a3;
    int s1, s2, s3;
    int i;

    printf("Enter Size of Array 1\n");
    scanf("%d", &s1);
    printf("Enter Size of Array 2\n");
    scanf("%d", &s2);

    s3 = s1 + s2;

    a1 = (int *)calloc(s1, sizeof(int));
    a2 = (int *)calloc(s2, sizeof(int));
    a3 = (int *)calloc(s3, sizeof(int));
    printf("Enter Elements in Array 1 in Sorted Manner...\n");
    for (i = 0; i < s1; i++)
    {
        scanf("%d", (a1 + i));
    }
    printf("Enter Elements in Array 2 in Sorted Manner...\n");
    for (i = 0; i < s2; i++)
    {
        scanf("%d", (a2 + i));
    }
    printf("Array 1 is... \n");
    display(a1, s1);
    printf("Array 2 is... \n");
    display(a2, s2);
    printf("Merging Start...\n");
    merge(a1, a2, &a3, s1, s2, s3);
    printf("Array 3 is... \n");
    display(a3, s3);
    free(a1);
    free(a2);
    free(a3);
    return 0;
}

void merge(int *a, int *b, int **c, int s1, int s2, int s3)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < s1 && j < s2)
    {
        if (*(a + i) < *(b + j))
        {
            *(*c + k) = *(a + i);
            k++;
            i++;
        }
        else
        {
            *(*c + k) = *(b + j);
            k++;
            j++;
        }
    }
    while (i < s1)
    {
        *(*c + k) = *(a + i);
        k++;
        i++;
    }
    while (j < s2)
    {
        *(*c + k) = *(b + j);
        k++;
        j++;
    }
}
