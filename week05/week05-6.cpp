#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
	}//(1)讀進來
	char temp[10];//用來交換的 temp字串
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if( strcmp(line[i],line[j])   >0){//(2)大小錯
				strcpy(temp,line[i]); //temp=a;
				strcpy(line[i],line[j]); //a=b;
				strcpy(line[j],temp); //b=temp;
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}//(3)印出去
}
