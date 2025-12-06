
import java.util.*;

class strlwrx
{
    public void strlwrx (String str)
    {
         String result = str.toLowerCase();
         System.out.println("Count is :" + result);
    }
}
class Program1
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        strlwrx xobj = new strlwrx();
        xobj.strlwrx(str);
    }
}
