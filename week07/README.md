## 字串排序
把字串由小自大排起來

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10]; //字母不是字串!!

int compare(const void *p1,const void *p2)
{
	char*s1=(char*)p1; //把指標p1轉成字串s1
	char*s2=(char*)p2; //把指標p2轉成字串s2
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
	}
	
	qsort(line,n,10,compare);
	
	for(int i=0;i<n;i++){
		printf("%s\n",line[i]);
	}
}
```
