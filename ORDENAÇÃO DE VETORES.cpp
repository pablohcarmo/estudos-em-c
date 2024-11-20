#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,
        b,
        temp,
        idades[10];

        for(a=0;a<9;a++)
            {
            for(b=(a+1);b<10;b++)
                {
                    if(idades[a]>idades[b])
                    {
                        temp = idades[a];
                        idades[a] = idades[b];
                        idades[b] = temp;
                    }
                }
            }
        system("PAUSE");
        return 0;
}
