
class ASCIITable
{
    public static void DisplayASCII()
    {
        System.out.println("Dec\tHex\tOct\tChar");
        
        int i = 0;
        for(i = 0; i <= 255; i++)
        {
            char ch = (char) i;
            System.out.printf("%3d\t%02X\t%03o\t%c\n",i,i,i,i);
        }
    }
}

class Program1
{
    public static void main(String A[])
    {
        ASCIITable aobj = new ASCIITable();
        aobj.DisplayASCII();
    }
}