//Check if a Given Number is Even or Odd

class Logic {
    void checkEvenOdd(int num) {
        
        if (num % 2 == 0) {
            System.out.println("It is even number:" +num);
        } else {
            System.out.println("It is odd number: " +num);
        }
    }
}

class asg2 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);
    }
}