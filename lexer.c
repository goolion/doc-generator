#include<stdio.h>
#include "lexer.h"






int readFile(){
	FILE *fp = NULL;
	char buff[10240]; //一行最多多少字符
	if((fp = fopen("./text.sl","r")) == NULL)
	{
		printf("error");
		return -1;
	}
	int index = 1;
	while(!feof(fp))
	{
		fgets(buff,10240,fp);
		printf("%s",buff);
	}
	//fp = fopen("./text.sl","r");
    fclose(fp);
    return 0;
}