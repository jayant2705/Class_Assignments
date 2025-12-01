import java.util.*;

class StringX
{
    public static int CountCapital(String str)
    {
        int icnt = 0;
        int i = 0;
        for(i = 0; i<str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'A' && ch  <= 'Z')
            {
                icnt++;
            }
        }
        return icnt;
    }
}
class Program1
{
    public static void main(String[] args) 
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String input = sobj.nextLine();

        StringX xobj = new StringX();

        iRet = xobj.CountCapital(input);

        System.out.println("Count is :"+iRet);

         
    }
}