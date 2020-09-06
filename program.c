#include <stdio.h>
#include <math.h>


int main()
{   int n,pom=0,pom1=0,i,j;
    printf ("Upisite broj osoba > ");
    scanf ("%d",&n);
    struct Osoba_s 
       {   int mat;
           int god;
       };
    struct Osoba_s os[n];
    for (i=0;i<n;i++)
       {   printf ("  %d. osoba > ",i+1);
           scanf ("%d %d\n",&os[i].mat,&os[i].god);
       }
    for (i=0;i<n;i++)
       {   for (j=0;j<n;j++)
              {   if (os[i].god<os[j].god)
                     {   pom=os[i].god;
                         os[i].god=os[j].god;
                         os[j].god=pom;
                         pom1=os[i].mat;
                         os[i].mat=os[j].mat;
                         os[j].mat=pom1;
                     }
              }
       }
    pom1=0;
    for (i=0;i<n;i++)
       {   for (j=0;j<n;j++)
              {   if (os[i].god==os[j].god && os[i].mat<os[j].mat)
                     {   pom1=os[i].mat;
                         os[i].mat=os[j].mat;
                         os[j].mat=pom1;
                     }
              }
       }
    printf ("%d. godina\n",os[0].god);
    pom=os[0].god;
    for (i=0;i<n;i++)
       {   if (os[i].god==pom)
              {   printf ("   %d\n",os[i].mat);
              }
           else
              {   printf ("%d. godina\n   %d\n",os[i].god,os[i].mat);
                  pom=os[i].god;
              }
       }
    return 0;
}