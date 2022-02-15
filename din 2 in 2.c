#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int nr;
   int index=0;

   printf("Introduceti un nr pentru a numara din 2 in 2, mai mare ca 100 si par:\n");
   scanf("%d",&nr);

    if((nr<100)||(nr%2!=0))
    {
    printf("Nr introdus nu este valid.\n");
    }
    else
    {
    while(index!=nr+1)
    {
    printf("%d ",index);
    index++;
    index++;
    }
    }
    return 0;
}


