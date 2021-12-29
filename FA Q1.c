//  Dissanayake D.M.I.H
//  CS WE03

//  Question 1


#include <stdio.h>
#include <string.h>

int main ()
{
    char str[1000];
    int len;
    int x,y,z = 0;
    
    printf("Enter String Here:- ");  //Input String

    if(scanf("%[a-z]",str)){         //Scan String entered and check whether string is Uppercase or Lowecase    
          
      len = strlen(str);               //Find length of the string

      
      for (x = 0; x<strlen(str); x++)  //for loop for go through all the characters
          {
              
              for (y = x+1; y < strlen(str); y++) // loop for second character onwards
              {

                  if (str[x] == str[y])       // condition for check two characters
                  {

                      for (z = y; z < strlen(str); z++)   //loop for third character onwards
                          {
                              str[z] = str [z+1];
                          }
                      len--;                           //If a duplicate is found delete it
                  }
                
                  
              }
          }

      printf("\nThe String you entered without duplicate characters : %s \n", str);     //Final Output display

      }
        
    else
    {
        printf("\n !!!!!!!!!!!!!!!!! \n SORRY \n Please enter lowercase characters only \n");
    }
        return 0;
}

  