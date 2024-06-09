#include<math.h> 
int main() 
{ 
int num,n=0,ogNum,res=0; 
printf("Enter the number:"); 
scanf("%d",&num); 
ogNum=num; 
while(num!=0) 
{ 
n++; 
num/=10; 
} 
num=ogNum; 
while(ogNum>0) 
{ 
res=res+pow(ogNum%10,n); 
ogNum/=10; 
} 
if(res==num) 
{ 
printf("It is armstrong"); 
} 
else 
printf("It is not armstrong"); 
return 0; 
}