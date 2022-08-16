/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>


int main()
{
    float e1,e2,emf,G,m1,m2,w,z;
    int n,ch,q;
   
    printf("Enter 1 for calculating EMF,2 for gibbs free energy and 3 for weight of substance  \n");
    scanf("%d",&ch);
   
   
    if(ch==1)
   
   {
        printf("Enter n,m1 and m2: \n");
        scanf("%d%f%f",&n,&m1,&m2);
   
        printf("Enter e1 and e2: \n");
        scanf("%f%f",&e1,&e2);
        if(e1>e2)
        {
            emf=(e1-e2)+((0.0592/n)*log(m1/m2));
            printf("Use electrode 1 as cathode \n Use electrode 2 as anode \n");
            
        }
        else if(e2>e1)
        {
          emf=(e2-e1)+((0.0592/n)*log(m2/m1));  
          printf("Use electrode 2 as cathode \n Use electrode 1 as anode \n");
        }
        else{
            printf("Invalid entry");
        }
       
    }
   
    if(ch==2)
    {
         printf("Enter n,m1 and m2: \n");
                  scanf("%d%f%f",&n,&m1,&m2);
   
        printf("Enter e1 and e2: \n");
        scanf("%f%f",&e1,&e2);
   
       
        if(e1>e2)
        {
            emf=(e1-e2)+((0.0592/n)*log(m1/m2));
        }
        else if(e2>e1)
        {
          emf=(e2-e1)+((0.0592/n)*log(m2/m1));  
        }
       
        G=-n*emf*96500;
         
         if(G>0)
         {
             printf("The reaction is Non-Spontaneous \n");
         }
          else if(G<0)
         {
             printf("The reaction is Spontaneous \n");
         }
         else
         {
             printf("The reaction is in Equilibrium \n");
         }
    }
   
    if(ch==3)
   
    {
        printf("Enter z and charge");
        scanf("%f%d",&z,&q);
        w=z*q;
       
    }
   
    switch(ch)
    {
        case 1:  printf("the emf is :%f ",emf);
                 
        break;
        case 2:printf("The gibbs free energy is: %f",G);
        break;
        case 3:  printf("The mass deposited on electrode is: %f",w);
        break;
   
    }
   
   
    return 0;
}

