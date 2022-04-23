int main()
{
    int i, a = 2, b = 3;
    for (i = 0; i <= 2; i += 1)
    {
        a = a * 2;
    }
    while (i > 2)
    {
        b = b * 2;
        i += 1;
    }
    do
    {
        a = a + 2;
        i = i + 1;
    } while (i != 2);
}
