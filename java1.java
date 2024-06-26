import java.util.Scanner;
class InvalidAgeException extends Exception
{
	public String toString()
	{
		return "not a valid voter..........";
	}
}

class java1
{	
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter your age: ");
		int age=sc.nextInt();
		try{
			if(age<18)
				throw new InvalidAgeException();
			else
				System.out.println("welcome to vote");
		
		}catch(InvalidAgeException m){System.out.println("Exception occured: "+m);}
		
		System.out.println("End of program");
    }
}