/**
 * @file Converter.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * main - A Program that converts values input in one unit to
 *        values in another unit.
 * @date 2022-05-27
 */

#include <stdio.h>
#include <windows.h>

int main ()
{
    char category;
    char tempUnit1; //The initial temperature unit input
    char tempUnit2; // The final temperature unit output
    char massUnit1; //The initial mass unit input
    char massUnit2; //The final mass unit output
    char lengthUnit1; //The initial length unit input
    char lengthUnit2; //The final length unit output
    double value;
    
    system("cls");

    TOP:
    printf("----------------------------------------\n");
    //printf("----------------------------------------\n");
    printf("Welcome to Unit Converter!\n");
    printf("Press T for Temperature Converter\n");
    printf("Press M for Mass Converter\n");
    printf("Press L for Length Converter\n\t");
    scanf("%s", &category);

    switch (category)
    {
    case 'T':
        printf("\nWelcome to Temperature Converter!\n");
        printf("Which unit do you wish to convert from?\n");
        printf("Press K for Kelvin\n");
        printf("Press C for Celsius\n");
        printf("Press F for Fahrenheit\n\t");
        scanf("%s", &tempUnit1);
        printf("\nInput the value you want to convert:\n");
        scanf("%lf", &value);
        
        switch (tempUnit1)
        {
        case 'K':
            K_Start:
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press C for Celsius\n");
            printf("Press F for Fahrenheit\n\t");
            scanf("%s", &tempUnit2);
            if (tempUnit2 =='C')
            {
                printf("\n%0.2lf Kelvin gives %0.2lf Celsius\n\n\n", value,(value-273.15));
                goto TOP;
            }
            else if(tempUnit2 == 'F')
            {
                printf("\n%0.2lf Kelvin gives %0.2lf Fahrenheit\n\n\n", value, ((9/5)*(value-273.15)));
                goto TOP;
            }
            else
            {
                printf("ERROR! Enter Valid Temperature Unit\n");
                Sleep(500);
                goto K_Start;
            }
            break;

        case 'C':
            C_Start:
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press K for Kelvin\n");
            printf("Press F for Fahrenheit\n\t");
            scanf("%s", &tempUnit2);

            if (tempUnit2 =='K')
            {
                printf("\n%0.2lf Celsius gives %0.2lf Kelvin\n\n\n", value,(value+273.15));
                goto TOP;
            }
            else if(tempUnit2 == 'F')
            {
                printf("\n%0.2lf Celsius gives %0.2lf Fahrenheit\n\n\n", value, (((9/5)*value)+32));
                goto TOP;
            }
            else
            {
                printf("ERROR! Enter Valid Temperature Unit\n");
                Sleep(500);
                goto C_Start;
            }
            break;
        
        case 'F':
            F_Start:
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press K for Kelvin\n");
            printf("Press C for Celsius\n\t");
            scanf("%s", &tempUnit2);

            if (tempUnit2 =='K')
            {
                printf("\n%0.2lf Fahrenheit gives %0.2lf Kelvin\n\n\n", value,(((5/9)*(value-32))+273.15));
                goto TOP;
            }
            else if(tempUnit2 == 'C')
            {
                printf("\n%0.2lf Fahrenheit gives %0.2lf Celsius\n\n\n", value, ((9/5)*(value-273.15)));
                goto TOP;
            }
            else
            {
                printf("ERROR! Enter Valid Temperature Unit\n");
                Sleep(500);
                goto F_Start;
            }
            break;
        
        default:
            break;
        }
        
        
        break;

    case 'M':
        printf("Welcome to Mass Converter!");
        
        break;

    case 'L':
        printf("Welcome to Length Converter!");
        
        break;
    
    default:
        printf("ERROR! Enter Valid Category('T','M','L')\n\n");
        Sleep(1000);
        goto TOP;
        break;
    }

    return 0;
}