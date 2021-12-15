#include<stdio.h>
void main()
{
  int i,n,bt[10],stime=0,wt[10],tat[10],twt,ttat;
  float avgwt,avgtat;
  printf(" FCFS \n");
  printf("Enter the number of processes:\t");
  scanf("%d", &n);
  printf("\nEnter the burst time of each process:\t");
  
  for(i=1;i<=n;i++)
    {
      printf("\nProcess %d :",i);
      scanf("%d", &bt[i]);
    }
  printf("\nGANTT CHART");
  printf("\nPID\tBT\tST\tET");
  ttat=0,twt=0;
 
  for(i=1;i<=n;i++)
    {
      wt[i]=stime;
      stime=stime+bt[i];
      tat[i]=stime;
      printf("\n%d\t%d\t%d\t%d",i,bt[i],wt[i],tat[i]);
      twt=twt+wt[i];
      ttat=ttat+tat[i];
    }
  avgwt=(float)twt/n;
  avgtat=(float)ttat/n;
  printf("\nTotal waiting time:\t%d",twt);
  printf("\nTotal turn around time:\t%d",ttat);
  printf("\nAverage waiting time:\t%4.2f",avgwt);
  printf("\nAverage turn around time:\t%4.2f",avgtat);
}














