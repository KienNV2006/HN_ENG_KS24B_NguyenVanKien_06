#include <stdio.h>

int main(){
	printf("MENU\n\n");
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra cac gia tri trong mang\n");
	printf("3.Dem so luong cac so hoan hao trong mang, biet so hoan hao la so co tong cac uoc bang chinh no\n");
	printf("4.Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang\n");
	printf("5.Them mot phan tu vao trong mang\n");
	printf("6.Xoa mot phan tu tai 1 vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu tang dan\n");
	printf("8.Tim kiem mot phan tu trong mang\n");
	printf("9.Sap xep lai mang va hien thi ra toan bo phan tu co trong mang, phan tu le dung truoc phan tu chan dung sau\n");
	printf("10.Kiem tra xem mang co phai tang dan hay khong\n");
	printf("11.Thoat\n");
	int choice;
	
	do{
		int n;
		int arr[100];
		printf("\nLua chon cua ban: ");
		scanf("%d", &choice);
		if(choice==1){
			printf("Nhap vao so luong phan tu va gia tri phan tu\n");
			printf("Nhap vao so luong phan tu\n ");
			scanf("%d", &n);
			if(n<1 || n>100){
				printf("So luong phan tu khong hop le !!\n");
				continue;
			}else{
				printf("Nhap gia tri tung phan tu trong mang: ");
				for(int i=0; i<n; i++){
					printf("\nPhan tu thu %d la: ", i+1);
					scanf("%d", &arr[i]);
				}
			}
				
			
		}else if(choice==2){
			if(n<0){
				printf("Mang chua duoc khoi tao ---> chon 1 de khoi tao\n");
				continue;
			}
			
			printf("In ra cac gia tri trong mang\n");
			for(int i=0; i<n; i++){
				printf("arr[%d]= %d\n", i, arr[i]);
			}
		}else if(choice==5){
		   	if(n <= 0){
  		  	printf("Mang chua duoc khoi tao! Vui long nhap mang truoc.\n");
  			 	 continue;
			}
			printf("Them mot phan tu\n");
			printf("Nhap vi tri phan tu (1 den %d): ", n+1);
			int pos;
			scanf("%d", &pos);
			if(pos<1 || pos>n+1){
				printf("Vi tri khong hop le!!");
				continue;
			}
			int value;
			printf("Nhap gia tri phan tu: ");
			scanf("%d", &value);
			for(int i=n; i>=pos; i--){
				arr[i]=arr[i-1];				
			}
			arr[pos-1]=value;
			n+=1;
		}else if(choice==6){
			if(n <= 0){
  	  	    printf("Mang chua duoc khoi tao! Vui long nhap mang truoc.\n");
   	        continue;
			}
			int pos;
			printf("Xoa phan tu trong mang\n");
			printf("Nhap vi tri muon xoa (1 den %d)", n);
			scanf("%d", &pos);
			for(int i=pos-1; i<n; i++){
				arr[i]=arr[i+1];
			}
			n-=1;
			printf("Xoa thanh cong");
		}else if(choice==7){
			if(n <= 0){
   			    printf("Mang chua duoc khoi tao! Vui long nhap mang truoc.\n");
 			    continue;
			}
			int temp;
			for(int i=0; i<n-1; i++){
				for(int j=0; j<n-1-i; i++){
					if(arr[j]>arr[j+1]){
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			printf("Sap xep thanh cong");
		}else if(choice==8){
				if(n <= 0){
 		    printf("Mang chua duoc khoi tao! Vui long nhap mang truoc.\n");
   		    continue;
			}
			printf("Nhap so can tim kiem: ");
			int number;
			int pos=-1;
			scanf("%d", &number);
			for(int i=0; i<n; i++){
				if(arr[i]==number){
					pos=i;
				}
			}
				if(pos==-1){
					printf("Phan tu nay khong ton tai!!\n");
				}else{
					printf("Phan tu %d nam o vi tri %d", number, pos+1);
				}
			
		}else if(choice==10){
				if(n <= 0){
 		    printf("Mang chua duoc khoi tao! Vui long nhap mang truoc.\n");
   		    continue;
			}
			int count=0;
			for(int i=0; i<n; i++){
				if(arr[i]<arr[i+1]){
					count+=1;
				}
			}
			if(count==n){
				printf("Mang nay sap xep theo thu tu tang dan\n");
				
			}else{
				printf("Mang nay khong sap xep theo thu tu tang dan\n");
			}
		}else if(choice=11){
			printf("Thoat chuong trinh\n");
			break;
			return 0;
		}else{
			printf("Choice khong hop le !!");
			continue;
		}
		
		
	}while (true);
	return 0;
}