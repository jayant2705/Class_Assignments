import java.util.*;

class struprx
{
    public void struprx (String str)
    {
         String result = str.toUpperCase();
         System.out.println("Count is :" + result);
    }
}
class Program2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        struprx xobj = new struprx();
        xobj.struprx(str);
    }
}