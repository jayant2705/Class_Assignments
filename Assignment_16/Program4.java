class Logic
{
    void reverseNumber(int num)
    {
        int rev = 0;
         while(num !=0)
         {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
         }
         System.out.println("Reverse Number: "+rev);
    }
}



public class Program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(7865);
    }    
}
