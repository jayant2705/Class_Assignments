import java.util.*;

class ChkAlpha
{
    public boolean isAlphabet(char ch)
    {
        if((ch >= 'A' && ch <= 'Z') ||(ch >= 'a' && ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }   
    }     
}
public class Program1
{
    public static void main(String[] args)
    {
    
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Character : \n");
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
