package rough;
import java.util.Scanner;
public class guvi1{
	public static void main(String[] args) {
    System.out.println("Enter the no:");
    Scanner s=new Scanner(System.in);
    int a=s.nextInt();
    if(a>0){
        System.out.println("the no: is positive");
    }
        else if(a<0){
            System.out.println("the no: is negative");
        }
        else{
            System.out.println("the no:is zero");
            }
    }
}
