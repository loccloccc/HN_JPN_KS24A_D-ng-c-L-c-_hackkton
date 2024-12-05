#include<stdio.h>

int main()
{	
	int doDai , giaTri , traLoi , giatriXoa;
	int mang[100];
	int tong = 0 ;
	int giatriTim;
	int giatriThem ;
	int flag = -1 ;
	int kiemTra = 0 ;
	do{
		printf("          Menu\n");
		printf("1.Nhap so phan tu va gia tri cho mang .\n");
		printf("2.In cac gia tri trong mang \n");
		printf("3.Tim gia tri nho nhat va lon nhat trong mang\n");
		printf("4.Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)\n");
		printf("5. them gia tri vao cuoi mang:\n");
		printf("6.Sap xep mang theo thu tu giam dan \n");
		printf("7.Cho nguoi dang nhap vao mot phan tu, tim kiem xem phan tu đo co ton tai trong mang hay khong \n");
		printf("8.Tim phan tu:");
		printf("9.In ra toan bo so nguyen to trong mang.\n");
		printf("10 .Sap xep mang theo thu tu tang dan.\n");
		printf("11.Thoat.\n");
		printf("Lua chon cua ban : ");
		scanf("%d",&traLoi);
		switch(traLoi)
		{
			case 1 :
				//Nhập số phần tử và giá trị cho mảng
				do{
					printf("Moi ban nhap so luong phan tu :");
					scanf("%d",&doDai);
					
				}while(doDai<=0);
				mang[doDai];
				printf("Moi ban nhap gia tri cac phan tu :\n");
					for(int i = 0 ; i < doDai ; i++)
					{
						printf("mang[%d] = ",i);
						scanf("%d",&mang[i]);
					}
				printf("\n");
			break ; 
			case 2: 
				printf("In lan luot cac gia tri co trong mang:");
				for(int i =0 ; i < doDai ; i++)
				{
					printf("%d\t",mang[i]);
				}
				printf("\n");
			break ; 
			case 3 :
				//In ra gia tri cac phan tu trong mang theo dang 
				printf("Tong  cac gia tri co trong mang:");
				
				for(int i =0 ; i < doDai ; i++)
				{
					tong += mang[i];
				}
				printf("%d",tong);
				printf("\n");
			break ;
			case 4 :
				//Tim gia tri nho nhat va lon nhat trong mang
				
				for(int i = 0; i < doDai ; i++) {
        
        			for(int j = 0; j < doDai - 1 - i; j++) {
            
            			if(mang[i] > mang[i + 1]) {
                			int temp = mang[i];
                			mang[i] = mang[i + 1];
                			mang[i + 1] = temp;
            			}
        			}
				}
				printf("Gia tri lon nhat trong mnag : %d",mang[0]);
				printf("Gia tri nho nhat trong mnag : %d",mang[doDai-1]);
			break ;
			case 5 :
				
				
				printf("Nhap gia tri muon them  vao cuoi mang: ");
				scanf("%d",&giatriThem);
				
					for (int i = 0; i > doDai; i--) {
       					mang[i] = mang[i - 1];
    				}
    				mang[doDai]=giatriThem;
    				doDai++;
				 
				for(int i =0; i<doDai;i++){
					printf("%d\t", mang[i]);
				}
			break ;
			case 6 :
				
				printf("Nhap vao vi tri ban muon xoa: ");
				scanf("%d", &giatriXoa);
				if(giatriXoa <0 || giatriXoa>doDai){
					printf("So ban nhap khong hop le. Vui long thu lai!");
				}
				
				for(int i = giatriXoa; i<doDai-1;i++){
					mang[i]=mang[i+1];
				}
				doDai--; 
				for(int i =0; i<doDai;i++){
					printf("%d\t", mang[i]);
				}
				printf("\n");
			break ; 
			case 7 : 
			//Sap xep mang theo thu tu giam dan
				for(int i = 0; i < doDai ; i++) {
        
        			for(int j = 0; j < doDai - 1 - i; j++) {
            
            			if(mang[i] > mang[i + 1]) {
                			int temp = mang[i];
                			mang[i] = mang[i + 1];
                			mang[i + 1] = temp;
            			}
        			}
				}
			 	printf("\n");
			break ;
			case 8 :
			//Cho nguoi dang nhap vao mot phan tu, tim kiem xem phan tu đo co ton tai trong mang hay khong
				printf("\nMoi ban nhap phan tu muon tim :");
				scanf("%d",&giatriTim);
				
				for(int i = 0 ; i < doDai ; i++)
				{
					if(mang[i] = giatriTim)
					{
						flag = i ;
					
					}
				}	
				if(flag == -1)
					{
						printf("\nkhong tim thay");
					}
				else
					{
						printf("\nphan tu can tim nam o vi tri %d",flag);
					}
				printf("\n");
			break ;
			case 9 : 
			// In ra toan bo so nguyen to trong mang :
				
				for(int i = 0 ; i < doDai ; i++)
				{
					//int kiemTra = 0 ;
					for(int j = 2 ; j < mang[i]  ; j++)
					{
						if(mang[i]%j==0)
						{
							kiemTra = 1;
						}
					}
					if(kiemTra == 0 && mang[i]>1){
					printf("%d ",mang[i]);
					}
				}
				
				printf("\n");
			break ;
			case 10 : 
				for(int i = 0; i < doDai - 1; i++) {
        
        		int min = i;
        			for(int j = i + 1; j < doDai; j++) {
            
            			if(mang[min] > mang[j]) {
                			min = j;
            			}
        			}
        
        		int temp = mang[i];
        		mang[i] = mang[min];
        		mang[min] = temp;
    			}
    			printf("Sap xep theo thu tu tang dan :");

    			for(int i = 0; i < doDai; i++) {
        		printf("arr[%d] = %d\n", i, mang[i]);
    			}
    			printf("\n");
    		break ;
    		case 11:
    			printf("thoat.");
    			printf("\n");
    		break ;	
			
			 
		}
	}while(traLoi!=11);
	return 0 ; 
}

