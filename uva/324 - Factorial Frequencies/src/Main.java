import java.math.BigInteger;
import java.util.Scanner;


public class Main
{

	public static void main(String[] args)
	{
		//System.out.println("sdf");
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		int n;
		n = scanner.nextInt();
		while (n != 0)
		{
			BigInteger sumBigInteger = new BigInteger("1");
			for (int i = 1; i <= n; i++)
			{
				sumBigInteger = sumBigInteger.multiply(new BigInteger(Integer.toString(i)));
			}
			
			//System.out.println(sumBigInteger.toString());
			System.out.println(n + "! --");
			
			int digital_count[] = new int[10];
			// Init values of digital_count[]
			for (int i = 0; i < 10; i++) {digital_count[i] = 0;}
			
			String sumString = null;
			sumString = sumBigInteger.toString();
			for (int i = 0; i < sumString.length(); i++)
			{
				digital_count[sumString.charAt(i) - '0']++;
			}
			
			for (int i = 0; i < 5;  i++)
			{
				System.out.print("    (" + i + ")     " + digital_count[i]);
			}
			System.out.println();
			for (int i = 5; i < 10; i++)
			{
				System.out.print("    (" + i + ")     " + digital_count[i]);
			}
			System.out.println();
			
			n = scanner.nextInt();
		}
	}

}
