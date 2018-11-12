#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

string decimal_to_binary(int n){
    if (n<0){ // check if negative and alter the number
        n = 65536 + n;
    }
    string result = "";
    while(n > 0){
        result = string(1, (char) (n%2 + 48)) + result;
        n = n/2;
    }
    return result;
}

int main()
{
string decimal_to_binary(int );
	int n;
	printf("Enter decimal:");
	scanf("%d",&n);
	cout<<decimal_to_binary(n);
	return 0 ;
}
