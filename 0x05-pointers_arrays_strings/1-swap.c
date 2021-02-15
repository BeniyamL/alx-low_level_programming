/**
 * swap_int - swaps value a with b
 * @a: the first variable
 * @b: the second variable
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
