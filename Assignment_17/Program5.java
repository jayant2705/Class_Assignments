class Logic
{
    void printTable(int num)
    {
         System.out.println("multiplication table of " + num + ":");
         
         for(int i = 1; i<= 10; i++)
         {
            int result = num * i;
            System.out.println(num + "x"+ i+"="+ result);
         }
    }
}



public class Program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }    
}
