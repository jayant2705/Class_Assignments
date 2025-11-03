class Logic
{
    void findFactorial(int num)
    {
        int fact = 1;
        for(int i = 1; i<=num; i++)
        {
            fact = fact * i;
        }
        System.out.println("factorial of " + num  + " is : " +fact);
    }
}



public class Program3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }    
}
