//Find the Sum of Digits of a Number


class Logic
{
    void sumOfDigits(int num)
    {
        // Write logic here
    int sum = 0;

while(num > 0) {
    int digit = num % 10;  
    sum = sum + digit;    
    num = num / 10;        
}

System.out.println("Sum of digits = " + sum);

    }
}

class asg1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(154);
    }
}