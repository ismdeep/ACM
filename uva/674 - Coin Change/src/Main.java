import java.io.FileWriter;
import java.io.IOException;


public class Main
{
	public static int coin[] = {50, 25, 10, 5, 1};
	
	public static int countor;
	
	public static void CountSolutions (int value, int step)
	{
		if (4 == step)
		{
			countor++;
		}
		else
		{
			for (int i = 0; i <= (value / Main.coin[step]); i++)
			{
				CountSolutions(value - Main.coin[step] * i, step + 1);
			}
		}
	}
	
	public static void main(String[] args) throws IOException
	{
		FileWriter fileWriter = new FileWriter("out.txt");

		for (int n = 1; n <= 7489; n += 5)
		{
			countor = 0;
			Main.CountSolutions(n, 0);
			System.out.println(n);
			fileWriter.write(Integer.toString(countor) + ", ");
		}
		fileWriter.close();
	}

}

