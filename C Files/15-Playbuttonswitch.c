#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(){
    /*
    int a;

    printf("\nPlease enter the current subscribers Number: ");
    scanf("%d", &a);

    switch(a/10000){
        case 0:
        printf("\nyou are %d subscribers away from Bronze Play Button.", 10000-a);
        break;

        case 1:
        printf("\nyou are %d subscribers away from Silver Play Button.", 100000-a);
        break;
       
        default:
        printf("\nyou are the owner of Gold Play button.");
    }
    */


   int a;
   char name[20];
   char rank;

   printf("Please Enter your Profile name: ");
   fgets(name, 20, stdin);
   
   

   printf("Please enter the first letter of the Current rank: ");
   scanf("%c", &rank);

   rank = toupper (rank);
   
   switch(rank){
    case 'B':
    printf("Please enter the current battle points (1000-9999): ");
    scanf("%d", &a);

    if(a==1000){
        printf("\nCongratulation! Now Your Rank journey has Begun.");
    }
    else if(a>1000 && a<10000){
        printf("Collect %d points to go to the Next rank.");
    }
    else{
        printf(":Error!");
    }
    break;

    case 'S':
    printf("Please enter the current battle points (10000-19999): ");
    scanf("%d", &a);
    if(a==10000){
        printf("\nCongratulation! You, '%s' are now a Sliver rank Challenger.", name);
    }
    else if(a>10000 && a<20000){
        printf("\n%d points to go!\nA Bigger Stage and stronger Foes await your arrival");
    }
    else{
        printf(":Error!");
    }
    break;
    case 'L':
    printf("Please enter the current battle points (100000-499999): ");
    scanf("%d", &a);
    if(a==100000){
        printf("\nCongratulation! You are now the Legendary Rank Warrior.");
    }
    else if(a>100000 && a<500000){
        printf("\n%d points to go!\nThe World of PROS awaits your arrival");
    }
    else{
        printf("\nERROR!");
    }
    break;
    case 'M':
    printf("Please enter the current battle points (500000-999999): ");
    scanf("%d", &a);
    if(a==500000){
        printf("\n %s \nWelcome to the world of PROS!", name);
        printf("\n %s \nNow You are in Mythical Rank!", name);
    }
    else if(a>100000 && a<900000){
        printf("\nYou need %d battle points to challenge the Gods.", 1000000-a);
    }
    else if(a>900000 && a<=999999){
        printf("\nOnly %d points to go! Reach the top, become a GOD and challenge the GODS!",1000000-a);
    }
    break;
    case 'X':
    printf("Please enter the current battle points (above 1000000): ");
    scanf("%d", &a);
    if(a >= 1000000){
    printf("\nDear %s.\nOpen the Door of Heaven and ascend to GODHOOD!", name);
    printf("\nAnnouncement to All Mortals and Gods!\n%s has reached Godhood!", name);
    printf("\nNOW LET THE BATTLE OF GODS BEGIN!");
   }
   else{
    printf("\nERROR!");
   }
    break;
    default:
    printf("Assign the correct Letter.");
   }
        

return 0;
}