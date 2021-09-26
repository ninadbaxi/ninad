int main()
{
 int x=8, y=1;
 while(x>=y){
 	x = --x – x--; 
 	y = --y – y++;
 }
 printf("%d %d",y, x);
 return 0;
} 

