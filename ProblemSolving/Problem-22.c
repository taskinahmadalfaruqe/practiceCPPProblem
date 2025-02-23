#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int even_count = 0, odd_count = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    // Output the results
    printf("%d %d\n", even_count, odd_count);

    return 0;
}
