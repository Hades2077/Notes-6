class student1
{
static String institute="QSP";
String Name;
String Course;
 
public void Details()
{
System.out.println(institute);
System.out.println(Name);
System.out.println(Course);
System.out.println("____________________________");
}
public static void main(String[] args)
{
student1 s1=new student1();
s1.Name="Manga";
s1.Course="Java";
s1.Details();

student1 s2=new student1();
s2.Name="Mangi";
s2.Course="SQL";
s2.Details();

student1 s3=new student1();
s3.Name="Ranga";
s3.Course="Manual";
s3.Details();
}
}