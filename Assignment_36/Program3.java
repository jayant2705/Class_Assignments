import java.util.*;

class StrToggle
{
    public void strTogglEx(String str)
    {
        char arr [] = str.toCharArray();

        int i = 0;
        for(i = 0; i< arr.length; i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                arr[i] =(char)(arr[i]+32);
            }
            else if(arr[i] >='a' && arr[i] <= 'z')
            {
                arr[i] = (char)(arr[i] - 32);
            }
        }
         System.out.println(arr);
    }
}
class Program3
{
     public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String str = sobj.nextLine();

        StrToggle obj = new StrToggle();
        obj.strTogglEx(str);
    }
}