import java.util.Scanner;


public class Main
{
	public static final int MAX_SIZE = 20000;
	
	public class Skyline
	{
		private int height_arr[] = new int[Main.MAX_SIZE];
		private int leftLeft, rightRight;
		
		public Skyline ()
		{
			// FUCK doing nothing.
			this.leftLeft = -1;
			this.rightRight = -1;
		}
		
		public void insert_building (int left_index, int right_index, int height)
		{
			 if (-1 == this.leftLeft && -1 == this.rightRight)
			 {
				 this.leftLeft = left_index;
				 this.rightRight = right_index;
			 }
			 else
			 {
				 this.leftLeft   = (left_index  < this.leftLeft  ) ? left_index  : this.leftLeft  ;
				 this.rightRight = (right_index > this.rightRight) ? right_index : this.rightRight;
			 }
			 for (int index = left_index; index < right_index; index++)
			 {
				 this.height_arr[index] = (height > this.height_arr[index]) ? height : this.height_arr[index];
			 }
		}
		
		public void ShowSkyline ()
		{
			System.out.print(this.leftLeft + " " + this.height_arr[this.leftLeft] + " ");
			for (int index = this.leftLeft + 1; index < this.rightRight; index++)
			{
				if (this.height_arr[index - 1] != this.height_arr[index])
				{
					System.out.print(index + " " + this.height_arr[index] + " ");
				}
			}
			System.out.println(this.rightRight + " 0");
			//System.out.println();
		}
		
		
	}
	
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
		Main.Skyline skyline = new Main().new Skyline();
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		int l, r, h;
		while (scanner.hasNext())
		{
			l = scanner.nextInt();
			h = scanner.nextInt();
			r = scanner.nextInt();
			
			skyline.insert_building(l, r, h);
		}
		
		skyline.ShowSkyline();
		
	}

}
