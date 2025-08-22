public class pract1
{
	public static void main(String args[])
	{
		System.out.println("Enter number : " + args[0] +","+args[1]);
		int no = Integer.parseInt(args[0]);
		int no1 = Integer.parseInt(args[1]);
		int sum = no + no1 + 1;
		System.out.println("Sum is : " + sum);
	}
}