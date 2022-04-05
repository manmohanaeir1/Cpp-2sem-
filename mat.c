#include<stdio.h>
int main()
{
    char String[20][20] = {{'a', 'b' , 'c', 'd'},
                             {'e','f','g','h'}};
    for ( int i = 0; i <=3; i++)
    {
        for (int j = 0; j<=3; j++)
        {
           printf("%c ",  String[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}