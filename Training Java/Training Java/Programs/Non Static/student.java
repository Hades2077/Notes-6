class student
{
static String institute="QSP";
String Name;
String Course;
 
public static void main(String[] args)
{
student s1=new student();

s1.Name="Manga";
s1.Course="Java";

System.out.println(institute);
System.out.println(s1.Name);
System.out.println(s1.Course);
System.out.println("____________________________");

student s2=new student();

s2.Name="Mangi";
s2.Course="SQL";

System.out.println(institute);
System.out.println(s2.Name);
System.out.println(s2.Course);
System.out.println("____________________________");

}
}