class Logic
{
    void CheckPrime(int num)
    {
        boolean isPrime = true;

        if(num <= 1)
        {
            isPrime = false;
        }
        else
        {
            for(int i =2; i <= num / 2; i++)
            {
                if(num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if(isPrime)
                System.out.println(num + " is a prime number");
            else
                System.out.println(num + " is not a prime number");
    }
}



public class Program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPrime(11);
    }    
}
