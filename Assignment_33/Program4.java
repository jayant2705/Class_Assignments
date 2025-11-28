import java.util.*;

class ChkSmall
{
    public boolean isAlpha(char ch)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            return true;
        }
        else
        {
            return false;
        }   
    }     
}
public class Program4
{
    public static void main(String[] args)
    {
    
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Character:");
        char ch = sobj.next().charAt(0);

        ChkSmall cobj = new ChkSmall();
        boolean bRet = cobj.isAlpha(ch);

        if(bRet)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

    }
}
