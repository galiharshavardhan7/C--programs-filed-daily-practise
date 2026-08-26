#include<stdio.h>
int main()
{
    float data_consumed, data_limit, usage;
    printf("Enter data consumed and data limit in GB: ");
    scanf("%f %f", &data_consumed,&data_limit);
    usage=(data_consumed/data_limit)*100;
    if (usage >= 100)
    {
        printf("Alert %0.2f%%:Data is over",usage);
    }
    else if(usage>=90 && usage<100)
    {
        printf("Alert %0.2f%%:Your high speed data is slowed",usage);
    }
    else if(usage==50 )
    {
        printf("Alert 50%%: 50%% is used. ");
    }
    else
    {
        printf("Sufficient data is available.");
    }
}