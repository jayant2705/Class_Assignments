class Logic
{
    void primeEvenNumbers(int n)
    {
         for(int i = 1; i<= n; i++)
         {
            if(i % 2 ==0)
            {
                System.out.println(i +" ");
            }
         } 
          System.out.println( );
    }
    
}
public class Program2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.primeEvenNumbers(20);
    }    
}
