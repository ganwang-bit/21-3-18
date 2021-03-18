//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[2][3];
//    printf("%d",sizeof(arr));
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
//int cmp(const void *a,const void *b)
//{
//    return *(int*)b-*(int*)a;
//}
//int main()
//{
//    int n,i,count=0,fang=0,row,col,j;
//    scanf("%d",&n);
//    int arr[n];
//    for(i=0;i<n;i++)
//        scanf("%d",&arr[i]);
//    qsort(arr,n,sizeof(int),cmp);
//    row=n/(int)sqrt(n);
//    col=(int)sqrt(n);
//    while(row*col!=n)
//    {
//        row++;
//        col=n/row;
//    }
//    int arr2[row][col];
//    memset(arr2,0,sizeof(arr2));
//    i=0;
//    j=0;
//    while(count<n)
//    {
//        switch(fang)
//        {
//            case 0:
//                while(j<col&&!arr2[i][j])
//                {
//                    arr2[i][j]=arr[count];
//                    j++;
//                    count++;
//                }
//                j--;
//                i++;
//                fang=(fang+1)%4;
//                break;
//            case 1:
//                while(i<row&&!arr2[i][j])
//                {
//                    arr2[i][j]=arr[count];
//                    i++;
//                    count++;
//                }
//                i--;
//                j--;
//                fang=(fang+1)%4;
//                break;
//            case 2:
//                while(j>=0&&!arr2[i][j])
//                {
//                    arr2[i][j]=arr[count];
//                    j--;
//                    count++;
//                }
//                j++;
//                i--;
//                fang=(fang+1)%4;
//                break;
//            case 3:
//                while(i>=0&&!arr2[i][j])
//                {
//                    arr2[i][j]=arr[count];
//                    i--;
//                    count++;
//                }
//                i++;
//                j++;
//                fang=(fang+1)%4;
//                break;
//        }
//    }
//    for(i=0;i<row;i++)
//    {
//        for(j=0;j<col;j++)
//        {
//            if(j!=0)
//                printf(" ");
//            printf("%d",arr2[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double r1,p1,r2,p2,a,b;
//    scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
//    a=r1*r2*(cos(p1)*cos(p2)-sin(p1)*sin(p2));
//    b=r1*r2*(cos(p1)*sin(p2)+sin(p1)*cos(p2));
//    if(fabs(a)<0.005)
//        printf("0.00");
//    else
//        printf("%.2lf",a);
//    if(fabs(b)<0.005)
//        printf("+0.00i");
//    else
//        printf("%+.2lfi",b);
//    return 0;
//}
