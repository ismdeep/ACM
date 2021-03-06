import java.math.BigInteger;
import java.util.Scanner;


public class Main
{
	public class SkewBinary
	{
		private static final int MAXN = 40;
		
		public BigInteger digitalBigInteger[] = new BigInteger[Main.SkewBinary.MAXN];
		
		public void init_digital_big_integer ()
		{
			for (int i = 0; i < Main.SkewBinary.MAXN; i++)
			{
				digitalBigInteger[i] = new BigInteger("1");
			}
			
			for (int i = 1; i < Main.SkewBinary.MAXN; i++)
			{
				digitalBigInteger[i] = digitalBigInteger[i-1].multiply(new BigInteger("2"));
			}
			
			for (int i = 0; i < Main.SkewBinary.MAXN; i++)
			{
				digitalBigInteger[i] = digitalBigInteger[i].add(new BigInteger("-1"));
			}
			
			for (int i = 0; i < Main.SkewBinary.MAXN; i++)
			{
				//System.out.println(i + " --> " + digitalBigInteger[i].toString());
			}
			
		}
		
	}
	
	public static void main (String[] args)
	{
		// TODO 
		Main.SkewBinary preLoadSkewBinary = new Main().new SkewBinary();
		preLoadSkewBinary.init_digital_big_integer();
		
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		
		String skewString = null;
		
		skewString = scanner.next();
		
		while ('0' != skewString.charAt(0))
		{
			BigInteger ansBigInteger = new BigInteger("0");
			
			for (int i = 0; i < skewString.length(); i++)
			{
				ansBigInteger = ansBigInteger.add(
					preLoadSkewBinary.digitalBigInteger[skewString.length() - i]
							.multiply(new BigInteger(Integer.toString( skewString.charAt(i) - '0') ))
						);
			}
			
			System.out.println(ansBigInteger.toString());
			
			skewString = scanner.next();
		}
		
	}
}
