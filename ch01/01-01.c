#include <stdio.h>

int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n"); //"\n"代表回车，在下一行重新输出
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);
    
    return 0;
}