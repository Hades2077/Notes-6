class Mobile
{
String Name;
int RamSize;
double Price;

Mobile(String Name)
{
this.Name=Name;
}

Mobile(int RamSize)
{
this.RamSize=RamSize;
}
Mobile(double Price)
{
this.Price=Price;
}
Mobile(String Name,double Price)
{
this.Name=Name;
this.Price=Price;
}
Mobile(String Name,int RamSize,double Price)
{
this.Name=Name;
this.RamSize=RamSize;
this.Price=Price;
}

public void MobileDetails()
{
System.out.println("Mobile Name : "+Name);
System.out.println("Ram Size : "+RamSize);
System.out.println("Price : "+Price);
System.out.println("___________________");
}

public static void main(String[] args)
{
Mobile m=new Mobile("Vivo");
m.MobileDetails();

Mobile m1=new Mobile(8);
m1.MobileDetails();

Mobile m2=new Mobile(30000.0);
m2.MobileDetails();

Mobile m3=new Mobile("Vivo",2500);
m3.MobileDetails();

Mobile m4=new Mobile("Vivo",8,30000);
m4.MobileDetails();
}
}