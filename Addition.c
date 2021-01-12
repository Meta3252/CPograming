#include <stdio.h>
// ดึง Library Input Output
void main(){
//ส่วนที่ 2 Function
// คำสั่งโปรแกรมบวกเลข
int num1,num2,total;
//ประกาศตัวแปล 3 ตัว
printf("Value of num1 is:");
//รับค่าจากUser ค่าที่ 1
scanf("%d",&num1);
//รับค่าจากUser ค่าที่ 2
printf("Value of num2 is:");
scanf("%d",&num2);
total = num1 + num2;
printf("Result is %d",total);
}