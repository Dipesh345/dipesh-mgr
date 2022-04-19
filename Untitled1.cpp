#include <stdio.h>

#include <stdlib.h> 

void 

show_banner()

{??????

  printf("\n*************************************");

  printf("\n*     Author : Amir Shapkota        *");

  printf("\n*************************************"); }?????? void 

menu(

  int *choice

  )

{??????

  printf("\n\n\n********* SIMPLE CALCULATOR *********");

  printf("\n*      1. Addition                  *\n*      2. Subtraction               *\n*      3. Multiply                  *\n*      4. Division                  *\n*      5. Exit                      *");

  printf("\n*************************************");

  printf("\n\nEnter your Choice (1/2/3/4/5): ");

  scanf("%d", choice); }?????? void 

getNumber(

  float *num1,

  float *num2

  )

{??????

    printf("%s", "Enter number 1 : ");

    scanf("%f", num1);

    printf("%s", "Enter number 2 : ");

    scanf("%f", num2);

}?????? float 

calculate(

  int choice, 

  float num1,

  float num2

  )    

{??????

  float answer;

  switch (choice){??????

    case 1:

      getNumber(&num1, &num2);

      answer = num1 + num2;

      break;

    case 2:

      getNumber(&num1, &num2);

      answer = num1 - num2;

      break;

    case 3:

      getNumber(&num1, &num2);

      answer = num1 * num2;

      break;

    case 4:

      getNumber(&num1, &num2);

      answer = num1 / num2;

      break;

    case 5:

      exit(0);

    default:

#ifdef _WIN32

  system("cls")

#else 

  system("clear");

#endif

      printf("%s", "Invalid Choice !");

      menu(&choice);

      calculate(choice, num1, num2);

  }??????

  return answer; }?????? int 

main()

{??????

    int choice;

    float num1, num2;

    char ch = 'y';

    do 

    {??????

      show_banner();

      menu(&choice);

      float answer = calculate(choice, num1, num2);

      printf("%.2f\n", answer);

      printf("%s", "Do you want to run again (y/n) ? ");

      scanf("%s", &ch);

#ifdef _WIN32

  system("cls")

#else 

  system("clear");

#endif

    }??????while(ch != 'n');     return 0; }??????


