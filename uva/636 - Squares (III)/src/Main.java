import java.util.Scanner;


public class Main
{
	
	public static final boolean judge_is_square (int value)
	{
		boolean flag = false;
		int tmp = (int)Math.sqrt((double)(value) + 0.5);
			if (value == (tmp * tmp))
			{
				flag = true;
			}
		
		return flag;
	}
	
	public class DigitalSet 
	{
		public int arr[];
		public int length;
		
		public DigitalSet ()
		{
			this.arr = new int[100];
		}
		
		public int get_max_digital ()
		{
			int max_digital = arr[0];
			for (int i = 1; i < this.length; i++)
			{
				if (this.arr[i] > max_digital)
				{
					max_digital = this.arr[i];
				}
			}
			return max_digital;
		}
		
		public int cal_by_base(int base_value)
		{
			int base = 1;
			int ans = 0;
			for (int i = 0; i < this.length; i++)
			{
				ans += (this.arr[i] * base);
				base *= base_value;
			}
			//System.out.println(base_value + " -> " + ans);
			return ans;
		}
		
		
	}

	public static void main(String[] args)
	{
		//System.out.println("123");
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		String str = null;
		str = scanner.next();
		
		while ('0' != str.charAt(0))
		{
			Main.DigitalSet digitalSet = new Main().new DigitalSet();
			digitalSet.length = str.length();
			
			for (int i = 0; i < str.length(); i++)
			{
				digitalSet.arr[str.length() - i - 1] = (int)(str.charAt(i) - '0');
			}
			
			boolean found = false;
			for (int bbase = digitalSet.get_max_digital() + 1; !found; bbase++)
			{
				if (Main.judge_is_square(digitalSet.cal_by_base(bbase)))
				{
					found = true;
					System.out.println(bbase);
				}
			}
			
			str = scanner.next();
		}
		
	}

}
