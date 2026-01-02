//Find the Factorial of a Number using a for loop

class Logic {
    void findFactorial(int num) {
        
        
        long factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial = factorial * i;
        }
        System.out.println("Factorial of is: " + factorial);
    }
}

class asg3 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.findFactorial(7);
    }
}
