#include <stdio.h>
#include <stdlib.h>
#define cant 5

int pts[cant]= {1,0,3,3,1};
int dg[cant]= {8,0,5,3,4};
int auxPts, auxDg, i, j;

int main()
{
    for(i=0; i<cant-1; i++)
    {
        for(j=i+1; j<cant;j++)
        {

            if(pts[i]< pts[j])
            {
                auxPts= pts[i];
                pts[i]= pts[j];
                pts[j]= auxPts;

                auxDg= dg[i];
                dg[i]= dg[j];
                dg[j]= auxDg;
            }
            else
            {
                if(pts[i]==pts[i])
                {
                    if(dg[i]<dg[i])
                    {
                        auxDg= dg[i];
                        dg[i]= dg[j];
                        dg[j]= auxDg;
                    }
                }
            }
        }
    }

    for(i=0;i<cant;i++)
    {
        printf("%d %d \n",pts[i],dg[i]);
    }

    return 0;

}
