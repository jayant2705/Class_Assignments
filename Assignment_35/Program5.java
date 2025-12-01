import java.util.*;

class Reverse
{
    public static String ReverseString(String str)
    {
        char[] arr = str.toCharArray();
         int i = 0, j = arr.length - 1;
         char temp;

        for(; i < j;  i++ , j--);
        {
     
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        return new String(arr);
    }
}
class Program5
{
    public static void main(String[] args) 
    {
         

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        Reverse robj = new Reverse();

        String result = robj.ReverseString(str);

        System.out.println("Reverse String is :" + result);

         
    }
}