#include <stdio.h>
void findWaitingTime(int processes[], int n, int bt[], int wt[]) {
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
}
void findTurnaroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}
void findAvgTime(int processes[], int n, int bt[]) {
    int wt[n], tat[n];
    float total_wt = 0, total_tat = 0;
    findWaitingTime(processes, n, bt, wt);
    findTurnaroundTime(processes, n, bt, wt, tat);

    printf("\nProcess\tBurst Time\tTurnaround Time\tWaiting Time\n");
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i],bt[i],tat[i],wt[i]);
    }
    printf("\nAverage Waiting Time = %.2f", total_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", total_tat / n);
}
int main() {
    int n;
    printf("Enter no of processes:");
    scanf("%d",&n);
    int processes[n];
    int burst_time[n];
    for(int i=0;i<n;i++) {
        processes[i]=i+1;
        int bt;
        printf("Enter burst time for process %d:",i+1);
        scanf("%d",&bt);
        burst_time[i]=bt;
    }
    findAvgTime(processes, n, burst_time);
    return 0;
}
