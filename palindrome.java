import java.util.Scanner;
public class palindrome
{
  int l;
 public palindrome(int l)
  {
    this.l=l;
 }
  public static void main(String[] args)
   {
     Scanner s =new Scanner( System.in);
     System.out.println("enter palindrome string");
     String sp=s.nextLine();
     palindrome p=new palindrome(sp.length());
    System.out.println("check for palidnrome");
     int a=p.check(sp);
     if(p==1)
     System.out.println("the string is palindrome");
      else
       System.out.println("not a palidnrome");
      }
    
int check(String s)
 {
   if(s.length()%2==0)
     {
        return 0;
      }
     else
      {
         int q=s.length()
        int i=0;
         int j=q-1;
        while(i<j)
         {
           if(s.charAt(i)==s.charAt(j))
             {
               i++;
                j--;
              }
       }
       if(i==j)
            return 1;
          else
            return 0;
        }
       }