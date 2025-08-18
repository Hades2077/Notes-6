class NSM2
{
static int a=10;
int b=20;
 
public static void Details()
{
System.out.println("Static Block");
System.out.println(a);
			//System.out.println(b); Error
System.out.println("____________________________");
}

public void Details1()
{
System.out.println("Non-Static Block");
System.out.println(a);
System.out.println(b);
System.out.println("____________________________");
	Details();
}

public static void main(String[] args)
{
NSM2 n=new NSM2();
n.Details1();

}
}