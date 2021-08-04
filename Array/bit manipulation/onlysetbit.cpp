int ispowerof2(int n)
{

         return (n&&(!(n&(n-1))));
}

int findPosition(int n)
{
    // code here

    if (!(ispowerof2))
        return -1;

    int pos = 1, i = 1;
    while (!(n & i))
    {

        i = i << 1;
        pos++;
    }

    return pos;
}