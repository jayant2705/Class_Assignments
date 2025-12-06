import java.util.*;
class CharacterCheck
{
    public boolean chkChar(String str , char ch)
    {
        int i = 0;
        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ch)
            {
                return true;
            }
        }
         return false;
    }
}
class Program1
{
     public static void main(String[] args) 
     {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter string:");
        String str = sc.nextLine();

        System.out.println("Enter character:");
        char ch = sc.next().charAt(0);

        CharacterCheck obj = new CharacterCheck();

        boolean result = obj.chkChar(str, ch);

        if(result == true)
        {
            System.out.println("TRUE");
        } 
        else
        {
            System.out.println("FALSE");
        }
    }
}