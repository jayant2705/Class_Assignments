class Logic
{
    void calculateSum(int n)
    { 
        int sum = 0;

        for(int i = 1;i<=n; i++)
        {
            sum = sum + i;
        }
        System.out.println("sum of first " +n +" natural numbers is: "+ sum);
    }
}
class Program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
  
    }

}