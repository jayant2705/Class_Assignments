class Logic
{
    void printOddNumbers(int n)
    {
         for(int i = 1; i<= n; i = i + 2)
         {
                System.out.println(i +" ");
         } 
          System.out.println( );
    }
    
}
public class Program3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }    
}
