int get_endianness(void)
{
        int num1 = 1, num2 = 1;
        int count = 0;

        while (num1 != 0)
        {
                num1 <<= 1;
                num2 <<= 1;
                count++;
        }
        if (count != 1)
                return (1);
        else
                return (0);

}
