// chi su dung thu vien stdio
// viet mot chuoi dao nguoc
// in hoa chu cai dau tien sau dam cham
// chuyen tat ca doan van thanh chu thuong
// chuyen doi tat ca cac chu thuong thanh chu hoa

#include <stdio.h>
char s1[] ="The Grammy award-winning singer. who has been less active on digital platforms in recent weeks. explained her decision to distance herself from social media platforms during an appearance on the Conan OBrien Needs a Friend podcast, alongside her brother Finneas";


int main() {
   
   int length = 0; // length: chiều dài

   // CHUỖI BAN ĐẦU
   printf("\n\nOriginal: ");
   printf("%s", s1);

   // TÍNH CHIỀU DÀI CỦA CHUỖI
   while(s1[length] != '\0') // '\0' la ky tu NULL ket thuc cua mot chuoi
   {
      length++; 
   }

   char tmp[length];// Tạo mảng tạm thời gán giá trị cho chuỗi



   
   //IN CHUỖI THEO CHIỀU ĐẢO NGƯỢC
   int j = 0;
   int dem = 0;
    for(int i = length; i >= 0; i--){ // Duyệt từng ký tự bắt đầu từ cuối chuỗi
      if (i == length || i == length - 1) //Xử lý ký tự '\0' bằng cách bỏ qua
      continue;

      // Đếm số lượng ký tự mình đi qua
      dem++; 
      
      // Khi gặp khoảng trắng, thực hiện sao chép từ chuỗi qua mảng 
      if (s1[i] == ' '){ 
         for(int k = i; k < i + dem; k++){
            tmp[j] = s1[k + 1];
            j++;
         }
            tmp[j-1] = ' ';
            dem = 0;
      }
      
      // Xử lý từ ở đầu câu
        if (i == 0){ 
            for(int k = i; k < i + dem; k++){
                tmp[j] = s1[k];
                j++;
            }
        }

   }
   tmp[length - 1] = '\0';
   printf("\n\nReverse: %s", tmp);

 


   // ĐỔI CÁC CHỮ IN THƯỜNG THÀNH IN HOA
   for(int i = 0; i < length ; i++)
    {
      if (i == length || i == length - 1) //Xử lý ký tự '\0' bằng cách bỏ qua
      continue;
      if (s1[i] >= 97 && s1[i] <= 122)// VD: 'a' cách 'A' 32 đơn vị theo bảng mã ASCII
      {
         tmp[i] = (s1[i] - 32);//Chuyển đổi từng vị trí theo bảng mã ASCII 
      }
      else tmp[i] = s1[i]; //Trường hợp các ký tự không nằm trong vùng từ 97 đến 122 theo bảng mã ASCII
	}
	printf("\n\nUpercases: %s", tmp);


   // ĐỔI CÁC CHỮ IN HOA THÀNH IN THƯỜNG
   for(int i = 0; i < length ; i++)
   {
      if (i == length || i == length - 1) //Xử lý ký tự '\0' bằng cách bỏ qua
      continue;
      if (s1[i] >= 65 && s1[i] <= 90)// TVD: 'A' cách 'a' 32 đơn vị theo bảng mã ASCII
      {
         tmp[i] = (s1[i] + 32); //Chuyển đổi từng vị trí theo bảng mã ASCII 
      }
      else tmp[i] = s1[i]; //Trường hợp các ký tự không nằm trong vùng từ 65 đến 90 theo bảng mã ASCII
	}
   printf("\n\nLowercases: %s", tmp);

   

   // IN HOA CHỮ CÁI SAU DẤU CHẤM
   int theperiod; // thepreiod: dấu chấm
   
   for(int i=0; i <= length; i++)
   {  
      if (i == length || i == length - 1) //Xử lý ký tự '\0' bằng cách bỏ qua
      continue;
      if (theperiod == 1) // Nếu có xuất hiện dấu chấm
      {
         if((s1[i] >= 97 && s1[i] <= 122)) // Kiểm tra có các chữ cái in hoa không
         {
         tmp[i] = (s1[i] - 32); //Chuyển cả chuỗi ký tự về trạng thái in hoa
         theperiod = 0; // Sau đó gán cho theperiod = 0 <-> không xuất hiện dấu chấm
         continue;// Dùng câu lệnh continue để tiếp tục chương trình
         }
      }
      tmp[i] = s1[i]; // Cho chuỗi tạm thời bằng với chuỗi ban đầu
      if(s1[i] == '.') //kiểm tra chuỗi có xuất hiện dấu chấm không
      {
         tmp[i] = s1[i]; // Cho chuỗi tạm thời bằng với chuỗi ban đầu
         theperiod = 1; // Cho dấu chấm = 1 <-> dấu chấm được hiển thị trong chuỗi
      }
   }
   printf("\n\nUperafterperiod: %s", tmp);
   

   return 0;

 }
   





