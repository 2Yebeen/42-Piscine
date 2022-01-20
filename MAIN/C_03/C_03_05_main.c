#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int main()
{
	for(int i=0;i<9;i++)
	{
		printf("-----------------%d------------\n",i);
		printf("=============dest가 null============\n");
		char tempa[20]="abc";
		char tempb[20]="12";
		char tempc[20]="abc";
		printf("strlcat: %lu, %s\n", strlcat(tempa, tempb, i), tempa);
		printf("ft_strlcat: %u, %s\n", ft_strlcat(tempc,tempb,i), tempc);
		
		printf("=============src가 null============\n");
		char temp1[20]="abc";
		char temp2[20]="";
		char temp3[20]="abc";
		printf("strlcat: %lu, %s\n", strlcat(temp1, temp2, i), temp1);
		printf("ft_strlcat: %u, %s\n", ft_strlcat(temp3,temp2,i), temp3);
		printf("=============둘 다 null============\n");
		char temp4[20]="";
		char temp5[20]="";
		char temp6[20]="";
		printf("strlcat: %lu, %s\n", strlcat(temp4, temp5, i), temp4);
		printf("ft_strlcat: %u, %s\n", ft_strlcat(temp6,temp5,i), temp6);
		printf("=============같은 길이============\n");
		char temp7[20]="abc";
		char temp8[20]="123";
		char temp9[20]="abc";
		printf("strlcat: %lu, %s\n", strlcat(temp7, temp8, i), temp7);
		printf("ft_strlcat: %u, %s\n", ft_strlcat(temp9,temp8,i), temp9);
		printf("=============dest가 긴 경우============\n");
		char temp10[20]="abcd";
		char temp11[20]="12";
		char temp12[20]="abcd";
		printf("strlcat: %lu, %s\n", strlcat(temp10, temp11, i), temp10);
		printf("ft_strlcat: %u, %s\n", ft_strlcat(temp12,temp11,i), temp12);
		printf("=============src가 긴 경우============\n");
		char temp13[20]="abc";
		char temp14[20]="1234";
		char temp15[20]="abc";
		printf("strlcat: %lu, %s\n", strlcat(temp13, temp14, i), temp13);
		printf("ft_strlcat: %u, %s\n", ft_strlcat(temp15,temp14,i), temp15);
	}
}
