import java.util.Scanner;


public class Main
{
	public static boolean is_alphabet (char ch)
	{
		if (
			   (ch >= 'a' && ch <= 'z')
			|| (ch >= 'A' && ch <= 'Z')
		)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public static void main (String[] args)
	{
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		
		while(scanner.hasNext())
		{
			String lineString;
			lineString = scanner.nextLine();
			
			int ans_count = 0;
			boolean flag = false;
			
			for (int i = 0; i < lineString.length(); i++)
			{
				if (Main.is_alphabet(lineString.charAt(i)))
				{
					if (flag == false)
					{
						ans_count++;
						flag = true;
					}
					else
					{
						// FUCK doing nothing.
					}
				}
				else
				{
					flag = false;
				}
			}
			
			System.out.println(ans_count);
			
		}
		
	}
}
