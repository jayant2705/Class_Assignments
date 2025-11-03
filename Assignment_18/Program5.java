class Logic 
{
    void checkSign(int num) 
    {
        // Write logic here
        if(num > 0) {
            System.out.println(num + " is a positive number");
        } else if(num < 0) {
            System.out.println(num + " is a negative number");
        } else {
            System.out.println("The number is zero");
        }
    }
}

class Program5
{
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}