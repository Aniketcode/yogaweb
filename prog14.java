// Generate password from initials of one’s first_name, middle_name, last_name and with last four digit
// of your roll_no.(if middle name not presents, it won't come).
import java.util.Scanner;
class prog14{
    public static void main(String[] args) {
        //     String s;
        //     System.out.println("Enter the string: ");
        //     s=sc.next();
//     System.out.println("The original String is: "+s);
//     System.out.print("The reverse String is: ");
//     for(int i=s.length()-1;i>=0;i--){
    //         System.out.print(s.charAt(i)+"");
// }
    Scanner sc=new Scanner(System.in);
    String name,roll;
    
    System.out.println("Enter your name: ");
    name=sc.nextLine();
    System.out.println("Enter your roll no: ");
    roll=sc.next();
    System.out.println("The password generation is: ");
    System.out.print(name.replace(name, " "));
    // StringBuffer sb=new StringBuffer("Aniket");
    // System.out.println(sb.reverse());  
    // System.out.println(sb.capacity()); 


}
}

