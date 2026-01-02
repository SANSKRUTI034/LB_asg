//Reverse a Number

class Logic {
    void reverseNumber(int num) {
        
        int reversed = 0;
        int original = num;
        
        if (num < 0) {
            num = -num; 
        }
        
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        
        
        if (original < 0) {
            reversed = -reversed;
        }
        
        System.out.println("Reversed number of " + original + " is: " + reversed);
    }
}

class asg4 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}