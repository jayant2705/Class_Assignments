 #include<stdio.h>
 
 void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <='z')
    chDiv = chDiv - 32;
    
        switch(chDiv)
        {
        case 'A':
            printf("Your Exam At 7 AM :\n");
            break;
        
        case 'B':
            printf("Your Exam At 8.30 AM :\n");
            break;

        case 'C':
            printf("Your Exam At 9.20 AM :\n");
            break;

        case 'D':
            printf("Your Exam At 10.30 AM :\n");
            break;

        default:
            printf("Invalid Division :\n");
        } 
         
}
int main()
{
     char cValue = '\0';
      
     printf("Enter Your Division :\n");
     scanf("%[^'\n']c",&cValue);

     DisplaySchedule(cValue);
     return 0;
}