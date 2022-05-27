/**
 * @file Converter.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * main - A Program that converts values inputted in one unit to
 *        values in another desired unit.
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

    TOP: //Reference point
    printf("\n----------------------------------------\n");
    //printf("----------------------------------------\n");
    Sleep(500);
    printf("Welcome to Unit Converter!\n");
    printf("Press T for Temperature Converter\n");
    printf("Press M for Mass Converter\n");
    printf("Press L for Length Converter\n");
    printf("Press X to exit program\n\t");
    scanf("%s", &category);

    switch (category)
    {
    case 'T':
        Temperature: //Reference Point
        printf("\nWelcome to Temperature Converter!\n");
        printf("Which unit do you wish to convert from?\n");
        printf("Press K for Kelvin\n");
        printf("Press C for Celsius\n");
        printf("Press F for Fahrenheit\n");
        printf("Press X to go back\n\t");
        scanf("%s", &tempUnit1);
        
        switch (tempUnit1)
        {
        case 'K':
            printf("\nInput the Kelvin value you wish to convert:\n");
            scanf("%lf", &value);
            Kelvin: // Reference point
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press C for Celsius\n");
            printf("Press F for Fahrenheit\n");
            printf("Press X to go back\n\t");
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
            else if (tempUnit2 == 'X')
            {
                goto Temperature;
            }
            else
            {
                printf("ERROR! Invalid Input!\n");
                Sleep(500);
                goto Kelvin;
            }
            break;

        case 'C':
            printf("\nInput the Celsius value you wish to convert:\n");
            scanf("%lf", &value);     
            Celsius:
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press K for Kelvin\n");
            printf("Press F for Fahrenheit\n");
            printf("Press X to go back\n\t");
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
            else if(tempUnit2 == 'X')
            {
                goto Temperature;
            }
            else
            {
                printf("ERROR! Invalid Input!\n");
                Sleep(500);
                goto Celsius;
            }
            break;
        
        case 'F':
            printf("\nInput the Fahrenheit value you wish to convert:\n");
            scanf("%lf", &value);
            Fahrenheit:
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press K for Kelvin\n");
            printf("Press C for Celsius\n");
            printf("Press X to go back\n\t");
            scanf("%s", &tempUnit2);

            if (tempUnit2 =='K')
            {
                printf("\n%0.2lf Fahrenheit gives %0.2lf Kelvin\n\n\n", value,(((5/9)*(value-32))+273.15));
                goto TOP;
            }
            else if(tempUnit2 == 'C')
            {
                printf("\n%0.2lf Fahrenheit gives %0.2lf Celsius\n\n\n", value, ((5/9)*(value-32)));
                goto TOP;
            }
            else if (tempUnit2== 'X')
            {
                goto Temperature;
            }
            else
            {
                printf("ERROR! Invalid Input!\n");
                Sleep(500);
                goto Fahrenheit;
            }
            break;
        case 'X': {
            goto TOP;
            }
            break;

        default:
            printf("ERROR! Enter Valid Temperature Unit\n");
            Sleep(500);
            goto Temperature;
            break;
        }
        break;

    case 'M':
        Mass: //Reference Point
        printf("\nWelcome to Mass Converter!\n");
        printf("Which unit do you wish to convert from?\n");
        printf("Press G for KiloGrams\n");
        printf("Press T for Tonnes\n");
        printf("Press P for Kilopounds\n");
        printf("Press X to go back\n\t");
        scanf("%s", &massUnit1);
        
        switch (massUnit1)
        {
        case 'G':
            printf("\nInput the Kilogram value you wish to convert:\n");
            scanf("%lf", &value);
            Kilograms: // Reference point
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press T for Tonnes\n");
            printf("Press P for Kilopounds\n");
            printf("Press X to go back\n\t");
            scanf("%s", &massUnit2);
            if (massUnit2 =='T')
            {
                printf("\n%0.2lf Kilograms gives %0.2lf Tonnes\n\n\n", value,(1000*(value)));
                goto TOP;
            }
            else if(massUnit2 == 'P')
            {
                printf("\n%0.2lf Kilograms gives %0.2lf Kilopounds\n\n\n", value, (453.59237*(value)));
                goto TOP;
            }
            else if (massUnit2 == 'X')
            {
                goto Mass;
            }
            else
            {
                printf("ERROR! Invalid Input!\n");
                Sleep(500);
                goto Kilograms;
            }
            break;

        case 'T':
            printf("\nInput the Tonne value you wish to convert:\n");
            scanf("%lf", &value);     
            Tonne:
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press K for Kilogram\n");
            printf("Press P for Kilopound\n");
            printf("Press X to go back\n\t");
            scanf("%s", &massUnit2);

            if (massUnit2 =='K')
            {
                printf("\n%0.2lf Tonnes gives %0.2lf Kilograms\n\n\n", value,(0.001*(value)));
                goto TOP;
            }
            else if(massUnit2 == 'P')
            {
                printf("\n%0.2lf Tonnes gives %0.2lf Kilopounds\n\n\n", value, (0.45359237*(value)));
                goto TOP;
            }
            else if(massUnit2 == 'X')
            {
                goto Mass;
            }
            else
            {
                printf("ERROR! Invalid Input!\n");
                Sleep(500);
                goto Tonne;
            }
            break;
        
        case 'P':
            printf("\nInput the Kilopound value you wish to convert:\n");
            scanf("%lf", &value);
            Kilopound: //Reference Point
            printf("\nWhich unit do you wish to convert this to?\n");
            printf("Press K for Kilogram\n");
            printf("Press T for Tonne\n");
            printf("Press X to go back\n\t");
            scanf("%s", &massUnit2);

            if (massUnit2 =='K')
            {
                printf("\n%0.2lf Kilopounds gives %0.2lf Kilograms \n\n\n", value,(0.0022046226*(value)));
                goto TOP;
            }
            else if(massUnit2 == 'T')
            {
                printf("\n%0.2lf Kilopounds gives %0.2lf Tonnes\n\n\n", value, (2.2046226218*(value)));
                goto TOP;
            }
            else if (massUnit2== 'X')
            {
                goto Mass;
            }
            else
            {
                printf("ERROR! Invalid Input!\n");
                Sleep(500);
                goto Kilopound;
            }
            break;
        case 'X': {
            goto TOP;
            }
            break;

        default:
            printf("ERROR! Enter Valid Temperature Unit\n");
            Sleep(500);
            goto Temperature;
            break;
        }
        break;


    case 'L':
        printf("Welcome to Length Converter!");
        
        break;

    case 'X':
        {
            exit(0);
        }        
        break;
    
    default:
        printf("ERROR! Enter Valid Category('T','M','L')\n\n");
        Sleep(1000);
        goto TOP;
        break;
    }

    return 0;
}