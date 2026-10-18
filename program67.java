import java.util.Scanner;
class program67
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

        icnt = 1;

        do
        {
            System.out.println("-------------");
            System.out.println(icnt +" jay ganesh...");
            System.out.println("-------------");
            icnt++;
        }while(icnt <= iNo);
        
        
        
    }
}