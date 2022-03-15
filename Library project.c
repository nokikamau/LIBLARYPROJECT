#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()

{
    printf("===================================  MENU ASSIGNMENT   ========================================\n");
    printf("------------------------------------------------------------------------------------------\n");


    printf("                                       Mary Njok1        \n");
    printf("------------------------------------------------------------------------------------------\n");

printf("      County Library \n");
printf("      welcome  Mr.Titus.\n");
    printf("                 what would you like to do?\n");

  char firstname[20], lastname[20], record[1] ;
  char  passwowd[25], newpassword[25], cornfirmpassword[25];
  int option = 0;

  while (true)
  {
     printf("1) View user\n");
     printf("2) Add new user\n");
     printf("3) Edit user\n");
     printf("4) Delete user\n");
     printf("5) Change password\n");
     printf("6) Log out\n");
     printf("7) Exit system\n");

     printf("enter your option: ");
     scanf("%d", &option);


     switch (option)
     {
     case 1:
        printf("Here is the list of users : \n");
        printf("               a malcom kamau\n");
        printf("               b kish malcom\n");
        printf("               c mary kamau\n");
        printf("               d kwerrr malcom\n");
        printf("===========================================================================\n");


        break;
     case 2:
        printf("enter your details below \n");
        printf("        Input your firstname: ");
        scanf("%s", firstname);
        printf("        Input your lastname: ");
        scanf("%s", lastname);
        printf("         Succesfully added user %s %s ", firstname, lastname);
        printf("into the database\n");
        printf("===========================================================================\n");
        break;

     case 3:
          printf("select the record to edit \n");
          printf("   a\n");
          printf("   b\n");
          printf("   c\n");
          printf("   d\n");

          printf("        select the record to edit: \n");
          scanf("%s", record);
          printf("        Input your firstname: ");
          scanf("%s", firstname);
          printf("        Input your lastname: ");
          scanf("%s", lastname);
          printf("         Succesfully edited the record to %s %s \n ", firstname, lastname);
          printf("===========================================================================\n");
          break;
     case 4:
          printf("select the record to delete \n");
          printf("   a\n");
          printf("   b\n");
          printf("   c\n");
          printf("   d\n");
          printf("        select the record to delete: \n");
          scanf("%s", record);
        printf("         Succesfully deleted the record  %s   ", record);
        printf("from the database\n");
        printf("===========================================================================\n");
        break;
     case 5:
          printf("change the password below: \n");
          printf("        Input your previous password: ");
          scanf("%s", newpassword);
          printf("        Input your new password: ");
          scanf("%s", cornfirmpassword);
          printf("         Succesfully changed the password to %s  \n ", cornfirmpassword);
          printf("===========================================================================\n");
          break;
     case 6:
         printf("logging out...\n");
         printf("thank you...\n");
   exit(0);

     case 7:
         printf("Exiting the program....\n");
   exit(0);


     }
  }



    return 0;
}
