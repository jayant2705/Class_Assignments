
import java.util.*;
class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0;
        int j = 0;
        int icnt = 0;
        
        for(i = 1; i <= iRow; i++)
        {
            if(i % 2 !=0)
            {
                icnt = 2;
            
            for(j = 1; j <= iCol; j++) 
                {  
                     System.out.printf(icnt+"\t");
                     icnt +=2;     
                }
            }
            else
            {
                icnt = 1;
                for(j = 1;j<= iCol;j++)
                {
                    System.out.printf(icnt+"\t");
                    icnt +=2; 
                }
            }
           System.out.println();
        }
         
    } 
}

class Program2
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