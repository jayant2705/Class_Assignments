class Logic {
    void sumEvenOddDigits(int num) {
        // Write logic here
        int evenSum = 0;
        int oddSum = 0;
        int number = Math.abs(num); // Handle negative numbers
        
        while(number > 0) {
            int digit = number % 10; // Extract last digit
            
            if(digit % 2 == 0) {
                evenSum += digit; // Add to even sum
            } else {
                oddSum += digit; // Add to odd sum
            }
            
            number = number / 10; // Remove last digit
        }
        
        System.out.println("Number: " + num);
        System.out.println("Sum of even digits: " + evenSum);
        System.out.println("Sum of odd digits: " + oddSum);
    }
    
    void checkNumber(int num) {
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

class Program4 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
        System.out.println(); // Add space between outputs
        obj.checkNumber(10);
        obj.checkNumber(-5);
        obj.checkNumber(0);
    }
}