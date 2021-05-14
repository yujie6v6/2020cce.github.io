## 簡化版UVA10082告訴我頻率-不用排序
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
