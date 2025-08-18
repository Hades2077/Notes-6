class CO1
{
CO1()
{
this(10);
System.out.println(" QSP");
}

CO1(int a)
{
this(10,20);
System.out.print(" From");
}

CO1(int a, int b)
{
this(10,20,'a');
System.out.print("Iam");
}

CO1(int a, int b, char c)
{
this(10,20,'a',10.10);
System.out.println(" Partha");
}
CO1(int a, int b, char c, double d)
{
System.out.print("Iam");
}
public static void main(String[] args)
{

CO1 c=new CO1();

}
}