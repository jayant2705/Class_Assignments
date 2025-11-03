class Logic
{
    void CheckPalindrome(int num)
    {
          int originalNum = num;
          int reversedNum = 0;
          int reminder;

          while(num !=0)
          {
            reminder = num % 10;
            reversedNum = reversedNum * 10+ reminder;
            num /= 10;
          }
          if(originalNum == reversedNum)
          {
            System.out.println(originalNum +": is a palindrome");
          }
          else
          {
             System.out.println(originalNum +": is not a palindrome");
          }
    }
}

public class Program2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPalindrome(121);
    }    
}
