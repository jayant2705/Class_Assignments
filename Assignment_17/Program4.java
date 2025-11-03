class Logic
{
    void findMin(int a, int b, int c)
    {
        int min = a;
         if( b < min)
         {
               min = b;
         } 
         if(c < min)
         {
            min = c;
         }
            System.out.println( "The minimum of"+ a +" ," + b +"," + c +"is: "+min);
          
    }
}



public class Program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMin( 3,7,2);
    }    
}
