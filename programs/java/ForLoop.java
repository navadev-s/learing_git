import java.util.Scanner;
public class ForLoop{
	public static void main(String a[]){
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the number : ");
		int n=s.nextInt();
		int sum=0;
		for(int i=0;i<n;i++){
			sum=sum+i;
		}
		System.out.println("Sum="+sum);
	}
}
		
