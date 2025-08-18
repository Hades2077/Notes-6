class student2
{
static String institute="QSP";
String Name;
String Course;
 
public static void Details()
{
student2 s3=new student2();
System.out.println(institute);
System.out.println(s3.Name);
System.out.println(s3.Course);
System.out.println("____________________________");
}
public static void main(String[] args)
{
student2 s1=new student2();
s1.Name="Manga";
s1.Course="Java";
s1.Details();

student2 s2=new student2();
s2.Name="Mangi";
s2.Course="SQL";
s2.Details();


}
}