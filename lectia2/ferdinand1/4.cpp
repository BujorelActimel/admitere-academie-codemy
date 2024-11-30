void f(int A[], int n)
{
    int i, x;
    for (i = 0; i < n / 2; i++)
    {
        x = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = x;
    }
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
}
void main()
{
    int A[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
    f(A, 8);
}


A = 8,7,6,5,4,3,2,1

Raspuns: a) Corect