
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int icnt = 0;
        for(icnt = 1; icnt <= iNo; icnt++)
        {  
            if((icnt % 2) == 0)
            {
                System.out.print(icnt+"\t");
            }
        
        }
         
        System.out.println();
    } 
}

class Program5
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Frequency: ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}