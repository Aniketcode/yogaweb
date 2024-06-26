import java.util.*;
class prime_number{
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
        int r;
        System.out.println("Enter the range: ");
        r=sc.nextInt();
        for(int i=2;i<=r;i++){
            boolean t=true;
            for(int j=2;j<=Math.sqrt(i);j++){
                if(i%j==0){
                    t=false;
                    break;
                } 
            }
            if(t==true){
                System.out.print(i+" ");
            }
        }
    }
}