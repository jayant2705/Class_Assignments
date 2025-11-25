
    import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        if(iRow != iCol)
        {
            System.out.println("Invalid input.");
            System.out.println("Row number and coloumn number should be same.");

            return;
        }
        
        for(i = 1; i <= iRow; i++)
        {
            
            for(j = 1; j <= iCol; j++)
            {
                if(i == j | ((i == 1 | i == iRow) | (j == 1 | j == iCol)))
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("\t");
                }
            }

            System.out.println();
        }
    }
}

public class Program4
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0;
        int iValue2 = 0;

        System.out.print("Enter the number of Rows: \n");
        iValue1 = sobj.nextInt();

        System.out.print("Enter the number of Coloumns: \n");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);
    }
}
