import java.util.*;

class ChkDigits
{
    public boolean isDigits(char ch)
    {
        if(ch >= '0' && ch <= '9')
        {
            return true;
        }
        else
        {
            return false;
        }   
    }     
}
public class Program3
{
    public static void main(String[] args)
    {
    
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Character:");
        char ch = sobj.next().charAt(0);

        ChkDigits cobj = new ChkDigits();
        boolean bRet = cobj.isDigits(ch);

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
