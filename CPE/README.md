## UVA 10783
![10783_page-0001](https://user-images.githubusercontent.com/79676845/135036617-4d225b50-5cd0-49d3-93cc-4a2765c8630b.jpg)
輸入T有幾筆資料，再輸入每筆資料的範圍a到b，請你找出a與b之間所有奇數的和。  
例如：範圍 [3, 9] 中所有奇數的和就是 3 + 5 + 7 + 9 = 24。

```c
#include <stdio.h>
int main()
{
    int T,a,b,sum;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d",&a,&b);
        sum=0;
        for(int j=a;j<=b;j++){
            if(j%2!=0)sum+=j;
        }
        printf("Case %d:%d",i+1,sum);
    }
}

```

## UVA 100

![100_page-0001](https://user-images.githubusercontent.com/79676845/135036726-f22876cd-b139-407f-a9a1-a67b73196fd2.jpg)
![100_page-0002](https://user-images.githubusercontent.com/79676845/135036835-8110ca68-4e0d-45c9-b1aa-481a215b18bf.jpg)
![2021-09-28 (1)](https://user-images.githubusercontent.com/79676845/135040223-4e498a58-cb28-4a65-a8d2-b0d7e5e4ce27.png)
```c
int cycleLength(int n){
	int length=1;
	while(n!=1){
		if(n%2==0){
			n=n/2;
			length++;
		}else{
			n=3*n+1;
			length++;
		}
	}
	return length;
}

int main(void){
	int i,j,max;
	while(scanf("%d %d",&i,&j)!=EOF){
		max=1;
		if(i<=j){
			for(int n=i;n<=j;n++){
				int len=cycleLength(n);
				if(len>max)
				max=len;
			}
		}
		else{
			for(int n=j;n<=i;n++){
				int len=cycleLength(n);
				if(len>max)
				max=len;
			}
		}
		printf("%d %d %d\n",i,j,max);
	}
}
```

## UVA11417
![0001](https://user-images.githubusercontent.com/79676845/135409912-4a8a22d0-dac9-4211-a7d1-02aaddd4c866.jpg)
```C
#include <stdio.h>
int gcd(int a,int b)
{
	if(a==0) return b;
	else return gcd(b%a,a);
}

int main()
{
	int i,j,n,sum;
	scanf("%d",&n);
	while(n){
		sum=0;
		for(i=1;i<n;i++){
			for(j=i+1;j<=n;j++)
				sum+=gcd(i,j);
		}
		printf("%d\n",sum);
		scanf("%d",&n);
	}
	return 0;
}
```

## UVA10035
![image](https://user-images.githubusercontent.com/79676845/136665757-fa594cfc-d3ce-49e5-9e0c-f7ef23332d97.png)

```C
#include <stdio.h>

int main()
{
	int a,b,c;
	while(1){
		scanf("%d%d",&a,&b);
		if(a==0 && b==0) break;
		
		int carry=0,ans=0;
		
		while(a!=0||b!=0){
			c=a%10+b%10+carry;
			if(c>=10){
				carry=1;			
				ans++;					
			}
			else{
				carry=0;
			}
			a/=10;
			b/=10;
		}
		if(ans==0) printf("No carry operation.\n");
		else if(ans==1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n",ans);
	}
	return 0;
}
```

## UVA 10071
![image](https://user-images.githubusercontent.com/79676845/136665224-5ce29e2a-193f-4a3d-9bbf-2add4e9d34e5.png)


```C
#include <stdio.h>
int main()
{
	int v,t,s;
	while(scanf("%d%d",&v,&t)!=EOF){
		int s=2*v*t;
		printf("%d\n",s);
	}
}

```

## UVA 10055
![image](https://user-images.githubusercontent.com/79676845/136665746-09d0e7e2-73b5-41e6-82bb-19bc8153b492.png)


```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		printf("%lld\n",llabs(a-b));
	}
}
```

## UVA 10929
![image](https://user-images.githubusercontent.com/79676845/136665774-c2b5a7f2-ae78-4ac9-9ea2-f18f8bbc287f.png)
```c
#include <stdio.h>
#include <string.h>
int main()
{
 char number[1001];
 while (scanf("%s", number)!=EOF)
 {
  
  int i;
  long int length=strlen(number);///讀出字串長度
  if(length==1 && number[0]=='0')///判斷是否只有一個位數並且輸入的該數不能為零 
   break;
  int odd=0, even=0;
  for(i=0; i<length; i++)///分別做奇偶數位的相加
  {
   if(i%2==0)
    odd=odd+(number[i]-'0');
   else
    even=even+(number[i]-'0');
  }
  if((odd-even)%11==0)//判斷
   printf("%s is a multiple of 11.\n", number);
  else
   printf("%s is not a multiple of 11.\n", number); 
  
 }
 
 
}
```

## UVa10268
![2021-10-16](https://user-images.githubusercontent.com/79676845/137588000-1e1123d4-441a-4004-8e11-e687a52be6d4.png)

```c
#include <stdio.h>
int a[10000];
int main()
{
	int n,i,x,y;
	while (scanf("%d", &x) != EOF){
	for(n=0;; n++){
		scanf("%d", &a[n]);
		if (getchar()== '\n') break;
	}
		y=a[0]*n;
		for(i=1;i<n;i++){
			y=y*x+a[i]*(n-i);
		}
		printf("%d\n",y);
	}
	return 0;
}

## uva10812
![2021-10-16 (1)](https://user-images.githubusercontent.com/79676845/137588006-c1822969-3dee-490e-bb1a-fe16bde4412d.png)

```c
#include <stdio.h>
int main()
{
	int n,s,d;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&s,&d);
		if(s<d ||s<0||d<0 ||(s+d)%2==1) printf("impossible\n");
		else printf("%d %d\n",(s+d)/2,(s-d)/2);
	}
}
```
```
