class NSM3
{
 int a=10;

 
public void Details()
{
int a=20;
System.out.println(a);
System.out.println(this.a);
}

public static void main(String[] args)
{
NSM3 n=new NSM3();
n.Details();
int a=30;
System.out.println(a);
System.out.println(n.a);

}
}