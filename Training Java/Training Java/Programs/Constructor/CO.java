class CO
{
CO()
{
this(10);
System.out.println("Hai");
}

CO(int a)
{
this(10,20);
System.out.println("Hello");
}

CO(int a, int b)
{
System.out.println("Bye");
}

public static void main(String[] args)
{

CO c=new CO();

}
}