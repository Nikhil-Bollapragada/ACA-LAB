#include<stdio.h>

typedef char bit;
bit carry = 0;
bit halfadd( bit A, bit B ){
carry = A & B;
return A ^ B;
}
 
int main() 
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int result = halfadd(i, j);
            printf("%d + %d = %d : %d\n", i, j, result, carry);
        }
    }
    printf("A\tB\tC\tR\tC\n");
    for (int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		for(int k=0;k<2;k++)
    		{
    			int result=halfadd(i,j);
    			bit carry1=carry;
    		    int sum=halfadd(k,result);
    		    int c_out=carry1|carry ;
    		    printf("%d\t%d\t%d\t%d\t%d\n",i,j,k,sum,c_out);
			}
    		
		}
	}
    return 0;
}
