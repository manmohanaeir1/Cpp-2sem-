#include <stdio.h>
int main(){
    int i =20, j;
    j = ++i + i++;   // first  i is increase by 1  and  i = 21
                    // then i= 21 + (i= 21++ = 22) = 43
                    // so i is changed 2 times
    printf("%d %d", i,j);
    return 0;
}