class Logic
{
    void sumOfDigits(int num)
    {
        int sum = 0;
        int temp = num;
         while(temp !=0)
         {
             int digit = temp % 10;
             sum = sum + digit;
             temp = temp / 10;
         }
         System.out.println("sum of digits of: " + num +" = " + sum);
    }
}



public class Program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits( 1234);
    }    
}
