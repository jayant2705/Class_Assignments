class Logic 
{
    void displayFactors(int num) 
    {
            System.err.println("factors of " + num + " are: ");

            for(int i = 1; i<= num; i++)
            {
                if(num % i == 0)
                {
                    System.err.println(i + " ");
                }
            }
    }
 
}

class Program3
{
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}