#include<stdio.h>
int main(){
int choice;
int n;
int a[100];
while(1){
    printf("1:Insert\n");
    printf("2:Update\n");
    printf("3:Delete\n");
    printf("4:Display\n");
    printf("5:Sort in Ascending Order\n");
    printf("6:Sort in Descending Order\n");
    printf("7:Search\n");
    printf("8:Exit\n");
    printf("Enter Your Choice:\n");
    scanf("%d",&choice);
    switch(choice){
case 1:{
    printf("Enter the number of values:\n");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    break;
}
case 2:{
    int x,value;
    scanf("%d",&x);
    printf("Enter the value you want to insert:\n");
    scanf("%d",&value);
    for(int i=n;i>x;i--){
        a[i]=a[i-1];
    }
    a[x]=value;
    n++;
    printf("Updated Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    break;
}
case 3:{
    int x;
    scanf("%d", &x);
    for(int i=x;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    break;
}
case 4:{
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    break;
}
case 5:{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    break;
}
case 6:{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    break;
}
case 7:{
    int number;
    printf("Enter the value you want to search:");
    scanf("%d",&number);
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==number){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Number found\n");
    }
    else{
        printf("Number not found\n");
    }
    break;
}
case 8:{
    return 0;
    }
default:
    printf("Invalid input\n");
}
}
}

