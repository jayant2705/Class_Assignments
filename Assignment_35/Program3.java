import java.util.*;

class StringX
{
    public static int Difference(String str)
    {
        int icnt1 = 0, icnt2 = 0;
        int i = 0;
        for(i = 0; i<str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'a' && ch  <= 'z')
            {
                icnt1++;
            }
            else if(ch >= 'A' && ch  <= 'Z')
            {
                icnt2++;
            }
        }
        return icnt1 - icnt2;
    }
}
class Program3
{
    public static void main(String[] args) 
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String input = sobj.nextLine();

        StringX xobj = new StringX();

        iRet = xobj.Difference(input);

        System.out.println("Count is :"+iRet);

         
    }
}