# include<stdio.h>
# include<conio.h>

int F(int b[],int &n)
 {
  for(int i=1;i<=n;i++)
   {
   	if(b[i]%2==0)
   	 {
   	  return b[i];
   	 }
   }
   return -1;	
 }
 
float F2(float c[],int &n)
 {
  for(int i=1;i<=n;i++)
   {
   	if(c[i]<0)
   	 {
   	  return c[i];
   	 }
   }
   return -1;
 }
 
main()
 {
  int b[20];
  float c[20];
  int n,random;

Homeworking2:
  printf("Chuong trinh 2: Tim so chan dau tien trong day so nguyen\n");
 Again:
  printf("Ban muon nhap bao nhieu so nguyen (toi da la 20 so):"); scanf("%d",&n);
  
  if(n<0||n>20)
   {
    printf("Ban phai thuc hien theo yeu cau chuong trinh!!!\n"); goto Again;
   }
  if(n>0&&n<=20)
   {
   	printf("Day so nguyen tuong ung la:\n");
   }
   
  for(int i=1;i<=n;i++) scanf("%d",&b[i]);
  
  int even=F(b,n);
  printf("So chan dau tien trong day so nguyen la:%d\n",even);
  printf("Ban muon tiep tuc chuong trinh 2\nNeu co thi nhan phim 2, neu khong thi nhan phim 0\n");
  scanf("%d",&random);
  if(random==2) goto Homeworking2;
  else if(random==0) printf("Chuong trinh 2 ket thuc tai day!!!\n\n");
  
Homeworking3:
  printf("Chuong trinh 3: Tim so am dau tien trong day so thuc\n");
 Again2:
  printf("Ban muon nhap bao nhieu so thuc (toi da la 20 so):"); scanf("%d",&n);
  
  if(n<0||n>20)
   {
   	printf("Ban phai thuc hien theo yeu cau chuong trinh!!!\n"); goto Again2;
   }
  if(n>0&&n<=20)
   {
   	printf("Day so thuc tuong ung la:\n");
   }
   
  for(int i=1;i<=n;i++) scanf("%f",&c[i]);
   
  float negative=F2(c,n);
  printf("So am dau tien trong day so thuc la:%f\n",negative);
  printf("Ban muon tiep tuc chuong trinh 3\nNeu co thi nhan phim 3,neu khong thi nhan phim 0\n");
  scanf("%d",&random);
  if(random==3) goto Homeworking3;
  else if(random==0) printf("Chuong trinh 3 ket thuc tai day!!!\n\n");
  getch();
 }
