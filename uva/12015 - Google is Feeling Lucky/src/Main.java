import java.util.Scanner;


public class Main
{
	public class Pair
	{
		public String valueString;
		public int relevance;
		
		public Pair()
		{
			this.valueString = null;
			this.relevance = 0;
		}
		
	}
	
	public static void main(String[] args)
	{
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		int t;
		t = scanner.nextInt();
		
		for (int case_index = 1; case_index <= t; case_index++)
		{
			System.out.println("Case #" + case_index + ":");
			Main.Pair web_page[] = new Main.Pair[10];
			
			for (int i = 0; i < 10; i++)
			{
				web_page[i] = new Main().new Pair();
			}
			
			for (int i = 0; i < 10; i++)
			{
				web_page[i].valueString = scanner.next();
				web_page[i].relevance = scanner.nextInt();
			}
			
			// TODO get the max_value
			int max_value;
			max_value = web_page[0].relevance;
			for (int i = 0; i < 10; i++)
			{
				if (web_page[i].relevance > max_value)
				{
					max_value = web_page[i].relevance;
				}
			}
			
			// TODO output result
			for (int i = 0; i < 10; i++)
			{
				if (web_page[i].relevance == max_value)
				{
					System.out.println(web_page[i].valueString);
				}
			}
			
			
		}
	}
}