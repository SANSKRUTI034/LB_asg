//Calculate Sum of First N Natural Numbers

class Logic {
    void calculateSum(int n) 
    {
        
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        System.out.println("Sum of first " + n + " natural numbers is: " + sum);
    }
}

class asg1 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.calculateSum(5); 
    }
}