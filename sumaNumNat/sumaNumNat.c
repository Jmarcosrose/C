int sumaNumNat(int n)
{
    if (n<=1)
     {
         return n;
     }
     else
     {
         return n + sumaNumNat(n-1);
     }
}
