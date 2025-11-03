class Logic 
{
    void productOfDigit(int num) 
    {
           int product = 1;
           int digit;

           while(num > 0)
           {
            digit = num % 10;
            product = product * digit;
            num = num / 10;
           }
           System.err.println("Product of digits = " + product);
    }
}

class Program1
{
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.productOfDigit(234);
    }
}