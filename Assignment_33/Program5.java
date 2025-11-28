import java.util.*;

class DisplaySchedule
{
    public void ShowTime(char chDiv)
    {
         chDiv = Character.toUpperCase(chDiv);

        if(chDiv == 'A')
        {
            System.out.println("Your Exam At 7 AM :\n");
        }
        else if(chDiv == 'B')
        {
            System.out.println("Your Exam At 8.30 AM :\n");
        }
        else if(chDiv == 'C')
        {
            System.out.println("Your Exam At 9.20 AM :\n");
        }
        else if(chDiv == 'D')
        {
            System.out.println("Your Exam At 10.30 AM :\n");
        }
        else
        {
            System.out.println("Invalid Division :\n");
        }
        
    }   
}  
public class Program5
{
    public static void main(String[] args)
    {
    
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Your Division:");
        char ch = sobj.next().charAt(0);

        DisplaySchedule dobj = new DisplaySchedule();
        dobj.ShowTime(ch);

    }
}
