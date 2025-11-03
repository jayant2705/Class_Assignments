class Logic 
{
    void printDivisibleBy2and3(int n) 
    {
        System.out.println("numbers between 1 and "+ n +"divisible by both 2 and 3 are: ");
        for(int i = 1; i<= n; i++)
        {
            if(i % 2 ==0 && i % 3 == 0)
            {
                System.err.println(i +" ");
            }
        }
    }
 
}

class Program5
{
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}