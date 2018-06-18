#include <stdio.h>
struct count_day
{
    int year;
    int month;
    int day;
};
int days(struct count_day done);
int main()
{
    struct count_day dd;
    printf("Please enter Year, Month, Day: ");
    scanf("%d %d %d", &dd.year, &dd.month, &dd.day);
    printf("%d-%d-%d is No.%d days!\n", dd.year, dd.month, dd.day, days(dd));
    return 0;
}
int days(struct count_day done)
{
    int i, m[12], sum;
    for (i=0; i<6; i++)
        i<=3 ? m[2*i]=31, m[2*i+1]=30 : m[2*i+1]=31, m[2*i+2]=30;
    {(!(done.year%4)&&done.year%100!=0)||!(done.year%400) ? m[1]=29 : m[1]=28;}
    for (i=0, sum=0; i<done.month-1; sum+=m[i++]);
    return sum+done.day;
}
