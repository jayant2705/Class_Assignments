class Logic 
{
    void findSmallestDigit(int num) 
    {
          int smallest = 8;

          while(num > 0)
          {
            int digit = num % 10;

            if(digit < smallest)
            {
                smallest = digit;
            }
            num = num / 10;
          }
          System.err.println("Smallest digit is: " + smallest);
    }
}

class Program5
{
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}