#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int N, sum;
    int *m;

    printf("Enter nuber of your marks: ");
    scanf("%d", &N);

    m = (int*) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        printf("m[%d] = ", i);
        scanf("%d", &m[i]);
    }

    for (int i = 0; i < N; i++)
    sum += m[i];

    float GPA = (float)sum / (float)N;
    printf("GPA = %1.2f\n", GPA);

    if (GPA < 4.6) 
        printf("Your GPA < 4.6\n");
    else
        printf("Your GPA is enough to go to university\n");
    
    free(m);

    return 0;
}