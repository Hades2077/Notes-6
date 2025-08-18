class Student3
{
String Name;
String cource;
static int SID;
{
SID++;
}
public static void main(String[] args)
{

Student3 n=new Student3();
n.Name="Manga";
n.cource="Java";

System.out.println("Name : "+n.Name);
System.out.println("Cource : "+n.cource);
System.out.println("Student ID : "+n.SID);
System.out.println("____________________");

Student3 n1=new Student3();
n1.Name="Mangi";
n1.cource="Java";

System.out.println("Name : "+n1.Name);
System.out.println("Cource : "+n1.cource);
System.out.println("Student ID : "+n1.SID);
System.out.println("____________________");

Student3 n2=new Student3();
n2.Name="Ranga";
n2.cource="Java";

System.out.println("Name : "+n2.Name);
System.out.println("Cource : "+n2.cource);
System.out.println("Student ID : "+n2.SID);
System.out.println("____________________");
}
}