class program63
{
   
    public static void main(String A[]) 
    {
        Iteration iteration = new Iteration();

        iteration.display();
    }
}
class  Iteration
{
    public  void display()
    {
        int icnt = 0;

        for(icnt = 6; icnt <= 6; icnt--)   // infinite loop
        {
            System.out.println("jay ganesh...");
        }
    }
}