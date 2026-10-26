function DisplayFactors(iNo)
{
    let icnt = 0;
    for(icnt = 1; icnt<= iNo/2; icnt++)
    {
        console.log("factors of iNo :",iNo);
        if(iNo % icnt == 0)
        {
            console.log("factors of  :",icnt);
        }
    }
}

function main()
{
    DisplayFactors(12);

}

main()