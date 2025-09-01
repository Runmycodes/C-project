#include <stdio.h>
#include <stdlib.h>
#include <string.h> //for memset
#include <math.h> //for pow
#include <ctype.h>
#include <windows.h> //for Sleep



//things to make:
//binary to decimal !
//deciaml to binary !

//binary to hex !
//hex to binary !

//decimal to hex !
//hex to decimal !

//binary to octal !
//octal to binary !

//octal to hex!
//hex to octal!

//octal to decimal
//decimal to octal

typedef char string;
typedef char letter;
typedef int num;
typedef int arr;

int wholenumforhex(int a, int b, int c, int d)
{
    while(1)
    {
        
    }
}

int binartodec(int binar)
{

        num count = 0, sum = 0;
        do{
            if(binar%10 == 1)
                sum += pow(2, count);
            ++count;
            binar = binar/10;
        }while(binar !=0);

        return sum;
}

int dectobinar(int deci, int binary[])
{

        num check = 1;
        for(num i = 0; 1; i++){
            if(deci == 0)
                break;
            binary[i] = deci%2;
            deci = deci/2;
            ++check;
        }

        return check;
}

int decitohex(int deci, int hold[])
{
    num numb = 0;
    for(int i = 0; 1; i++){
        if(deci == 0)
            break;
        hold[i] = deci%16;
        deci /= 16;
        ++numb;
    }

    return numb;
}

int binartohex(int binar, int hold[])
{

    num deci = binartodec(binar);

    return decitohex(deci, hold);

    
}

int hexatodeci(letter hexhold[], num count)
{
    num sum = 0;
    for(num i = 0; 1; i++){

        if(hexhold[i] == '\0')
            break;

        if(toupper(hexhold[i]) == 'A')
            sum += 10 * pow(16, count);
        else if(toupper(hexhold[i]) == 'B')
            sum += 11 * pow(16, count);
        else if(toupper(hexhold[i]) == 'C')
            sum += 12 * pow(16, count);
        else if(toupper(hexhold[i]) == 'D')
            sum += 13 * pow(16, count);
        else if(toupper(hexhold[i]) == 'E')
            sum += 14 * pow(16, count);
        else if(toupper(hexhold[i]) == 'F')
            sum += 15 * pow(16, count);
        else
            sum+= (hexhold[i] - '0') * pow(16, count) ;

        count -= 1;
    }

    return sum;
}

int decitoocta(arr octa[], num deci)
{
    num counter = -1; //u can set i = counter
    for(num i = 0; 1; i++){
        if(deci == 0 && i ==0){
            octa[i] = deci;
            ++counter;
            break;
        }
        if(deci == 0)
            break;
        octa[i] = deci%8;
        deci /= 8;
        ++counter;
    }
    return counter;
}

int octatodeci(int octal){
    int deci = 0, temp = 0;
    while(1){
        if(octal*1 == 0)
            break;
        deci += (octal%10)*pow(8, temp);
        ++temp;
        octal /= 10;
    }

    return deci;
}

int main() //binary to decimal
{
    num pick;
    do{
    printf("What do you wish to do? (Choose a number)\n");
    printf("1. Binary to Decimal\n2. Number to Binary\n3. Binary to Hexadecimal\n4. Hexadecimal to Binary\n5. Number to Hexadecimal\n");
    printf("6. Hexadecimal to Decimal\n7. Binary to Octal\n8. Octal to Binary\n9. Octal to Hexadecimal\n10. Hexadecimal to Octal\n");
    printf("11. Octal to decimal\n12. Decimal to Octal\n13. Nothing!\n");
    scanf("%d", &pick);

    while (pick < 1 || pick > 13) //change this
    {
        printf("Enter a number that is from 1-9!\n");
        scanf("%d", &pick);
    }
    
    num binar;
    num deci;
    arr binary[100];
    memset(binary, 0, sizeof(binary));
    string hexa[100];
    arr octa[100];
    memset(octa, 0, sizeof(octa));

    switch (pick)
    {
        case 1:
            getchar();
            printf("Enter your binary code:\n");
            scanf("%d", &binar);
            num sum = binartodec(binar);
            printf("The decimal number is: %d\n\n", sum);
            break;

        case 2:
            getchar();
            printf("Enter a positive number: ");
            scanf("%d", &deci);

            while(deci < 0){
                printf("Enter a positive number!\n");
                scanf("%d", &deci);
            }

            num check = dectobinar(deci, binary);
            printf("The binary equivalent is:\n");
            for(num i = 0; i < check; i++){
                printf("%d", binary[check-1-i]);
            }
            memset(binary, 0, sizeof(binary));
            printf("\n\n");

            break;

        case 3:
            getchar();
            printf("Enter your binary code: \n");
            scanf("%d", &binar);
            int hold[] = {0};
            int numb = binartohex(binar, hold);

            printf("The hexadecimal equivalent is:\n");
            for(num i = numb-1; i >= 0; i--){
                if(hold[i] == 10)
                    printf("A");
                else if(hold[i] == 11)
                    printf("B");
                else if(hold[i] == 12)
                    printf("C");
                else if(hold[i] == 13)
                    printf("D");
                else if(hold[i] == 14)
                    printf("E");
                else if(hold[i] == 15)
                    printf("F");
                else
                    printf("%d", hold[i]);
            }

            printf("\n\n");

            break;

        case 4:
            getchar();
            printf("Enter your hexadecimal value (must be from 0-9 & A-F): \n");
            memset(hexa, 0, sizeof(hexa));
            fgets(hexa, sizeof(hexa), stdin);
            hexa[strcspn(hexa, "\n")] = '\0';

            int x=0;
            for(int i = 0; 1; i++){ //checking if input valid
                if(hexa[i] == '\0')
                    break;
                if( toupper(hexa[i]) < 48 || (toupper(hexa[i]) < 65 && toupper(hexa[i]) >57) || toupper(hexa[i]) > 70)
                    ++x;
            }

            while(strcmp(hexa, "") == 0 || x != 0){
                printf("Do not leave it empty and input within given range!\n");
                fgets(hexa, sizeof(hexa), stdin);
                hexa[strcspn(hexa, "\n")] = '\0';

                x = 0;
                for(num i = 0; 1; i++){
                    if(hexa[i] == '\0')
                        break;
                    if( toupper(hexa[i]) < 48 || (toupper(hexa[i]) < 65 && toupper(hexa[i]) >57) || toupper(hexa[i]) > 70)
                        ++x;
                }
            }

            letter hexhold[100];
            memset(hexhold, 0, sizeof(hexhold));

            num count = -1;
            for(num i = 0; 1; i++){ //copying to array the elements
                if(hexa[i] == '\0')
                    break;
                hexhold[i] = hexa[i];
                ++count;
            }

            deci = hexatodeci(hexhold, count);

            num checkk = dectobinar(deci, binary);
            printf("The binary equivalent is:\n");
            for(num i = 0; i < checkk; i++){
                printf("%d", binary[checkk-1-i]);
            }
            memset(binary, 0, sizeof(binary));

            printf("\n\n");

            break;

        case 5:
            getchar();
            printf("Enter your number:\n");
            scanf("%d", &deci);

            int holdh[100];
            memset(holdh, 0, sizeof(holdh));

            num numbe;
            numbe = decitohex(deci, holdh);

            printf("The hexadecimal is: ");
            for(num i = numbe-1; i>= 0; i--){
                if(holdh[i] == 10)
                    printf("A");
                else if(holdh[i] == 11)
                    printf("B");
                else if(holdh[i] == 12)
                    printf("C");
                else if(holdh[i] == 13)
                    printf("D");
                else if(holdh[i] == 14)
                    printf("E");
                else if(holdh[i] == 15)
                    printf("F");
                else
                    printf("%d", holdh[i]);
            }

            printf("\n\n");
            break;

        case 6: 
            getchar();
            printf("Enter your hexadecimal value (must be from 0-9 & A-F): \n");
            memset(hexa, 0, sizeof(hexa));
            fgets(hexa, sizeof(hexa), stdin);
            hexa[strcspn(hexa, "\n")] = '\0';

            int y=0;
            for(int i = 0; 1; i++){ //checking if input valid
                if(hexa[i] == '\0')
                    break;
                if( toupper(hexa[i]) < 48 || (toupper(hexa[i]) < 65 && toupper(hexa[i]) >57) || toupper(hexa[i]) > 70)
                    ++y;
            }

            while(strcmp(hexa, "") == 0 || y != 0){
                printf("Do not leave it empty and input within given range!\n");
                fgets(hexa, sizeof(hexa), stdin);
                hexa[strcspn(hexa, "\n")] = '\0';

                y = 0;
                for(num i = 0; 1; i++){
                    if(hexa[i] == '\0')
                        break;
                    if( toupper(hexa[i]) < 48 || (toupper(hexa[i]) < 65 && toupper(hexa[i]) >57) || toupper(hexa[i]) > 70)
                        ++y;
                }
            }

            letter hexahold[100];
            memset(hexahold, 0, sizeof(hexahold));

            num counti = -1;
            for(num i = 0; 1; i++){
                if(hexa[i] == '\0')
                    break;
                hexahold[i] = hexa[i];
                ++counti;
            }

            deci = hexatodeci(hexahold, counti);
            printf("The decimal value is: %d", deci);

            printf("\n\n");

            break;

        case 7:
            printf("Enter binary value: \n");
            scanf("%d", &binar);

            deci = binartodec(binar);

            num counte;
            counte = decitoocta(octa, deci);

            printf("The octal equivalent is: ");
            for(int i = counte; i>= 0; i--){
                printf("%d", octa[i]);
            }

            printf("\n\n");

            break;
        case 8: //octal to binary
            int octal;
            printf("Enter the octal value(0-7): ");
            scanf("%d", &octal);

            deci = octatodeci(octal);

            num checkkk = dectobinar(deci, binary);
            printf("The binary equivalent is:\n");
            for(num i = 0; i < checkkk; i++){
                printf("%d", binary[checkkk-1-i]);
            }
            memset(binary, 0, sizeof(binary));
            printf("\n\n");

            break;
        case 9:
            printf("Enter the octal value(0-7): ");
            int octall;
            scanf("%d", &octall);

            deci = octatodeci(octall);

            int holdd[100];
            memset(holdd, 0, sizeof(holdd));

            num number;
            number = decitohex(deci, holdd);

            printf("The hexadecimal is: ");
            for(num i = number-1; i>= 0; i--){
                if(holdd[i] == 10)
                    printf("A");
                else if(holdd[i] == 11)
                    printf("B");
                else if(holdd[i] == 12)
                    printf("C");
                else if(holdd[i] == 13)
                    printf("D");
                else if(holdd[i] == 14)
                    printf("E");
                else if(holdd[i] == 15)
                    printf("F");
                else
                    printf("%d", holdd[i]);
            }

            printf("\n\n");

            break;
        case 10:
            printf("Enter the hexadecimal value(0-9 & A-F): ");
            getchar();
            fgets(hexa, sizeof(hexa), stdin);
            hexa[strcspn(hexa, "\n")] = '\0';

            letter hexaahold[100];
            memset(hexaahold, 0, sizeof(hexaahold));
            num counter = -1;
            for(num i = 0; 1; i++){
                if(hexa[i] == '\0')
                    break;
                hexaahold[i] = hexa[i];
                ++counter;
            }
            hexaahold[counter+1] = '\0';

            deci = hexatodeci(hexaahold, counter);

            counter = decitoocta(octa, deci);

            printf("The octal equivalent is: ");
            for(int i = counter; i>= 0; i--){
                printf("%d", octa[i]);
            }

            printf("\n\n");
            break;
        case 11:
            printf("Enter the octal value(0-7): ");
            int octel;
            scanf("%d", &octel);

            deci = octatodeci(octel);
            printf("The decimal equivalent is: %d", deci);
            printf("\n\n");

            break;
        case 12:
            printf("Enter a decimal value: ");
            scanf("%d", &deci);

            num counting;
            counting = decitoocta(octa, deci);

            printf("The octal equivalent is: ");
            for(int i = counting; i>= 0; i--){
                printf("%d", octa[i]);
            }

            printf("\n\n");

            break;

        default:
            break;
    }

    }while(pick != 13); //change this

    printf("\nThank you for using this calculator!\n");

    return 0;
}
