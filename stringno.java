
import java.util.Scanner;

class GFG 
{
	
public static void main (String[] args) 
	
{
	    
String s;
	    
Scanner sc=new Scanner(System.in);
	    
s=sc.nextLine();
	    
try
	    
{
	        
	        
Integer.parseInt(s);
	        
System.out.println("yes");
	        
	   
} 
	    
catch(NumberFormatException e)
	    
{
	        
System.out.println("no");
	        
	    
}
	    
	
}    
	  

}