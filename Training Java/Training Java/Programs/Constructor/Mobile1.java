class Mobile1
{
String Name;
int RamSize;
double Price;

Mobile1(String Name)
{
this.Name=Name;
System.out.println("Mobile Name : "+Name);
System.out.println("___________________");
}

Mobile1(int RamSize)
{
this.RamSize=RamSize;
System.out.println("Ram Size : "+RamSize);
System.out.println("___________________");
}
Mobile1(double Price)
{
this.Price=Price;
System.out.println("Price : "+Price);
System.out.println("___________________");
}
Mobile1(String Name,double Price)
{
this.Name=Name;
this.Price=Price;
System.out.println("Mobile Name : "+Name);
System.out.println("Price : "+Price);
System.out.println("___________________");
}
Mobile1(String Name,int RamSize,double Price)
{
this.Name=Name;
this.RamSize=RamSize;
this.Price=Price;
System.out.println("Mobile Name : "+Name);
System.out.println("Ram Size : "+RamSize);
System.out.println("Price : "+Price);
System.out.println("___________________");
}

public static void main(String[] args)
{
Mobile1 m=new Mobile1("Vivo");

Mobile1 m1=new Mobile1(8);

Mobile1 m2=new Mobile1(30000.0);

Mobile1 m3=new Mobile1("Vivo",2500);

Mobile1 m4=new Mobile1("Vivo",8,30000);

}
}