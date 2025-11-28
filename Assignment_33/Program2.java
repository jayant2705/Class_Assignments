import java.util.*;

class ChkAlpha
{
    public boolean isAlphabet(char ch)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            return true;
        }
        else
        {
            return false;
        }   
    }     
}
public class Program2
{
    public static void main(String[] args)
    {
    
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Character:");
        char ch = sobj.next().charAt(0);

        ChkAlpha cobj = new ChkAlpha();
        boolean bRet = cobj.isAlphabet(ch);

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
