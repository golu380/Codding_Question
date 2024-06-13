#include <stdio.h>
#include<math.h>
int main()
{
    int id;
    scanf("%d",&id);
    if(id%5000==0)
    {
        if(id/5000==1)
        {
            printf("First Intern [Day %d]\n",id%5000);
        }
        if(id/5000==2)
        {
            printf("Second Intern [Day %d]\n",id%5000);
        }
        if(id/5000==3)
        {
            printf("Third Intern [Day %d]\n",id%5000);
        }
    }
    else
    {
        int x=id%100,root;
        root=(-1+sqrt(1+8*x))/2;
        int idn=id-root*5000;
        idn=idn-root;
        if(idn/5000==1)
        {
            printf("First Intern [Day %d]\n",root+1);
        }
        if(idn/5000==2)
        {
            printf("Second Intern [Day %d]\n",root+1);
        }
        if(idn/5000==3)
        {
            printf("Third Intern [Day %d]\n",root+1);
        }
    }
    return 0;
}