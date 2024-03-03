#include<stdio.h>

int main()
{
    int subject;
   char  english ,maths, marathi, hindi ;
    
    printf( "\n enter your subject; ");
    
    scanf("%d, &subject");
    printf("\n you have  enterd %d of subject" ,subject);
    
    if(subject=english || maths || marathi || hindi)
    {
        printf("\n you have win 200 rs ");
    }    
          else if(subject==maths)
                  {
                      printf("\n you have win 50 rs");
                  }
          else if(subject==marathi)
                  {
                     printf("\n you have win 45 rs");
                  }
          else if(subject==english)
                  {
                      printf("\n you have win 55 rs");
                  }
          else if(subject==hindi)
                  {
                      printf("\n you have win 65 rs");
                  }
    else
            {
                printf("\n subject not found!\a");        
            }              
    return 0;
}