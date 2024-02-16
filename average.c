#include <stdio.h>

int main()
{
    double A,B,C,D,X,Y,Z;

    scanf("%lf %lf %lf %lf",&A,&B,&C,&D);
    X=(A*2+B*3+C*4+D*1)/(2+3+4+1);

     printf("Media: %.1lf\n",X);
      if(X>7.0){
         printf("Aluno aprovado.\n");
      }

      else if(X>=5.0){
         printf("Aluno em exame.\n");
         scanf("%lf",&Y);
         printf("Nota do exame: %.1lf\n",Y);
         Z=X+Y;
         Z=Z/2.0;
         if(Z>=5.0)
         printf("Aluno aprovado.\n");
         else{
         printf("Aluno reprovado.\n");
         }
         printf("Media final: %.1lf\n",Z);
      }
      else{
         printf("Aluno reprovado.\n");
      }
    return 0;
}
