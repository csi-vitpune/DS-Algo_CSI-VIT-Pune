import java.util.Scanner;
public class binarysearch
{
	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args)
	{
		int [] arr = input();
		System.out.println("Enter the number which is to be searched-");
		int x = sc.nextInt();
		System.out.println("The required element is present at " + (binary(arr,x)) + " index number ");
	
	}
	public static int[] input()
	{
		System.out.println("Enter size of the array!");
		int n = sc.nextInt();
		int[] arr = new int[n];
		for(int i =0;i<arr.length;i++)
		{
			System.out.println("The value for index " + (i) + " is ");
			arr[i] = sc.nextInt();
		}
		return arr;
	}
	public static int binary(int[] array, int item)
	{
		int lo = 0;
		int hi = array.length-1;
		while(lo<=hi)
		{
			int mid = (lo+hi)/2;
			if(array[mid] < item)
			{
				lo = mid + 1;
			}
			else if(array[mid] > item)
			{
				hi = mid - 1;
			}
			else
			{
				return mid;
			}
		}
		return -1;
	}
}