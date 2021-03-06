import java.util.Scanner;


public class Main
{
	
	public static final int CHAR_SET_ARR_SIZE = 52;
	
	public class CharSet
	{
		private int count[] = new int[Main.CHAR_SET_ARR_SIZE];
		
		public CharSet()
		{
			for (int i = 0; i < Main.CHAR_SET_ARR_SIZE; i++)
			{
				this.count[i] = 0;
			}
		}
		
		public void add (char ch)
		{
			if (ch >= 'A' && ch <= 'Z')
			{
				this.count[ch - 'A']++;
			}
			else if (ch >= 'a' && ch <= 'z')
			{
				this.count[ch - 'a' + 26]++;
			}
			else
			{
				// FUCK doing nothing.
			}
		}
		
		public int get_max_count_value ()
		{
			int cur_max_value = this.count[0];
			for (int i = 0; i < Main.CHAR_SET_ARR_SIZE; i++)
			{
				if (this.count[i] > cur_max_value)
				{
					cur_max_value = this.count[i];
				}
			}
			return cur_max_value;
		}
		
		public void show_char_by_count (int count_value)
		{
			for (int i = 0; i < Main.CHAR_SET_ARR_SIZE; i++)
			{
				if (count_value == this.count[i])
				{
					if (i >= 0 && i <= 25)
					{
						System.out.print((char)('A' + i));
					}
					else
					{
						System.out.print((char)('a' + (i - 26)));
					}
				}
			}
			System.out.println(" " + count_value);
		}
		
	}
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		
		String lineString;
		
		while (scanner.hasNext())
		{
			lineString = scanner.nextLine();
			Main.CharSet charSet = new Main().new CharSet();
			for (int i = 0; i < lineString.length(); i++)
			{
				charSet.add(lineString.charAt(i));
			}
			charSet.show_char_by_count(charSet.get_max_count_value());
		}
		
	}

}
