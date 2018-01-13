#include <stdio.h>
int main()
{
    float num, cel, fahr, kelv;
    char temp;
    printf("Enter temperature: ");
    scanf ("%f %c", &num, &temp);
  switch (temp)
  {
      case 'F':
      {
          if (num <= -459.4)
          {
              printf("Low than absolutely 0");
              break;
          }
          else
          {
              cel = (num - 32)*(5.0/9.0);
              kelv = (num - 32)/(9.0/5.0)+273;
              printf("%.2f F = %.3f C\n%.2f F = %.3f K", num, cel, num, kelv);
              break;
          }
      }
      case 'C':
      {
          if (num <= -273.15)
          {
              printf("Low than absolutely 0");
              break;
          }
          else
          {
            kelv = num + 273;
            fahr = num * (9.0/5.0)+32;
            printf("%.2f C = %.3f F\n%.2f C = %.3f K", num, fahr, num, kelv);
            break;
          }
      }
      case 'K':
      {
          if (num <= 0.15)
          {
              printf("Low than absolutely 0");
              break;
          }
          else
        {
            cel = num - 273;
            fahr = (num - 273)*(9.0/5.0)+32;
            printf("%.2f K = %.3f C\n%.2f K = %.3f F", num, cel, num, fahr);
            break;
        }
      }
      default:
        {
        printf("Incorrect input maybe you mean C, F or K?");
                      printf("If input value is F:\n");
          if (num <= -459.4)
            printf("Low than 0\n\n");
          else
          {
            cel = (num - 32)*(5.0/9.0);
            kelv = (num - 32)/(9.0/5.0)+273;
            printf("%.2f F = %.3f C\n%.2f F = %.3f K\n\n", num, cel, num, kelv);
          }
          printf("If input value is C:\n");
          if (num <= -273.15)
            printf ("Low than 0\n\n");
          else
          {
            kelv = num + 273;
            fahr = num * (9.0/5.0)+32;
            printf("%.2f C = %.3f F\n%.2f C = %.3f K\n\n", num, fahr, num, kelv);
          }
          printf("If input value is K:\n");
          if (num <= 0.15)
            printf("Low than 0\n\n");
          else
          {
            cel = num - 273;
            fahr = (num - 273)*(9.0/5.0)+32;
            printf("%.2f K = %.3f C\n%.2f K = %.3f F\n", num, cel, num, fahr);
          }
        break;
        }
    }
    return 0;
}
