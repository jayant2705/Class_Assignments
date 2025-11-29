import java.util.*;

class SpecialCharacter
{
    public static boolean ChkSpecial(char ch)
    {
       if(ch=='!' || ch == '@' || ch=='#' ||ch == '$' 
       || ch== '%'|| ch == '^' || ch =='&'||ch =='*')
     {    
        return true;
     }
    else
     {
        return false;
     }
    }
}

class Program4
{
    public static void main(String A[])
    {
        char cValue = '\0';
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Character");
        cValue = sobj.next().charAt(0);

        SpecialCharacter dobj = new SpecialCharacter();

        bRet = dobj.ChkSpecial(cValue);

        if(bRet == true)
        {
            System.out.println("It Is Special Character");
        }
        else
        {
            System.out.println("It Is Not Special Character");
        }
    }
}