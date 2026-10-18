import java.util.Scanner;
class program57
{
   
    public static void main(String A[]) 
    {
        Scanner scanner = new Scanner(System.in);

        int iValue = 0;

        Iteration iteration = new Iteration();
        
        System.out.println("enter the frequency");
        iValue =scanner.nextInt();

        iteration.display(iValue);
    }
}
class  Iteration
{
    public  void display(int iNo)
    {
        int icnt = 0;
        
        for(icnt = 1; icnt <= iNo; icnt++)
        {
            System.out.println("jay ganesh...");
        }
    }
}