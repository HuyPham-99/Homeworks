#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>


// Câu 1: Tạo mảng bất kỳ. Ví dụ: arr[] = {1, 7, 8, 2, 3, 8, 3, 7, 6, 7, 8, 8, 2}
// Câu 2: Sắp xếp mảng theo thứ tự tăng dần.
// Câu 3: Liệt kê số lần xuất hiện của từng phần tử trong mảng. Vd: 1 xuat hien 1 lan
//                                                                  7 xuat hien 2 lan
//                                                                  8 xuat hien 3 lan


// CẤU TRÚC CỦA MẢNG
typedef struct{
    uint8_t size;       // Kích thước của mảng
    uint8_t *firstAdd;  // Vị trí đầu tiên của mảng 
}typeArray;             


//CÔNG THỨC TẠO MẢNG BẤT KỲ
int randomA(int minN, int maxN){
 return minN + rand() % (maxN + 1 - minN);
}


// HÀM TẠO MẢNG BẤT KỲ
void randomArray(typeArray *value, uint8_t length){ // Tạo con trỏ giá trị: value và biến kích thước: length
    srand((int)time(0));                            // Hàm void srand cung cấp seed cho bộ sinh số ngẫu nhiên được sử dụng bởi hàm rand.
    value->size = length; 
    printf("Size of array: ");                      // Nhập kích thước mảng mong muốn
    scanf("%d", &length);
    value->firstAdd = (uint8_t *)malloc(sizeof(uint8_t)*value->size); // Cấp phát động cho biến kích thước
    for(int i = 0; i < value->size; ++i)
    {
        value->firstAdd[i] = randomA(0,length);
    }    
}

// HÀM SẮP XẾP MẢNG TĂNG DẦN
void sortArray(typeArray*arr){
    printf("Incrementally sorted array: "); 
    uint8_t intermediaries;                 // Biến đếm tăng dần của mảng
    for (int i = 0; i < arr->size; i++)
    {
        for (int j = i + 1; j < arr->size; j++)
        {
            if (arr->firstAdd[j] < arr->firstAdd[i]) //Nếu giá trị của biến tạm bé hơn giá trị của biến thực tại vị trí tương ứng thì
            {
                uint8_t intermediaries = arr->firstAdd[j];  // Gán biến tạm 
                arr->firstAdd[j] = arr->firstAdd[i];        // So sánh hai số liền kề nhau trong một mảng bất kỳ.
                arr->firstAdd[i] = intermediaries;          // Trong hai số được so sánh thì số nào lớn hơn thì đổi vị trí với số nhỏ hơn
            }
            
        }
        printf("%d ",arr->firstAdd[i],i); 
    }
}


// HÀM ĐẾM SỐ LẦN XUẤT HIỆN CỦA TỪNG PHẦN TỬ TRONG MẢNG BẤT KỲ
void countArray1(typeArray *arr){
    printf("\nNumbers  Number of appearances\n"); // In ra giá trị của phần tử trong mảng và số lần xuất hiện của từng phần tử
    int count = 0; // Khởi tạo biến đếm 
    int i; // khởi tạo biến vị trí
    for (i = 0; i < arr->size; i++)
    {
        if(arr->firstAdd[i] == arr->firstAdd[i + 1]) { // Nếu tại vị trí đang xét bằng với vị trí khởi tạo cộng cho 1 thì
            count++; // Tăng biến đếm lên 1
        }
        else { // Trường hợp vị trí cần xét không bằng với vị trí khởi tạo thì cho số lần xuất hiện của phần tử đó là 1
            printf("%d \t %d\n", arr->firstAdd[i], count); 
            count = 1;
        }
    }
    
}


// HÀM HIỂN THỊ KẾT QUẢ
void Showresults(typeArray *arr){
    printf("\n++++++ KQ ++++++\n");
    int i;
    for (int i = 0; i < arr->size; i++)
    {
        printf("\narr[%d] = %d\n",i, arr->firstAdd[i]);
    }
    
}


int main(int argc, char const *argv[])
{
    typeArray arr;
    randomArray(&arr, 10); // Hàm tạo mảng bất kỳ 
    Showresults(&arr); // Hàm hiển thị kết quả
    sortArray(&arr); // Hàm sắp xếp mảng tăng dần
    countArray1(&arr); // Hàm đếm số lần xuất hiện của từng phần tử
    free(arr.firstAdd); 
    return 0;
}
