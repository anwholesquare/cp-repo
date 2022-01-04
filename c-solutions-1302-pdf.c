QUESTION A1:
Solution:

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char roll_number[50];
    char name[200];
    float marks;
    char phone[15];
    
    printf("Please enter your roll number: \n");
    fgets(roll_number, 50, stdin);
    
    printf("Please enter your name: \n");
    fgets(name, 200, stdin);
    
    printf("Please enter your mark: \n");
    scanf("%f", &marks);
    
    fflush(stdin);
    printf("Please enter your phone number: \n");
    scanf("%s", phone);
    
    printf("\nRoll: %s\nName: %s\nMarks: %f\nPhone: %s", roll_number, name, marks, phone);
    
    return 0;
}





Question A2:
Solution:

#include <stdio.h>

int main()
{
    char roll_number[50];

    float mark1, mark2, mark3, mark4, mark5;
    int i = 0;
    printf("Please enter your roll number: ");
    while(roll_number[i-1] != '\n'){
        scanf("%c", &roll_number[i]);
        i++;
    }

    printf("Please enter your name: \n");
    char student_name[200];
    i = 0;
    while(student_name[i-1] != '\n'){
        scanf("%c", &student_name[i]);
        i++;
    }
    
    printf("Please enter your mark of Subject 1: \n");
    scanf("%f", &mark1);
    
    printf("Please enter your mark of Subject 2: \n");
    scanf("%f", &mark2);
    
    printf("Please enter your mark of Subject 3: \n");
    scanf("%f", &mark3);
    
    printf("Please enter your mark of Subject 4: \n");
    scanf("%f", &mark4);
    
    printf("Please enter your mark of Subject 5: \n");
    scanf("%f", &mark5);
    
    float avg = (mark1+ mark2+ mark3 + mark4 + mark5) / 5;
    
    printf("\nRoll: %s\nName: %s\nMark1: %f\nMark2: %f\nMark3: %f\nMark4: %f\nMark5: %f\nTotal Mark: %f\nAverage Mark: %f\n", roll_number, student_name, mark1, mark2, mark3, mark4, mark5, (mark1+ mark2+ mark3 + mark4 + mark5), avg);
    
    
    return 0;
}


Question A3:
Solution:


#include <stdio.h>

int main()
{
    float number = 0.0;
    printf("Please Enter a Number: ");
    scanf("%f", &number);
    
    printf("Square of the given number is %.2f\n", number*number);
    

    return 0;
}



Question A4:
Solution:


#include <stdio.h>

int main()
{
    float number = 0.0;
    printf("Please Enter a Number: ");
    scanf("%f", &number);
    
    printf("Cube of the given number is %.2f\n", number*number*number);
    

    return 0;
}


Question A5:
Solution:

#include <stdio.h>

int main()
{
    float Radius = 0.0;
    printf("Please Enter a Radius of a circle: ");
    scanf("%f", &Radius);
    
    printf("Area: %.2f sq unit\nCircumference: %.2f unit\n", (3.14*Radius*Radius), (2*3.14*Radius));
   



    return 0;
}


Question A6:
Solution:

#include <stdio.h>

int main()
{
    float length, breadth = 0.0;
    printf("Please Enter a length of a rectangle: ");
    scanf("%f", &length);
    
    printf("Please Enter a breadth of a rectangle: ");
    scanf("%f", &breadth);
    
    printf("Area: %.2f sq unit\nCircumference: %.2f unit\n", length*breadth, 2*(length+breadth));
    

    return 0;
}



Question A7:
Solution:

#include <stdio.h>

int main()
{
    int x, y , z, w = 0;
    printf("a: ");
    scanf("%d", &x);
    
    printf("b: ");
    scanf("%d", &y);
    
    printf("c: ");
    scanf("%d", &z);
    
    printf("d: ");
    scanf("%d", &w);
    
    if( ((x*x*x) + (y*y*y) + (z*z*z)) == (w*w*w) ){
        printf("Equation is satisfied!");
    }else{
        printf("Equation isn't satisfied!");
    }

    return 0;
}



Question A8:
Solution:

#include <stdio.h>

int main()
{
    float side = 0.0;
    printf("please enter a side of a square: ");
    scanf("%f", &side);
    
    printf("Area: %.2f sq unit\n", side* side);
    
    

    return 0;
}



Question A9:
Solution:

#include <stdio.h>

int main()
{
    float principle = 0;
    float rate = 0;
    float year = 0;
    
    printf("Enter your principle balance: ");
    scanf("%f", &principle);
    
    printf("Enter interest rate per year: ");
    scanf("%f", &rate);
    
    printf("Enter time (year): ");
    scanf("%f", &year);
    
    printf("principle       : %.2f BDT\n", principle);
    printf("interest rate   : %.2f\n", rate);
    printf("year            : %.2f\n", year);
    printf("--------------------------\n");
    printf("Total Amount    : %.2f BDT\n", (principle*(1+rate*year)));
    
    
    

    return 0;
}



Question A10:
Solution:

#include <stdio.h>

int main()
{
    int days = 0;
    printf("Please enter days: ");
    scanf("%d", &days);
    
    int year = days/365;
    int left_days = days%365;
    int week = left_days/7;
    int actual_days_left = left_days%7;
    
    printf("Year: %d\n", year);
    printf("Week: %d\n", week);
    printf("Days: %d\n", actual_days_left);
    

    return 0;
}


Question A11:
Solution:

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    printf("ASCII value of the character is %d\n", (int) ch);
    

    return 0;
}



Question A12:
Solution:

#include <stdio.h>

int main()
{
    int ascii_ch;
    printf("Enter a number between 0 and 127: ");
    scanf("%d", &ascii_ch);
    
    if(ascii_ch >= 127 || ascii_ch < 0) {
        printf("User typed outer range number\n");
    }else{
    
    printf("The character is %c\n", (char) ascii_ch);
    }

    return 0;
}


Question A13:
Solution:

#include <stdio.h>

int main()
{
    
    int number1, number2 = 0;
    scanf("%d %d", &number1, &number2);
    
    printf("quotient: %d\nremainder: %d\n", (number1/number2), (number1 - ((int)(number1/number2))*number2) );

    return 0;
}



Question A14:
Solution:

#include <stdio.h>

int main()
{
    
    int number1, number2 = 0;
    scanf("%d %d", &number1, &number2);
    
    printf("quotient: %d\nremainder: %d\n", (number1/number2), (number1 - ((int)(number1/number2))*number2) );

    return 0;
}


Question A15:
Solution:

#include <stdio.h>

int main()
{
    
    int number1, number2 = 0;
    scanf("%d %d", &number1, &number2);
    if(number1 >= number2){
        printf("Greatest Number: %d\n", number1);
    }else{
        printf("Greatest Number: %d\n", number2);
    }
	
    return 0;
}


Question A16:
Solution:

#include <stdio.h>

int main()
{
    
    float mark = 0;
    scanf("%f", &mark);
    
    if(mark >= 40) {
        printf("Passed\n");
    }else{
        printf("Failed\n");
    }
    return 0;
}


Question A17:
Solution:

#include <stdio.h>

int main()
{
    
    float inches = 0;
    scanf("%f", &inches);
    
    printf("yard: %.2f\nfeet: %.2f\n", inches* 0.0277778, inches*0.0833333);
    return 0;
}


Question A18:
Solution:

#include <stdio.h>

int main()
{
    
    float height, base;
    printf("height: ");
    scanf("%f", &height);
    
    printf("base: ");
    scanf("%f", &base);
    
    printf("area: %.2f\n", .5*height*base);
    
    return 0;
}


Question A19:
Solution:

*** Full question isn't available there ***


Question A20:
Solution:

#include <stdio.h>

int main()
{
    
    int num;
    scanf("%d", &num);
    
    if(num%2 == 0) {
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    
    return 0;
}



Question A21:
Solution:

#include <stdio.h>

int main()
{
    
    int x, y, z;
    scanf("%d %d %d",  &x , &y, &z);
    
    if( x > y) {
        if( x > z ) {
            printf("%d\n", x);
        }else{
            printf("%d\n", z);
        }
    }else{
        if(y > z) {
            printf("%d\n", y);
        }else{
            printf("%d\n", z);
        }
    }
    
    return 0;
}


Question A22:
Solution:

#include <stdio.h>

int main()
{
    
    float radius = 0.0;
    scanf("%f", &radius);
    int x; 
    
    
    printf("Please enter a number between 1 and 2\n");
    scanf("%d", &x);
    if(x == 1) {
        printf("Area: %f\n", 3.14*radius*radius);
    }
    else if(x == 2){
        printf("Circumference: %f\n", 2*3.14*radius);
    }else{
        printf("Area: %f\n", 3.14*radius*radius);
        printf("Circumference: %f\n", 2*3.14*radius);
    }
    
    return 0;
}


Question A23:
Solution:

#include <stdio.h>

int main()
{
    
    int x; 
    
    
    printf("Please enter a number: ");
    scanf("%d", &x);
    
    if(x % 2 == 0){
        printf("result: %d\n", x*x);
    }else{
        printf("result: %d\n", x*x*x);
    }
    
    return 0;
}



Question A24:
Solution:

#include <stdio.h>
#include <string.h>
int main()
{
    
    char employee_code[20];
    printf("Please enter your employee code: ");
    scanf("%s", employee_code);
    
    char name[200];
    int i = 0;
    for (; name[i-1] != '\n'; i++) {
        if(name[i-1] != '\n') {
        scanf("%c", &name[i]);
        }
    }
    
    int basic_salary = 10000;
    printf("Please enter your basic salary: ");
    scanf("%d", &basic_salary);
    
    if(strcmp(employee_code, "HRA") == 0) {
        printf("basic salary: %d\nTotal salary: %d\n", basic_salary, (int) (basic_salary * .4 + basic_salary));
    }
    else if (strcmp(employee_code, "DA") == 0) {
        printf("basic salary: %d\nTotal salary: %d\n", basic_salary, (int) (basic_salary * .1 + basic_salary));
    }
    else if (strcmp(employee_code, "CCA") == 0) {
        printf("basic salary: %d\nTotal salary: %d\n", basic_salary, (int) (basic_salary * .05 + basic_salary));
    }
    else if (strcmp(employee_code, "GS") == 0) {
        printf("basic salary: %d\nTotal salary: %d\n", basic_salary, (int) (basic_salary * (.4 + .1 + .05) + basic_salary));
    }
    else if (strcmp(employee_code, "PF") == 0) {
        printf("basic salary: %d\nTotal salary: %d\n", basic_salary, (int) (basic_salary + basic_salary * (.4 + .1 + .05) * .1));
    }
    else if (strcmp(employee_code, "IT") == 0) {
        printf("basic salary: %d\nTotal salary: %d\n", basic_salary, (int) (basic_salary + basic_salary * (.4 + .1 + .05) * .1));
    }
    else if (strcmp(employee_code, "NS") == 0) {
        printf("basic salary: %d\nTotal salary: %d\n", basic_salary, (int) (basic_salary + basic_salary * (.4 + .1 + .05) * .8));
    }else{
        printf("Your employee code isn't registered yet. please try again later\n");
    }
    
    return 0;
}


Question A25:
Solution:

#include <stdio.h>
#include <string.h>
int main()
{
    
    int keys = 0;
    float temperature;
    printf("Choose between 0 and 1: (0: Celsius to Farenheit\t1: Farenheit to Celsius)\n");
    scanf("%d", &keys);
    
    if(keys != 0) {
        printf("Please enter Farenheit temperature: ");
        scanf("%f", &temperature);
        printf("Celsius: %f\n", ((temperature-32)* 5)/9 );
    }else{
        printf("Please enter Celsius temperature: ");
        scanf("%f", &temperature);
        printf("Farenheit: %f\n", ((9* temperature)/ 5) + 32 );
    }
    
    return 0;
}


Question A26:
Solution:

a) 


#include <stdio.h>
int main()
{
    
    int x , y, temp;
    scanf("%d %d", &x , &y);
    
    temp = x;
    x = y;
    y = temp;
    
    printf("%d %d", x, y);
    
    
    return 0;
}

b)

#include <stdio.h>
#include <string.h>
int main()
{
    
    int x , y;
    scanf("%d %d", &x , &y);
    
    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("%d %d", x, y);
    
    
    return 0;
}


Question A27:
Solution:

#include <stdio.h>
#include <time.h>
int main()
{
    
    time_t systemTime;
    struct tm * timeinfo;
    
    time (&systemTime);
    timeinfo = localtime(&systemTime);

    
    printf("current system time and date: %s\n", asctime(timeinfo));
    
    
    return 0;
}


Question A28:
Solution:

#include <stdio.h>
#include <time.h>
int main()
{
    int days, month, year;
    printf("Enter your birth day: ");
    scanf("%d", &days);
    
    printf("Enter your birth month: ");
    scanf("%d", &month);
    
    
    printf("Enter your birth year: ");
    scanf("%d", &year);
    
    
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    
    long long int current_days = timeinfo->tm_mday;
    long long int current_month = (timeinfo->tm_mon) + 1;
    long long int current_year = (timeinfo->tm_year) + 1900;
    long long int total_days = (current_year - year) * 365 + (current_month - month - 1) * 30 + ((30-days) + current_days);
    long long int result_age_year = (total_days)/365;
    long long int left_days1 = total_days % 365;
    long long int result_age_month = (left_days1)/30;
    long long int result_age_days = (left_days1) % 30;
    
    printf("Your Age: %lld Years, %lld months, %lld days\n", result_age_year, result_age_month, result_age_days);
    printf("Your Age: %lld months\n", total_days/30);
    printf("Your Age: %lld Weeks\n", total_days/7);
    printf("Your Age: %lld days\n", total_days);
    printf("Your Age: %lld hours\n", total_days*24);
    printf("Your Age: %lld seconds\n", total_days*24*60);
    printf("Your Age: %lld miliseconds\n", total_days*24*60*60);
    
    
    return 0;
}


Question B1:
Solution:

#include <stdio.h>
#include <time.h>
int main()
{
    int marks; 
    printf("Enter your marks: \n");
    scanf("%d", &marks);
    
    printf("Your result: ");
    switch(marks){
        case 80 ... 100:
            printf("A+"); break;
        case 75 ... 79:
            printf("A"); break;
        case 70 ... 74:
            printf("A-"); break;
        case 65 ... 69:
            printf("B+"); break;
        case 60 ... 64:
            printf("B"); break;
        case 55 ... 59:
            printf("B-"); break;
        case 50 ... 54:
            printf("C+"); break;
        case 45 ... 49:
            printf("C"); break;
        case 40 ... 44:
            printf("D"); break;
        case 0 ... 39:
            printf("F"); break;
        default:
            printf("Invalid marks"); break;
    }
    return 0;
}


Question B2:
Solution:
#include <stdio.h>

void eligible(int x) {
    if ( x == 0 ) {
        printf("eligible\n");
    }else{
        printf("non eligible\n");
    }
}

int main()
{
    int age;
    scanf("%d", &age);
    
    age = (age >= 18) ? 0 : 1;
    eligible(age);
    return 0;
}


Question B3:
Solution:
#include <stdio.h>



int main()
{
    int year;
    scanf("%d" , &year);
    
    if( year % 100 == 0) {
        if (year % 400 == 0) {
            printf("leap year\n");
        }else{
            printf("not a leap year\n");
        }
    }else{
        if (year % 4 == 0) {
            printf("leap year\n");
        }else{
            printf("not a leap year\n");
        }
    }
    return 0;
}

Question B4:
Solution:

#include <stdio.h>



int main()
{
    int num;
    scanf("%d" , &num);
    
    if(num % 2 == 0) {
        printf("even\n");
    }else{
        printf("odd\n");
    }
    
    
    return 0;
}


Question B5:
Solution:

#include <stdio.h>



int main()
{
    int num;
    scanf("%d" , &num);
    
    if(num % 7 == 0) {
        printf("divisible by 7\n");
    }else{
        printf("divisible by 7\n");
    }
    
    
    return 0;
}


Question B6:
Solution:

#include <stdio.h>
#include <math.h>


int main()
{
    int year;
    scanf("%d" , &year);
    
    int normalizer = (year - 1900);
    normalizer = (normalizer >= 0) ? normalizer : normalizer * -1;
    int normal_days = normalizer % 7;
    int real_days = 0;
    
    int leap_count = floor(normalizer / 4);
    real_days = (normal_days + leap_count >= 7) ? ((normal_days + leap_count) % 7) : (normal_days + leap_count);
    
    switch(real_days){
        case 0: printf("monday\n"); break;
        case 1: printf("tuesday\n"); break;
        case 2: printf("wednesday\n"); break;
        case 3: printf("thursday\n"); break;
        case 4: printf("friday\n"); break;
        case 5: printf("saturday\n"); break;
        case 6: printf("sunday\n"); break;
        default:
                printf("Eita amra jani kintu bolbo na...xD\n");
    }
    
    
    
    return 0;
}


Question B7:
Solution:


/*doing later...xD */















