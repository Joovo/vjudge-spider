import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int a=input.nextInt();
		if(input.hasNextInt()) {
			int b=input.nextInt();
			System.out.println(a+b);
		}
	}

}