class Laptop
{
String Name;
double Price;
int RamSize;

Laptop(String Name, double Price, int RamSize)
{
this.Name=Name;
this.Price=Price;
this.RamSize=RamSize;
}

public void LapDetails()
{
System.out.println("Laptop Name : "+Name);
System.out.println("Price : "+Price);
System.out.println("Ram Size : "+RamSize);
System.out.println("__________________________");
}
public static void main(String[] args)
{
Laptop l1=new Laptop("DELL",30000,8);
l1.LapDetails();

Laptop l2=new Laptop("HP",40000,8);
l2.LapDetails();

Laptop l3=new Laptop("APPLE",60000,8);
l3.LapDetails();
}
}