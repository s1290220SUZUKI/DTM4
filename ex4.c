#include<stdio.h>
#include<stdio.h>
int main(){
int i,num,heads=0,tails=0;
 char name[20]
 
 printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);


printf("Tossing a coin...\n");

 for(i=0;i<3;i++){
num = rand();
if(num%2==0){
printf("Round %d:Heds\n",i+1);
heads++;
}else{
printf("Round %d: Tails\n",i+1);
tails++;
}
}
printf("Heads: %d, Tails:%d\n",heads,tails);
 if(heads>2)printf("You won!¥n");
 else printf("You lose!¥n");
return 0;
}
