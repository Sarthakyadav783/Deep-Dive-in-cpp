import java.util.Scanner;

public class practice1 {
    public static void main(String[] args) {
       Scanner in =new Scanner(System.in);
       System.out.print("Enter number: ");
       int number=in.nextInt();
       in.close();
        System.out.println(check_palindrome(number));
    }
    static boolean check_palindrome(int num) {
        int rev=0;
        int n=num;

        while (n!=0){
            int last_digit=n%10;
            rev=rev*10+last_digit;
            n=n/10;


        }
        return(rev==num);

         
    }
}

