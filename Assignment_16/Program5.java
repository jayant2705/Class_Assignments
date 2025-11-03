class Logic
{
    void countDigits(int num)
    {
        int count = 0;
         while(num !=0)
         {
             num = num / 10;
             count++;
         }
         System.out.println("Number of digits: " + count);
    }
}



public class Program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countDigits(98765);
    }    
}
