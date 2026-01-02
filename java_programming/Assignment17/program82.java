//Check Whether a Number is a Palindrome or Not


class Logic
{
    void checkPalindrome(int num)
    {
        int original=num;
        int reverse =0;

        while (num>0)
        {
            int digit = num / 10 ;
            reverse = reverse * 10 + digit;
            num = num % 10;
        }
        
        if(original == reverse )
        {
            System.out.println("The number is palindrome number");
        }

        else 
        {
            System.out.println("The number is not a  palindrome number");

        }
    }
}

class asg2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}