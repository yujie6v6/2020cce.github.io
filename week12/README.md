## 簡化版UVA10062告訴我頻率-不用排序
有很多行文字的 Input, 每一行代表一組測試資料, 每行最多不超過 1000 個英文字母。請統計每一行裡的字母出現頻率。為了簡化問題, 字母只會出現 ASCII 值 32 之後的部分 (32之前是特殊符號)。請別擔心, ASCII 值 128 之後的特殊符號也不會出現。 為了讓大家比較好寫程式, 只要照著 ASCII 的順序逐字母印出即可。 (不用像UVA10082 那樣很複雜的排序) 還有, 每筆測試資料之間的 Input 要記得用空白行隔開。
 ```c
 #include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={}	;	

	
	for(int i=0;line[i]!=0;i++){
		char c=line[i];
		ans[c]++;
		}

	
	if(t>0) printf("\n");
	for(int i=0;i<256;i++){
		if(ans[i]>0) printf("%d %d\n",i,ans[i]);
		}
	}
}
 ```
##  UVA10062 Tell me the frequencies!
![10062](https://user-images.githubusercontent.com/79676845/118211593-ee40f900-b49e-11eb-80a6-426daf357085.jpg)
題目說明:輸入一串字元，紀錄字元數目，並將其ASCll碼顯示出來。

```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		int ans[256]={}	;	
		char c[256]={};
		for(int i=0;i<256;i++) c[i]=i;
	
	for(int i=0;line[i]!=0;i++){
		char c=line[i];
		ans[c]++;
		}
		
	for(int i=0;i<256;i++){
		for(int j=i+1;j<256;j++){
			if(ans[i]>ans[j]){
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char t=c[i];
				c[i]=c[j];
				c[j]=t;
			
			}
			
			if(ans[i]==ans[j] && c[i]<c[j]){
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char t=c[i];
				c[i]=c[j];
				c[j]=t;
			
			}
		}
	}

	
	if(t>0) printf("\n");
	for(int i=0;i<256;i++){
		if(ans[i]>0) printf("%d %d\n",c[i],ans[i]);
		}
	}
}

```

## UVA299:Train Swapping
![train](https://user-images.githubusercontent.com/79676845/118219983-2818fc00-b4ad-11eb-8728-042064b2867a.jpg)
![week12-5配合泡泡排序法, 完成 UVA299](https://user-images.githubusercontent.com/79676845/118220036-43840700-b4ad-11eb-940b-d465746deb2b.png)
#include <Stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		int ans=0;
		
		for(int k=0;k<n-1;k++){
			for(int i=0;i<n-1;i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}

## UVA11321 Sort! Sort!! and Sort!!! 
![sort](https://user-images.githubusercontent.com/79676845/118220117-729a7880-b4ad-11eb-856a-efa192991802.jpg)
![week12-7全部完成,回家再寫](https://user-images.githubusercontent.com/79676845/118220123-78905980-b4ad-11eb-901a-f9cc7aa2c2e7.png)

