class NSI
{
 int a=Hai();

public  int Hai()
{
System.out.println("Hai Method Begin");

System.out.println(a);

System.out.println("Hai Method End");
return 10;
}

public static void main(String[] args)
{
System.out.println("Main Method Begin");
NSI n=new NSI();
System.out.println(n.a);

NSI n1=new NSI();
System.out.println(n1.a);

System.out.println("Main Method End");
}
}