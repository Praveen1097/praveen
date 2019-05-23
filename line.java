import java.util.Scanner;

public class line {
    
public static int getlinecount(String text){
        
return text.split("[\n|\r]").length;
    
}
	
public static void main (String a[]) 
{
	    
String str;
	    
Scanner sc=new Scanner(System.in);
	    
str=sc.nextLine();
        
int count=getlinecount(str);
        S
System.out.println(" "+count);
	
}

}