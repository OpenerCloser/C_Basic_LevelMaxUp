# include<stdio.h>
# include<conio.h>
main()
 {
  float min,a[20];
  int i,n,random;
   
 Homeworking1:
   printf("\nChuong trinh 1: Tim so nho nhat trong day so thuc\n");
  Again:
   printf("Ban muon nhap bao nhieu so thuc (toi da la 20 so):"); scanf("%d",&n);
  
  if(n<0||n>20) 
   {
    printf("\nBan phai thuc hien theo yeu cau chuong trinh!!!\n"); goto Again;
   }
  if(n>0&&n<=20)
   {
    printf("Day so thuc tuong ung la:\n");
   }
   
  for(i=1;i<=n;i++)
   scanf("%f",&a[i]);
   
  min=a[1];
  
  for(i=1;i<=n;i++)
   {
    if(min>a[i]) min=a[i];
   }
    printf("So nho nhat trong day so thuc la:%f\n\n\n\n\n",min);
 printf("Ban muon tiep tuc chuong trinh 1\nNeu co thi nhan phim 1, neu khong thi nhan phim 0\n");
 scanf("%d",&random);
  if(random==1) goto Homeworking1;
  else if(random==0) printf("Chuong trinh 1 ket thuc tai day!!!\n\n\n\n\n");
 getch();
 }
