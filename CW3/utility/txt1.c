#include <stdio.h>

int main()
{
	char a[54]= "0123456789012345678901234567890123456789aaaa\xef\xcd\xab\x89\x67\x45\x23\x01\x01\x00";
	FILE *fp = fopen("txt.txt", "w+");
	fwrite(a,sizeof(char),54,fp);
	fclose(fp);
	
	return 0;
}
