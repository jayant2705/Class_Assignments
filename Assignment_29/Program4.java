
import java.util.*;
class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0;
        int j = 0;
        
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++) 
                if(i % 2 == 1)
                {
                     System.out.print(j+"\t");    
                }
                else
                {
                    System.out.print( - j + "\t"); 
                }
           System.out.println();
        }
         
       
    } 
}

class Program4
{
    public static void main(String A[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Row of Numbers: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Colums of Numbers: ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}