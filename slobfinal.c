#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
void gotoxy(int,int);
void FirstFit(int BlockSize[], int m, int ProcessSize[], int n)
{
    int allocation[n];
    int option;
 
    for(int i=0;i<n;i++)
    {
    	allocation[i]=-1;
	}
    
    for (int i =0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (BlockSize[j] >= ProcessSize[i])
            {
                allocation[i] = j;
                BlockSize[j] -= ProcessSize[i];
                break;
            }
        }
    }
    
    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    
	for (int i=0;i<n;i++)
    {
        printf("    %d \t\t    %d ",i+1,ProcessSize[i]);
        printf("\t\t");
        if (allocation[i] != -1)
		{
     	    printf("%d",allocation[i] + 1);
        	printf("\n");
		}	       
        else
            printf("Not Allocated\n");
    }
    printf("Now press 1 for visualisation:\n");
    scanf("%d",&option);
    if(option==1){
    system("clear");
    int count=0;
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 1){
    			if(count==0){
    			gotoxy(2,5);
				printf("(100)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}
			//	printf(" %d",ProcessSize[i]);
			//	for(int j=0; j<ProcessSize[i]/20; j++)
			//	{
			//		printf(" ");
			///		sleep(0.025);
				//}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 2){
    			if(count==0){
    			gotoxy(2,10);
				printf("(500)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

				//printf(" %d",ProcessSize[i]);
				//for(int j=0; j<ProcessSize[i]/20; j++)
			//	{
			//		printf(" ");
			//		sleep(0.025);
			//	}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 3){
    			if(count==0){
    			gotoxy(2,15);
				printf("(200)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 4){
    			if(count==0){
    			gotoxy(2,20);
				printf("(300)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 5){
    			if(count==0){
    			gotoxy(2,25);
				printf("(600)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

		//		printf(" %d",ProcessSize[i]);
		//		for(int j=0; j<ProcessSize[i]/20; j++)
		//		{
		//			
		//			printf(" ");
		//			sleep(0.025);
		//		}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 6){
    			if(count==0){
    			gotoxy(40,5);
				printf("(800)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

				//printf(" %d",ProcessSize[i]);
				//for(int j=0; j<ProcessSize[i]/20; j++)
				//{
				//	printf(" ");
				//	sleep(0.025);
				//}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 7){
    			if(count==0){
    			gotoxy(40,10);
				printf("(1000)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	gotoxy(2,30);
	}
	else{
		printf("Worng input");
	}
//    system("cls");
//    gotoxy(2,5);
//    printf("100");
//    gotoxy(2,10);
//    printf("500");
//    gotoxy(2,15);
//    printf("200");
//    gotoxy(2,20);
//    printf("300");
//    gotoxy(2,25);
//    printf("600");
//    gotoxy(50,10);
//    printf("800");
//    gotoxy(50,5);
//    printf("1000");
//    gotoxy(2,30);
}
void BestFit(int BlockSize[], int m, int ProcessSize[], int n)
{
   
    int allocation[n];
    int option;
    for(int i=0;i<n;i++)
    {
    	allocation[i]=-1;
	}
    
    for (int i=0;i<n;i++)
    {
        int bestIdx = -1;
   
        for (int j=0;j<m;j++)
        {
            if (BlockSize[j] >= ProcessSize[i])
            {
                if (bestIdx == -1)
                    bestIdx = j;
                else if (BlockSize[bestIdx] > BlockSize[j])
                    bestIdx = j;
            }
        }
 
        if (bestIdx != -1)
        {
            allocation[i] = bestIdx;
 
            BlockSize[bestIdx] -= ProcessSize[i];
        }
    }
 
	printf("\nProcess No.\tProcess Size\tBlock no.\n");
    
	for (int i=0;i<n;i++)
    {
        printf("    %d \t\t    %d ",i+1,ProcessSize[i]);
        printf("\t\t");
        if (allocation[i] != -1)
		{
         printf("%d",allocation[i] + 1);
            printf("\n");
		}	       
        else
            printf("Not Allocated \n");
    }
    printf("Now press 1 for visualisation:\n");
    scanf("%d",&option);
    if(option==1){
    system("clear");
    int count=0;
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 1){
    			if(count==0){
    			gotoxy(2,5);
				printf("(100)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}
			//	printf(" %d",ProcessSize[i]);
			//	for(int j=0; j<ProcessSize[i]/20; j++)
			//	{
			//		printf(" ");
			///		sleep(0.025);
				//}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 2){
    			if(count==0){
    			gotoxy(2,10);
				printf("(500)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

				//printf(" %d",ProcessSize[i]);
				//for(int j=0; j<ProcessSize[i]/20; j++)
			//	{
			//		printf(" ");
			//		sleep(0.025);
			//	}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 3){
    			if(count==0){
    			gotoxy(2,15);
				printf("(200)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 4){
    			if(count==0){
    			gotoxy(2,20);
				printf("(300)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 5){
    			if(count==0){
    			gotoxy(2,25);
				printf("(600)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

		//		printf(" %d",ProcessSize[i]);
		//		for(int j=0; j<ProcessSize[i]/20; j++)
		//		{
		//			
		//			printf(" ");
		//			sleep(0.025);
		//		}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 6){
    			if(count==0){
    			gotoxy(40,5);
				printf("(800)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

				//printf(" %d",ProcessSize[i]);
				//for(int j=0; j<ProcessSize[i]/20; j++)
				//{
				//	printf(" ");
				//	sleep(0.025);
				//}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 7){
    			if(count==0){
    			gotoxy(40,10);
				printf("(1000)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	gotoxy(2,30);
	}
	else{
		printf("Worng input");
	}
}

void WorstFit(int BlockSize[], int m, int ProcessSize[],int n)
{
    int allocation[n];
 	int option;
 	for(int i=0;i<n;i++)
    {
    	allocation[i]=-1;
	} 
 
    for (int i=0;i<n;i++)
    {
        int worstIdx = -1;
        for (int j=0;j<m;j++)
        {
            if (BlockSize[j] >= ProcessSize[i])
            {
                if (worstIdx == -1)
                    worstIdx = j;
                else if (BlockSize[worstIdx] < BlockSize[j])
                    worstIdx = j;
            }
        }
 
        if (worstIdx != -1)
        {
            allocation[i] = worstIdx;
 		    BlockSize[worstIdx] -= ProcessSize[i];
        }
    }
    
    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    
	for (int i=0;i<n;i++)
    {
        printf("    %d \t\t    %d ",i+1,ProcessSize[i]);
        printf("\t\t");
        if (allocation[i] != -1)
		{
    	    printf("%d",allocation[i] + 1);
            printf("\n");
		}	       
        else
            printf("Not Allocated \n");
    }
    printf("Now press 1 for visualisation:\n");
    scanf("%d",&option);
    if(option==1){
    system("clear");
    int count=0;
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 1){
    			if(count==0){
    			gotoxy(2,5);
				printf("(100)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}
			//	printf(" %d",ProcessSize[i]);
			//	for(int j=0; j<ProcessSize[i]/20; j++)
			//	{
			//		printf(" ");
			///		sleep(0.025);
				//}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 2){
    			if(count==0){
    			gotoxy(2,10);
				printf("(500)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

				//printf(" %d",ProcessSize[i]);
				//for(int j=0; j<ProcessSize[i]/20; j++)
			//	{
			//		printf(" ");
			//		sleep(0.025);
			//	}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 3){
    			if(count==0){
    			gotoxy(2,15);
				printf("(200)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 4){
    			if(count==0){
    			gotoxy(2,20);
				printf("(300)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 5){
    			if(count==0){
    			gotoxy(2,25);
				printf("(600)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

		//		printf(" %d",ProcessSize[i]);
		//		for(int j=0; j<ProcessSize[i]/20; j++)
		//		{
		//			
		//			printf(" ");
		//			sleep(0.025);
		//		}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 6){
    			if(count==0){
    			gotoxy(40,5);
				printf("(800)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

				//printf(" %d",ProcessSize[i]);
				//for(int j=0; j<ProcessSize[i]/20; j++)
				//{
				//	printf(" ");
				//	sleep(0.025);
				//}
				count++;
		}
	}
	count=0;
	//SetConsoleTextAttribute( hstdout, 15);
    for(int i=0;i<n;i++){
    	if (allocation[i] + 1 == 7){
    			if(count==0){
    			gotoxy(40,10);
				printf("(1000)");
				}
				printf("%d",ProcessSize[i]);
				if(count==0){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[41m \033[0m");
					usleep(250);
				}
				}
				if(count==1){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[44m \033[0m");
					usleep(250);
				}
				}
				if(count==2){
				for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[43m \033[0m");
					usleep(250);
				}
				}
				if(count==3){
					for(int j=0; j<ProcessSize[i]/20; j++)
				{
					printf("\033[42m \033[0m");
					usleep(250);
				}
				}

//				printf(" %d",ProcessSize[i]);
//				for(int j=0; j<ProcessSize[i]/20; j++)
//				{
//					printf(" ");
//					sleep(0.025);
//				}
				count++;
		}
	}
	gotoxy(2,30);
	}
	else{
		printf("Worng input");
	}
}
void gotoxy(int x,int y)
 {
 printf("%c[%d;%df",0x1B,y,x);
 }
int main()
{
    int BlockSize[] = {100, 500, 200, 300, 600, 800, 1000};
    int m = 7;
    int n,c;
	
	printf("\n Available Blocks Are of Sizes: \n");
	printf("\n Block 1 of size 100");
	printf("\n Block 2 of size 500");
	printf("\n Block 3 of size 200");
	printf("\n Block 4 of size 300");
	printf("\n Block 5 of size 600");
	printf("\n Block 6 of size 800");
	printf("\n Block 7 of size 1000");
	
	printf("\n\n\n Enter Number of Processes you want to enter: ");
	scanf("%d",&n);
	printf("\n\n");
	    
    int ProcessSize[n];
    
    for(int i=0;i<n;i++)
	{
		printf("Enter Size of Process %d : ",i+1);
		scanf("%d",&ProcessSize[i]);
		printf("\n");
	}
	printf("\n");
    
    	printf("\n Choose And Select The Appropriate Number..");
	printf("\n Press 1 For FirstFit..");
	printf("\n Press 2 For BestFit..");
	printf("\n Press 3 For WorstFit..");
	printf("\n\n Enter Your Choice: ");
	scanf("%d",&c);
	
   	if (c==1)
	FirstFit(BlockSize, m, ProcessSize, n);
 	else if(c==2)
	BestFit(BlockSize, m, ProcessSize, n);
	else if (c==3)
	WorstFit(BlockSize, m, ProcessSize, n);
	else
	printf("\n\n Wrong Input..");
 
    return 0 ;
}
