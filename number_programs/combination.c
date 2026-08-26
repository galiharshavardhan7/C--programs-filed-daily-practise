#include<stdio.h>
int main()
{
    int n,r,nfact=1,rfact=1,nrfact=1,i,j,k,ncr;
    printf("Enter the n for nCr:");
    scanf("%d",&n);
    printf("Enter the r for nCr:");
    scanf("%d",&r);
    for(i=1;i<=n;i++)
    {
        nfact=nfact*i;
    }for(j=1;j<=r;j++)
    {
        rfact=rfact*j;
    }for(k=1;k<=(n-r);k++)
    {
        nrfact=nrfact*k;
    }
    ncr=nfact/(rfact*nrfact);
    printf("ncr=%d",ncr);

    
}