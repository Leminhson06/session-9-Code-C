#include <stdio.h>

int main(){
    //them phan tu vao trong mang

    // khai bao 1 mang bat ki
    int arr[100]={1,2,4,5,6};
    //arr[15]=15;
    //them(chen) vao vi tri thu 2, mot phan tu co gia tri la 3:
    // 1,2,3,4,5,6;

    // y tuong lam:
    // Khai bao mang so nguyen gom 100 phan tu:
    int numbeOf;
    //Nhap vi tri muon chen:
    
    //Nhap gia tri:
    for(int i=4; i>index; i--){
        arr[i]=arr[i-1];  
    }
    //in ra ket qua:
    for (int i=0;i<6;i++){
        printf("%d\n", arr[i]);        
    }               
    arr[2]=3;
    // in ra kết quả:
    for(int i=0;i<6;i++) {
        printf("%d\n",arr[i]);
    }                                                                                                                                                       
                                                                                                   
    return 0;
}                                                  