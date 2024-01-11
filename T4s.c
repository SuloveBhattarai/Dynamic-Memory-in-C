/**WAP to store the name of week days and then print all.
**/

#include <stdio.h>
int main()
{
    // Declaring constant name of weeks here WEEKS stores 7 weeks of the day
    const char * WEEKS[] = {"Sunday","Monday", "Tuesday", "Wednesday","Thursday", "Friday", "Saturday"};
    /* Also can be written as*/
    //const char * WEEKS[7] = {"Sunday","Monday", "Tuesday", "Wednesday","Thursday", "Friday", "Saturday"};
    int week;//declaring integer variable named week

    //asking user to enter any number from 1 to 7 
    printf("Enter week number (1-7): ");
    scanf("%d", &week);//user input to enter any number form 1 to 7
	
    if(week > 0 && week < 8)//if condition that starts from more than 0 i.e. 1 and less than 8 i.e. 7
    {
        //displaying week name using array index 
        printf("%s", WEEKS[week-1]);
    }
    else//or
    {
    	//displays if the user enters different number other than number 1-7
        printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}
