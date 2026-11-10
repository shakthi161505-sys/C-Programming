#include<stdio.h>
int main()
{
   FILE*fp;
   int ch;
   fp=fopen("feedback.txt","w");
   if(fp==NULL)
   {
     printf("File cannot open");
     return 0;
    }
    fprintf(fp,"Feedback on c programming:\n");
    fprintf(fp,"1.C is slightly tough compared to python.\n");
    fprintf(fp,"2.Since it is basic computer language it is useful for beginners.\n");
    fprintf(fp,"3.It is useful for logical thinking and problem solving.\n");
    fprintf(fp,"4.I like to solve problem codes in c.\n");
    fprintf(fp,"5.But i took 20minutes to solve a easy level problem.\n");
    fclose(fp);

    fp=fopen("feedback.txt","a");
    if (fp==NULL)
    {
     printf("File cannot open ");
     return 0;
     }
     fprintf(fp,"Feedback about c programming trainer:\n");
     fprintf(fp,"1.The trainer explains clearly and slowly.\n");
     fprintf(fp,"2.The trainer teaches with examples.\n");
     fprintf(fp,"3.The trainer is very helpful.\n");
     fprintf(fp,"4.The trainer clears doubt.\n");
     fprintf(fp,"5.The trainer takes time patiently to explain things to us.\n");
     fclose(fp);

     fp=fopen("feedback.txt","r");
     if (fp==NULL)
     {
       printf("File cannot open");
       return 0;
      }
      printf("feedback details:\n");
      while((ch=fgetc(fp))!=EOF)
      {
      printf("%c",ch);
      }
      fclose(fp);
      return 0;
}
