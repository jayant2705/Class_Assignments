import java.util.*;

class DisplayDigit
{
    public void DisplayDigits(String str)
    {
        int i = 0;
        for(i = 0; i< str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch  >= '0' && ch <= '9')
            {
                 System.out.println(ch);
            }
        }
         
    }
}
class Program4
{
     public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String str = sobj.nextLine();

        DisplayDigit obj = new DisplayDigit();
        obj.DisplayDigits(str);
    }
}