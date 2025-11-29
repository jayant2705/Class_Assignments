import java.util.*;

class DisplayCharacter
{
    public static void DisplayCapitalSmall(char ch)
 {
         if(ch >= 'A' && ch <='Z')
    {
        System.out.printf("%c",ch + 32);
    }
    else if(ch >= 'a' && ch <='z')
    {
        System.out.printf("%c",ch - 32);
    }
    else
    {
        System.out.printf("%c",ch);
    }

  }
}

class Program2
{
    public static void main(String A[])
    {
        char cValue = '\0';
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Character");
        cValue = sobj.next().charAt(0);

        DisplayCharacter dobj = new  DisplayCharacter();
        dobj. DisplayCapitalSmall(cValue);
    }
}