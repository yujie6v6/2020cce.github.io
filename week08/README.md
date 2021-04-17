## 字串排序
把他由小自大排起來

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[100][10];
int compare(const void *p1 ,const void *p2){
	return strcmp((char*)p1,(char*)p2);
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

## List of Conquests
![10420](https://user-images.githubusercontent.com/79676845/115116777-120f3d00-9fce-11eb-9ff5-85859ba6d14f.png)
![172578235_4237272752952182_6415258711845563172_n](https://user-images.githubusercontent.com/79676845/115116859-7b8f4b80-9fce-11eb-994c-2f0ddfbb2a55.jpg)

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[2000][75];
int compare(const void *p1, const void*p2){
	return strcmp((char*)p1,(char*)p2);
}

char other[2000];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",name[i]);
		gets(other);
	}
	
	qsort(name,n,75,compare);
	
	int ans=1;
	for(int i=0;i<n;i++){
		if(strcmp(name[i],name[i+1])==0) ans++;
		else{
			printf("%s %d\n",name[i],ans);
			ans=1;
		}
	}
}
```
