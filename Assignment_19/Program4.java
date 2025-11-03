class Logic 
{
    void printDigits(int num) 
    {
         int rev = 0,digit;

         while(num > 0)
         {
            digit = num  % 10;
            rev = rev * 10 + digit;
            num = num / 10;
         }
         while(rev > 0)
         {
            digit = rev % 10;
            System.out.println(digit);
            rev = rev / 10;
         }
    }
}

class Program4
{
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}