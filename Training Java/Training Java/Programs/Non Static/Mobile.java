class Mobile
{
String Name;
static String Brand="VIVO";
double price;

public void Details()
{
System.out.println("Name : "+Name);
System.out.println("Brand: "+Brand);
System.out.println("Price : "+price);
System.out.println("____________________");
}

public static void main(String[] args)
{

Mobile n=new Mobile();
n.Name="Vivo V5";
n.price=20000;
n.Details();

Mobile n1=new Mobile();
n1.Name="Vivo V20";
n1.price=26000;
n1.Details();
}
}