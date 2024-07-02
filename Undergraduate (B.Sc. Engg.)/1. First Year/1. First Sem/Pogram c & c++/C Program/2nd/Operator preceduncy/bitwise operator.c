main()
{
    int x;
    x=~5;// bitwise not
    /*

    5=00000000 00000101
    ~5=1111111111111111010
    which number first bit 1 this number is negative
    which number first bit 0 this number is pogitive

  ~5=1111111111111111010
  is 1's compliment is 00000000000000000000000000000101
  2's complement is 0000000000000000000000000000000110=6
  ~5=-6


    */
    printf("%d",x);
}
