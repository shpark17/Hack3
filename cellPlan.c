/**
 *Author: SungHa Park
 *Date: 9/06/2018
 *this program help customers to track their mobile data usage
 */
 
 #include<stdlib.h>
 #include<stdio.h>
 #include<math.h>
 
 int main(int argc, char **argv) {
   
   double GbPlan, CurrentDay, GbUsed;
   
   GbPlan = atof(argv[1]);
   CurrentDay = atof(argv[2]);
   GbUsed = atof(argv[3]);
   
   double AverageDailyUsed = GbUsed/CurrentDay;
   double AverageDailyUse = GbPlan/30;
   double DaysRemaining = 30 - CurrentDay;
   double ExpectedData = AverageDailyUsed * DaysRemaining;
   double PerfectDataRate = (GbPlan-GbUsed)/(DaysRemaining);
   
   printf("%f days used, %f days remaining\n Average daily used: %f\n", CurrentDay, DaysRemaining, AverageDailyUsed);
   
   if(AverageDailyUsed < AverageDailyUse) {
     printf("You are using less than your average daily use (%fGB/day)\n Continuing to use this low usage, you will miss %f GB.\n To match your data plan, use about %f GB/day.", AverageDailyUse, ExpectedData, PerfectDataRate);
   }  
   else if(AverageDailyUsed>AverageDailyUse) {
     printf("You are using more than your average daily use (%fGB/day)\n Continuing to use this high usage, you will exceed by %f GB.\n To match your data plan, use about %f GB/day.", AverageDailyUse, ExpectedData, PerfectDataRate);
   }  
   if(GbUsed>GbPlan) {
     printf("You have already exceeded your data plan this month");
   } 
 return 0;
 }
   
