#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <conio.h>

// CAU TRUC CUA TUNG DON VI
// void Millions(uint8_t hangtrieu)
// {
//     switch(hangtrieu){
//         case 0:
//             break;
//         case 1:
//             printf("Mot trieu");
//             break;
//         case 2:
//             printf("Hai trieu");
//             break;
//         case 3:
//             printf("Ba trieu");
//             break;
//         case 4:
//             printf("Bon trieu");
//             break;
//         case 5:
//             printf("Nam trieu");
//             break;
//         case 6:
//             printf("Sau trieu");
//             break;
//         case 7:
//             printf("Bay trieu");
//             break;
//         case 8:
//             printf("Tam trieu");
//             break;
//         case 9:
//             printf("Chin trieu");
//             break;
//         default:
//         printf("\n");
//         break;  
//     }
// }
// void Hundredsofthousands(uint8_t n)
// {
//     switch(n){
//         case 0: // Truong hop nay chua thoa man dieu kien mong anh Vu huong dan
//             // if (n-(n/1000000)*10 != 0)
//             // {
//             //     break;
//             // }
//             // else if (n == 0)
//             // {
//             //     printf("khong tram");
//             //     break;
//             // }
//             printf("khong tram");
//             break;
//         case 1:
//             printf("mot tram");
//             break;
//         case 2:
//             printf("hai tram");
//             break;
//         case 3:
//             printf("ba tram");
//             break;
//         case 4:
//             printf("bon tram");
//             break;
//         case 5:
//             printf("nam tram");
//             break;
//         case 6:
//             printf("sau tram");
//             break;
//         case 7:
//             printf("bay tram");
//             break;
//         case 8:
//             printf("tam tram");
//             break;
//         case 9:
//             printf("chin tram");
//             break;
//         default:
//         printf("\n");
//         break;  
//     }
// }

// void Tensofthousands(uint8_t hangchucngan)
// {
//     switch(hangchucngan){
//         case 0:
//             break;
//         case 1:
//             printf("muoi");
//             break;
//         case 2:
//             printf("hai muoi ngan");
//             break;
//         case 3:
//             printf("ba muoi ngan");
//             break;
//         case 4:
//             printf("bon muoi ngan");
//             break;
//         case 5:
//             printf("nam muoi ngan");
//             break;
//         case 6:
//             printf("sau muoi ngan");
//             break;
//         case 7:
//             printf("bay muoi ngan");
//             break;
//         case 8:
//             printf("tam muoi ngan");
//             break;
//         case 9:
//             printf("chin muoi ngan");
//             break;
//         default:
//         printf("\n");
//         break;  
//     }
// }

// void Thousands(uint8_t hangnghin)
// {
//     switch(hangnghin){
//         case 0:
//             printf("nghin\n");
//             break;
//         case 1:
//             printf("mot nghin");
//             break;
//         case 2:
//             printf("hai nghin");
//             break;
//         case 3:
//             printf("ba nghin");
//             break;
//         case 4:
//             printf("bon nghin");
//             break;
//         case 5:
//             printf("nam nghin");
//             break;
//         case 6:
//             printf("sau nghin");
//             break;
//         case 7:
//             printf("bay nghin");
//             break;
//         case 8:
//             printf("tam nghin");
//             break;
//         case 9:
//             printf("chin nghin");
//             break;
//         default:
//             printf("\n");
//         break;  
//     }
// }

// void Hundreds(uint8_t hangtram)
// {
//     switch(hangtram){
//         case 0:
//             break;
//         case 1:
//             printf("mot tram");
//             break;
//         case 2:
//             printf("hai tram");
//             break;
//         case 3:
//             printf("ba tram");
//             break;
//         case 4:
//             printf("bon tram");
//             break;
//         case 5:
//             printf("nam tram");
//             break;
//         case 6:
//             printf("sau tram");
//             break;
//         case 7:
//             printf("bay tram");
//             break;
//         case 8:
//             printf("tam tram");
//             break;
//         case 9:
//             printf("chin tram");
//             break;
//         default:
//         printf("\n");
//         break;  
//     }
// }

// void Dozens(uint8_t hangchuc)
// {
//     switch(hangchuc){
//         case 0:
//             break;
//         case 1:
//             printf("muoi");
//             break;
//         case 2:
//             printf("hai muoi");
//             break;
//         case 3:
//             printf("ba muoi");
//             break;
//         case 4:
//             printf("bon muoi");
//             break;
//         case 5:
//             printf("nam muoi");
//             break;
//         case 6:
//             printf("sau muoi");
//             break;
//         case 7:
//             printf("bay muoi");
//             break;
//         case 8:
//             printf("tam muoi");
//             break;
//         case 9:
//             printf("chin muoi");
//             break;
//         default:
//         printf("\n");
//         break;  
//     }
// }

// void Unitrows(uint8_t hangdonvi)
// {
//     switch(hangdonvi){
//         case 0:
//             break;
//         case 1:
//             printf("mot");
//             break;
//         case 2:
//             printf("hai");
//             break;
//         case 3:
//             printf("ba");
//             break;
//         case 4:
//             printf("bon");
//             break;
//         case 5:
//             printf("nam");
//             break;
//         case 6:
//             printf("sau");
//             break;
//         case 7:
//             printf("bay");
//             break;
//         case 8:
//             printf("tam");
//             break;
//         case 9:
//             printf("chin");
//             break;
//         default:
//         printf("linh\n");
//         break;  
//     }
// }



// Cach doc tai tung vi tri cua mang
void vitri(uint8_t num) 
{
    switch (num) 
    {
        case 0:
            printf("khong ");
            break;
        case 1:
            printf("mot ");
            break;
        case 2:
            printf("hai ");
            break;
        case 3:
            printf("ba ");
            break;
        case 4:
            printf("bon ");
            break;
        case 5:
            printf("nam ");
            break;
        case 6:
            printf("sau ");
            break;
        case 7:
            printf("bay ");
            break;
        case 8:
            printf("tam ");
            break;
        case 9:
            printf("chin ");
            break;
        default:
            printf("");
            break;
        
    }
}

// // Gia tri thap phan cua tung vi tri
void sothapphan(uint8_t num) 
{
    switch (num) 
    {
        case 0:
            printf("trieu ");
            break;
        case 1:
        case 4:
            printf("tram ");
            break;
        case 2:
        case 5:
            printf("muoi ");
            break;
        case 3:
            printf("nghin ");
            break;
    }
}




// // Ham doc vi tri
void docvitri(uint8_t Arr[]) {
    //Chi giai quyet duoc khi nhap so bay chu so va chua giai quyet triet de khi arr[i] co so 0
    for (int i = 0; i < 7; i++) //vong lap duyet qua cac phan tu o trong mang
    { 
        if (Arr[i] != 0) // truong hop khac 0 thi doc vi tri roi doc ra gia tri so thap phan 
        {
            vitri(Arr[i]); // truong hop khi day so la 1111111 thi chua giai quyet duoc```````
            sothapphan(i);
        }
        if (Arr[2] == 0 && Arr[3] == 0 && Arr[4] == 0 && Arr[5] == 0)
        {
            continue;
        }
        else if ((i == 1 || i == 4) && (Arr[i] == 0)) // neu tai vi tri arr[1] và arr[4] == 0 thi doc la khong tram
        {
            printf("khong tram ");
        }
        else if ((i == 2 || i == 5) && (Arr[i] == 0)) // neu tai vi tri arr[2] và arr[5] == 0 thi doc la linh
        {
            printf("linh ");
        } 
    }
}


int main(int argc, char const *argv[])
{
    //Nhap n can doc
    //sử dụng do..while để yêu cầu người dùng nhập du lieu vào 
    //nếu nhập khác thì yêu cầu nhập lại
    uint32_t num;
    uint32_t Max = 10000000;
    uint8_t Arr[7];
    do
    {
        printf("Nhap gia tri cua n: ");
        scanf("%u", &num);
    } while (num < 0 || num >= Max);// neu lon hon dieu kien while thi nhap lai n
    for (int i = 6; 0 <= i; i--) 
    {
        Arr[i] = num % 10; //Tach cac so lan luot o hang trieu, tram nghin, chuc nhin, hang nghin, hang tram, hang chuc, hang don vi
        num = num / 10;
    }
    printf("Cach doc cua day so la: ");
    docvitri(Arr);
    
   

    // Cach 2(Cach em chua toi uu duoc phan dieu kien mong anh vu huong dan)


    // Nhap n can doc
    // sử dụng do..while để yêu cầu người dùng nhập du lieu vào 
    // nếu nhập khác thì yêu cầu nhập lại
    // unsigned int n;
    // do
    // {
    //     printf("Nhap gia tri cua n: ");
    //     scanf("%u", &n);
    // } while (n < 0 || n > 10000000);
    

    
    // //Tach cac so lan luot o hang trieu, tram nghin, chuc nhin, hang nghin, hang tram, hang chuc, hang don vi
    // unsigned million = n/1000000;
    // unsigned hundredthousands=(n/100000)%10;
    // unsigned tensofthousands=(n/10000)%10;
    // unsigned thousand=(n/1000)%10;
    // unsigned hundreds=(n/100)%10;
    // unsigned ten=(n/10)%10;
    // unsigned unit=n%10;

    // // Doc cac so vua tach o tren
    
    // Millions(million);                      printf(" ");
    // Hundredsofthousands(hundredthousands);  printf(" ");
    // Tensofthousands(tensofthousands);       printf(" ");
    // Thousands(thousand);                    printf(" ");
    // Hundreds(hundreds);                     printf(" ");
    // Dozens(ten);                            printf(" ");
    // Unitrows(unit);                         printf(" ");


    getch();
    return 0;
    
}