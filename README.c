#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myarray *p, int tsize, int usize)
{
    p->total_size = tsize;
    p->used_size = usize;
    p->ptr = (int *)malloc(tsize * sizeof(int));
}
void showarr(struct myarray *p)
{
    for (int i = 0; i < p->used_size; i++)
    {
        printf("%d\n", (p->ptr)[i]);
    }
}
void setarr(struct myarray *p)
{
    for (int i = 0; i < p->used_size; i++)
    {
        printf("enter the value at the index number %d:", i);
        scanf("%d", &((p->ptr)[i]));
    }
}
int main()
{
    struct myarray marks;
    createarray(&marks, 15, 5);
    setarr(&marks);
    showarr(&marks);
    return 0;
}
