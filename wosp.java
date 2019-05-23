
import java.util.Scanner;


public class wosp
{
	

public static void main (String[] args) 
	

{

String s;
int count=0;

Scanner sc=new Scanner(System.in);

s=sc.nextLine();

for(int i=0;i<s.length();i++)

{
    
if(s.charAt(i)!=' ')
    
count++;

}

System.out.println(" "+count);


}

}
	  