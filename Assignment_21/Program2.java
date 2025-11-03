class Logic 
{
    void countEvenOddRange(int n) 
    {
            int evenCount = 0, oddCount = 0;
            for(int i = 1; i<= n; i++)
            {
                if(i % 2 == 0)
                evenCount++;
                else
                oddCount++;
            }
           System.err.println("Even numbers between 1 and " + n + " =" + evenCount);
           System.err.println("odd numbers between 1 and " + n + " =" + evenCount);
    }
 
}

class Program2
{
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}