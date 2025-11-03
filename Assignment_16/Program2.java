class Logic
{
    void CheckEvenOdd(int num)
    { 
        if(num % 2 == 0)
        {
             System.out.println(num + "is an Even number");
        }
        else
        {
            System.out.println(num + "is an Odd number");
        }
       
      }
         
    }
class Program2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckEvenOdd(7);
  
    }

}