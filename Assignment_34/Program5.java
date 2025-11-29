import java.util.*;

class ASCII
{
    public static void DisplayASCII(char ch)
    {
        int ascii = (int) ch;
        System.out.println("Decimal : "+ ascii);
        System.out.println("Octal : " + Integer.toOctalString(ascii));
        System.out.println("Heaxadecimal : " + Integer.toHexString(ascii));
    }
     
}

class Program5
{
    public static void main(String A[])
    {
        char cValue = '\0';

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Character :");
        cValue = sobj.next().charAt(0);

        ASCII dobj = new ASCII();

        dobj.DisplayASCII(cValue);

         
    }
}