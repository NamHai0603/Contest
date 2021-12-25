#include<stdio.h>
#include<math.h>
//int canbac3(int n){
//    for(int j=1; j<=n;j++){
//        if(pow(j,3)>n); break;
//    }
//    return i;
//}
int cau5(int n) {
//    for(int j=0; j<=n;j++){
//        if(pow(j,3) > n) { return j; break; }   
//    }
    int sum=0;
    for(int i=1; i <= 275; i++) {
        // Can bac 3 cua 21012056 =275.94
        if(i%2==1)  sum+= i;
    }
    return sum;
}
#define Enter 10
int  cau6(){
	printf("Nhap ki tu: ");
	char n;
	int sum = 0;
	do{
	n = getchar();
    int c= n%10; 
	sum += c;
    printf("%d ",c);
	}while(n != Enter);
//    printf("sum= %d", sum);
	return sum;
}
int cau10(int n) {
    int m= n%1000;
    int x,y;
    for(x=1;x<=m;x++) {
        for(y=0; y<=sqrt(m); y++ ) {
            if(x+y*y==m) printf("(%d, %d) ", x,y);
        }
    }
}
int main(){

	printf("Ho va ten: Nguyen Nam Hai\n");
	printf("Ma so sinh vien: 21012056\n");
	char s, n;
	do{
		printf("1. Cau 5\n");
		printf("2. Cau 6\n");
		printf("3. Cau 10\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d",&s);
		fflush(stdin);
		int a; 
		int b; 
        int c; 
		fflush(stdin);
		switch(s){
			case 1: 
//            a = cau5(21012056);
			printf("%d",cau5(21012056)); break;
			case 2:
//            b = cau6();
			printf("%d", cau6()); break;
			case 3:
//            c = cau10(21012056);
			printf("%d", cau10(21012056)); break;
		}
		printf("\nBan co muon tiep tuc nua hay khong(y/n): ");
		scanf("%c",&n);
		fflush(stdin);
	}while(n != 'n');
	return 0;
}