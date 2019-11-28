#include <stdio.h>

#include <string.h>



int main () {

  char password[]="s3cur3hardwar3";

  int a;

   for( a = 10; a < 20; a = a + 1 ){

      char troll[] = "troll";

   }

  char pass[]="s34_p4ssw0rd";

  char input[16+1];

  char flag[]="inctf";

  if (1==2){

     printf("YEAH! The flag is: $flag");

  }

  else{

    printf("||====================================================================||\n");
    printf("||//$//////////////////////////////////////////////////////////////$//||\n");
    printf("||(100)========================|  Locker |========================(100)||\n");
    printf("||//$//        ~         '------========--------'                //$//||\n");
    printf("||<< /        /$/              // ____ //                         / >>||\n");
    printf("||>>|        //L//            // ///..) //              XXXX       |<<||\n");
    printf("||<<|        // //           || <||  >}  ||                        |>>||\n");
    printf("||>>|         /$/            ||  $$ --/  ||          XXXXXXXXX     |<<||\n");
    printf("||<<|     Free to Use        *||  ||_/  //*                        |>>||\n");
    printf("||>>|                         *||/___|_//*                         |<<||\n");
    printf("||<</      Rating: E     ________/ BI0S /_________    XX XXXXX     />>||\n");
    printf("||//$//////////////////////////////////////////////////////////////$//||\n");
    printf("||====================================================================||\n");

  }

  char msg[] = "Congrats, your flag is: format{r3v3rs1ng_ch4ll3ng3_0n3}";

  char flag2[] = "{";

  char shit[] = "%16s";

  char flag3[] = "reversing";

  char msg2[] = "You Failed";

  char flag4[] = "}";

  printf("Control Access\n");

  printf("Enter password:\n");

  scanf("%16s", &input);

  if (strcmp(password,input)==0) {

    printf("You Win\n");

    printf(flag);

    printf(flag2);

    printf(flag);

    printf("_");

    printf(flag3);

    printf("_rul3s");

    printf(flag4);

  } else {

    printf("You Failed\n");

  }

  return(0);

}
