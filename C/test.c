#include<stdio.h>
#include <limits.h>
#include <string.h>
int main() {
      FILE *fptr;
      char ch;
      char logs[1000];
      int idx=0;
      int i=0;

   if ((fptr = fopen("C:\\Users\\Ash\\Desktop\\Application.log","r")) == NULL){
       printf("Error! opening file");

   }
   else
   {
   	while(ch!=EOF)
   	{
   		ch = fgetc(fptr);
		logs[idx]=ch;
		idx++;

   	}
   	
   	char *token = strtok(logs, ":");
   	char alert[100][1000];
   	char error[100][1000];
   	char notification[100][1000];
   	char critical[100][1000];
   	int i=0;
   	int alert_idx=0;
   	int error_idx=0;
   	int critical_idx=0;
   	int notification_idx=0;
   	int error_flag=0;
   	int alert_flag=0;
   	int notification_flag=0;
   	int critical_flag=0;
    while (token != NULL)
    {
    	
    	if (strstr(token,"error"))
        {
			error_flag=1;     
         }
         else if (strstr(token,"alert"))
        {
            alert_flag=1;     
         }
        else if (strstr(token,"critical"))
        {
            critical_flag=1;
            
         }
        else if (strstr(token,"notification"))
        {
            notification_flag=1;
            
         }
		
		token = strtok(NULL, ":"); 
        
        if (strstr(token,"error"))
        {
            if(error_flag==1)
            {
            	for(i=0;i<strlen(token)-5;i++)
            	{
            	error[error_idx][i]=token[i];	
            	}
            	error_idx++;
            	
            }
            
            else if(alert_flag==1)
            {
            	for(i=0;i<strlen(token)-5;i++)
            	{
            	alert[alert_idx][i]=token[i];	
            	}
            	alert_idx++;
            	
            }
            else if(notification_flag==1)
            {
            	for(i=0;i<strlen(token)-5;i++)
            	{
            	notification[notification_idx][i]=token[i];	
            	}
            	notification_idx+=1;
            	
            }
            
            else if(critical_flag==1)
            {
            	for(i=0;i<strlen(token)-5;i++)
            	{
            	critical[critical_idx][i]=token[i];	
            	}
            	critical_idx+=1;
            	
            }
         }
        else if (strstr(token,"alert"))
        {
            
            if(error_flag==1)
            {
            	for(i=0;i<strlen(token)-5;i++)
            	{
            	error[error_idx][i]=token[i];	
            	}
            	error_idx++;
            	
            }
            
            else if(alert_flag==1)
            {
            	for(i=0;i<strlen(token)-5;i++)
            	{
            	alert[alert_idx][i]=token[i];	
            	}
            	alert_idx++;
            	
            }
            else if(notification_flag==1)
            {
            	for(i=0;i<strlen(token)-5;i++)
            	{
            	notification[notification_idx][i]=token[i];	
            	}
            	notification_idx++;
            	
            }
            
            else if(critical_flag==1)
            {
            	for(i=0;i<strlen(token)-5;i++)
            	{
            	critical[critical_idx][i]=token[i];	
            	}
            	critical_idx++;
            	
            }
            
         }
         else if (strstr(token,"critical"))
        {
            
            if(error_flag==1)
            {
            	for(i=0;i<strlen(token)-8;i++)
            	{
            	error[error_idx][i]=token[i];	
            	}
            	error_idx++;
            
            }
            
            else if(alert_flag==1)
            {
            	
            	for(i=0;i<strlen(token)-8;i++)
            	{
            	alert[alert_idx][i]=token[i];	
            	}
            	alert_idx++;
            	
            }
            else if(notification_flag==1)
            {
            	
            	for(i=0;i<strlen(token)-8;i++)
            	{
            	notification[notification_idx][i]=token[i];
						
            	}
            	notification_idx++;
            	
            }
            
           else if(critical_flag==1)
            {
              	
            	for(i=0;i<strlen(token)-8;i++)
            	{
            	critical[critical_idx][i]=token[i];	
            	}
            	critical_idx++;
            	
            	
        }
            
         }
         else if (strstr(token,"notification"))
        {
            
            
            if(error_flag==1)
            {
            	for(i=0;i<strlen(token)-12;i++)
            	{
            	error[error_idx][i]=token[i];	
            	}
            	error_idx++;
            	
            }
            
            else if(alert_flag==1)
            {
            	for(i=0;i<strlen(token)-12;i++)
            	{
            	alert[alert_idx][i]=token[i];	
            	}
            	alert_idx++;
            	
            }
            else if(notification_flag==1)
            {
            	for(i=0;i<strlen(token)-12;i++)
            	{
            	notification[notification_idx][i]=token[i];	
            	}
            	notification_idx++;
            	
            }
            
            else if(critical_flag==1)
            {
            	for(i=0;i<strlen(token)-12;i++)
            	{
            	critical[critical_idx][i]=token[i];	
            	}
            	critical_idx++;
            	
            }
            
            
         }
         else
         {
         if(error_flag==1)
            {
            	for(i=0;i<strlen(token);i++)
            	{
            	error[error_idx][i]=token[i];	
            	}
            	error_idx++;
            	
            }
            
            else if(alert_flag==1)
            {
            	for(i=0;i<strlen(token);i++)
            	{
            	alert[alert_idx][i]=token[i];	
            	}
            	alert_idx++;
            	
            }
            else if(notification_flag==1)
            {
            	for(i=0;i<strlen(token);i++)
            	{
            	notification[notification_idx][i]=token[i];	
            	}
            	notification_idx++;
            	
            }
            
            else if(critical_flag==1)
            {
            	for(i=0;i<strlen(token);i++)
            	{
            	critical[critical_idx][i]=token[i];	
            	}
            	critical_idx++;
            	
            }
            	
         }
        
         error_flag=0;
   	     alert_flag=0;
   	     notification_flag=0;
   	     critical_flag=0;
   	     if((int)token[strlen(token)-1]==-1)
   	     break;
        
    }
     fptr = fopen("C:\\Users\\Ash\\Desktop\\alert.log", "w");
     fputs(alert, fptr);
     fclose(fptr);
     fptr = fopen("C:\\Users\\Ash\\Desktop\\error.log", "w");
     fputs(error, fptr);
     fclose(fptr);
     fptr = fopen("C:\\Users\\Ash\\Desktop\\critical.log", "w");
     fputs(critical, fptr);
     fclose(fptr);
     fptr = fopen("C:\\Users\\Ash\\Desktop\\notification.log", "w");
     fputs(notification, fptr);
     fclose(fptr);

}

   return 0;
}
