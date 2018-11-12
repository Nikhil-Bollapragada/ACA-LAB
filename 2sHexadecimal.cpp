#include<stdio.h>
#include<string.h>
#include <bits/stdc++.h> 
using namespace std;

char flip(char c) {return (c == '0')? '1': '0';} 

void printOneAndTwosComplement(string bin) 
{ 
    int n = bin.length(); 
    int i; 
  
    string ones, twos; 
    ones = twos = ""; 
  
    //  for ones complement flip every bit 
    for (i = 0; i < n; i++) 
        ones += flip(bin[i]); 
  
    //  for two's complement go from right to left in 
    //  ones complement and if we get 1 make, we make 
    //  them 0 and keep going left when we get first 
    //  0, make that 1 and go out of loop 
    twos = ones; 
    for (i = n - 1; i >= 0; i--) 
    { 
        if (ones[i] == '1') 
            twos[i] = '0'; 
        else
        { 
            twos[i] = '1'; 
            break; 
        } 
    } 
  
    // If No break : all are 1  as in 111  or  11111; 
    // in such case, add extra 1 at beginning 
    if (i == -1) 
        twos = '1' + twos; 
  
  
    cout << "1's complement: " << ones << endl; 
    cout << "2's complement: " << twos << endl; 
} 
int main()
{
	char binary[100]={},hex[10];
	int i;
	printf("Enter Hexadecimal:");
	gets(hex);
	for(i=0;i<strlen(hex);i++)
	{
		switch(hex[i])
		{
			case '0':
				strcat(binary,"0000");
				break;
			case '1':
				strcat(binary,"0001");
				break;
			case '2':
				strcat(binary,"0010");
				break;
			case '3':
				strcat(binary,"0011");
				break;
			case '4':
				strcat(binary,"0100");
				break;
			case '5':
				strcat(binary,"0101");
				break;
			case '6':
				strcat(binary,"0110");
				break;
			case '7':
				strcat(binary,"0111");
				break;
			case '8':
				strcat(binary,"1000");
				break;
			case '9':
				strcat(binary,"1001");
				break;
			case 'A':
				strcat(binary,"1010");
				break;
			case 'B':
				strcat(binary,"1011");
				break;
			case 'C':
				strcat(binary,"1100");
				break;
			case 'D':
				strcat(binary,"1101");
				break;
			case 'E':
				strcat(binary,"1110");
				break;
			case 'F':
				strcat(binary,"1111");
				break;
			default:
				printf("Wrong Number!");
		}
	}
	cout << "Binary equivalent:" << binary << endl;
	printOneAndTwosComplement(binary);
	return 0;
}
