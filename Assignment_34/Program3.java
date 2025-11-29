import java.util.*;

class Display
{
    public static void DisplayAllCharacter(char ch)
    {
    int icnt = 0;
    if(ch >= 'A' && ch <='Z')
    {
        
        for(icnt = ch; icnt <= 'Z'; icnt++)
        {
            System.out.printf("%c\n",icnt);
        }
    }
        else if(ch >= 'a' && ch <='z') 
        {
            for(icnt = ch; icnt >= 'a'; icnt--)
            {
             System.out.printf("%c\n",icnt);   
            }
        }
    }
}

class Program3
{
    public static void main(String A[])
    {
        char cValue = '\0';
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Character");
        cValue = sobj.next().charAt(0);

        Display dobj = new  Display();
        dobj.DisplayAllCharacter(cValue);
    }
}