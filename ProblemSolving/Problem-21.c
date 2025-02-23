#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int marks[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &marks[i]);
    }

    int max_marks = marks[0];
    for (int i = 1; i < N; i++)
    {
        if (marks[i] > max_marks)
        {
            max_marks = marks[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", max_marks - marks[i]);
    }
    printf("\n");

    return 0;
}
