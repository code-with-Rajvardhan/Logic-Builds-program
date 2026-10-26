function SumFactors(iNo)
{
    let icnt = 0;
    let isum = 0;
    
    for(icnt = 1; icnt<= iNo/2; icnt++)
    {
        
        if(iNo % icnt == 0)
        {
            isum = isum + icnt;

            
        }
    }

    return isum;
}

function main()
{
    let iRet = 0;

   iRet = SumFactors(12);

   console.log("summation of factors : ",iRet);

}

main()