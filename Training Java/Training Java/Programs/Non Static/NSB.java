class NSB
{
 	static
	{
	System.out.println("SB-1 Begin");
	
	System.out.println("SB-1 End");
	}
	
	{
	System.out.println("NSB-2 Begin");
	
	System.out.println("NSB-2 End");
	}
	
public static void main(String[] args)
{
System.out.println("Main Method Begin");
NSB n=new NSB();
System.out.println("________________________");
NSB n1=new NSB();
System.out.println("Main Method End");
}
}