
import java.util.*;

class Count
{
    public int CountSpace(String str)
    {
        int iCnt = 0;
        int i = 0;
        for(i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(str.charAt(i) == ' ')
            {
                iCnt++;
            }
        }
         return iCnt;
    }
}
class Program5
{
     public static void main(String[] args)
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String str = sobj.nextLine();

        Count cobj = new Count();

        iRet = cobj.CountSpace(str);

        System.out.println("Space Is : " + iRet);
    }
}
