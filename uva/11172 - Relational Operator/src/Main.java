import java.util.Scanner;


public class Main
{

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		int t;
		t = scanner.nextInt();
		for (int case_index = 1; case_index <= t; case_index++)
		{
			long a, b;
			a = scanner.nextLong();
			b = scanner.nextLong();
			if (a > b)
			{
				System.out.println(">");
			}
			else if (a == b)
			{
				System.out.println("=");
			}
			else
			{
				System.out.println("<");
			}
		}
	}

}
