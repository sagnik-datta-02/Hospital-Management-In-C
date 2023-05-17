#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct ad
{
    char name[30];
    char disease[30];
    int cabin,phone,age;
} x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void search();
void edit();
void del();
void show();
int main()
{
   // system("color 3E");
    read();
    int c,i,q,j;
    for(j=1;j<6;j++){
		//Sleep(50);
		printf("\t");
	}
	
		//Sleep(60);
		printf("Simple Hospital Management System ");
	
	for(j=0;j<6;j++){
		//Sleep(50);
		printf("\t ");
	}
    printf("\n");
    int m,n;

    while(c!=6)
    {

        printf("\t\t\t\t\t**Enter your choice**\n\n\t\t\t\t\t1. Add Information\n\t\t\t\t\t2. View Information\n\t\t\t\t\t3. Search\n\t\t\t\t\t4. Edit Information\n\t\t\t\t\t5. Delete Information\n\t\t\t\t\t6. Exit\n\n\t\t\t\t\tOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
           
            add();
        }
        else if(c==2)//view
        {
            
            view();
        }
        else if(c==3)//search
        {
            
            search();
        }
        else if(c==4)//edit
        {
           // system("cls");
            edit();
        }
        else if(c==5)//delete
        {
           
            del();
        }
        else if(c==6)
        {
            write();
            return 0;
        }
        else
        {
           
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
void add()
{
    printf("\n\n");
    printf("\t\t\t\t\tAlready data inputed on the database =%d\n\n",num);//how many inputs
    printf("\t\t\t\t\tHow many entry do you want to add=\n");
    scanf("%d",&n);
    
    fflush(stdin);
    sum=n+num;
    int i;
    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
       // fflush(stdin);
        printf("\t\t\t\t\tEnter patient's Name = ");
        gets(x[i].name);
        fflush(stdin);
        printf("\t\t\t\t\tEnter disease = ");
        gets(x[i].disease);
        fflush(stdin);
        printf("\t\t\t\t\tEnter the age = ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("\t\t\t\t\tEnter cabin no = ");
        scanf("%d",&x[i].cabin);
        fflush(stdin);
        printf("\t\t\t\t\tEnter phone number = ");
        scanf("%d",&x[i].phone);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}

void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("\t\t\t\t\tSerial Number=%d\n",i);
        printf("\t\t\t\t\tName = ");
        puts(x[i].name);
        printf("\t\t\t\t\tDisease = ");
        puts(x[i].disease);
        printf("\t\t\t\t\tCabin no = %d\n\t\t\t\t\tPhone number = 0%d\n\t\t\t\t\tAge=%d\n",x[i].cabin,x[i].phone,x[i].age);
        printf("---------------------------------------------------------------------------------------");
        printf("\n\n");

    }
}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("\t\t\t\t\tWhat do you want to edit ?\n");
    printf("\t\t\t\t\tEnter your option\n");
    printf("\t\t\t\t\t1.Name\n\t\t\t\t\t2.Disease\n\t\t\t\t\t3.Age\n\t\t\t\t\t4.Cabin\n\t\t\t\t\t5.Phone no.\n");
    printf("\t\t\t\t\tOption=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("\t\t\t\t\tEnter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("\t\t\t\t\tEnter the new name=");
                gets(x[p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("\t\t\t\t\tEnter the new Disease=");
                gets(x[p].disease);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("\t\t\t\t\tEnter the new Age=");
                scanf("%d",&x[p].age);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("\t\t\t\t\tEnter the new Cabin no=");
                scanf("%d",&x[p].cabin);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("\t\t\t\t\tEnter the new Phone no =");
                scanf("%d",&x[p].phone);
            }
        }
        else
        {
            printf("\n\n\t\t\t\t\tInvalid Serial \n\t\t\t\t\tTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\n\t\t\t\t\tInvalid option\n\t\t\t\t\tTry Again!!\n\n");
    }
}
void search()
{
    int s,h,f;
    char u[100];
    printf("\t\t\t\t\tBy what do you want to search ?\n");
    printf("\t\t\t\t\t1.Serial no.\n\t\t\t\t\t2.Name\n\t\t\t\t\t3.Disease\n\t\t\t\t\t4.Cabin no.\n\t\t\t\t\t5.Phone no.\n\t\t\t\t\t6.Age\n\n\t\t\t\t\tOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("\t\t\t\t\tEnter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("\t\t\t\t\tSerial Number=%d\n",s);
            printf("\t\t\t\t\tName = ");
            puts(x[s].name);
            printf("\t\t\t\t\tDisease = ");
            puts(x[s].disease);
            printf("\t\t\t\t\tCabin no = %d\n\t\t\t\t\tPhone number = 0%d\n\t\t\t\t\tAge = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\n\t\t\t\t\tNot Found\n\n");
    }
    else if(h==2)
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("\t\t\t\t\tSerial Number=%d\n",g);
                printf("\t\t\t\t\tName = ");
                puts(x[g].name);
                printf("\t\t\t\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\t\t\t\tCabin no = %d\n\t\t\t\t\tPhone number = 0%d\n\t\t\t\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\n\t\t\t\t\tNot Found\n");



    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("\t\t\t\t\tEnter Disease = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].disease)==0)
            {
                printf("\n");
                printf("\t\t\t\t\tSerial Number=%d\n",g);
                printf("\t\t\t\t\tName = ");
                puts(x[g].name);
                printf("\t\t\t\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\t\t\t\tCabin no = %d\n\t\t\t\t\tPhone number = 0%d\n\t\t\t\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }


        }
        if(f==1)
            printf("\n\t\t\t\t\tNot Found\n");


    }
    else if(h==4)
    {
        int f=1;
        printf("\t\t\t\t\tEnter Cabin number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].cabin)
            {
                printf("\n");
                printf("\t\t\t\t\tSerial Number=%d\n",g);
                printf("\t\t\t\t\tName = ");
                puts(x[g].name);
                printf("\t\t\t\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\t\t\t\tCabin no = %d\n\t\t\t\t\tPhone number = 0%d\n\t\t\t\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else if(h==5)
    {
        int f=1;
        printf("\t\t\t\t\tEnter Phone number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].phone)
            {
                printf("\n");
                printf("\t\t\t\t\tSerial Number=%d\n",g);
                printf("\t\t\t\t\tName = ");
                puts(x[g].name);
                printf("\t\t\t\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\t\t\t\tCabin no = %d\n\t\t\t\t\tPhone number = 0%d\n\t\t\t\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("\t\t\t\t\tNot Found");
    }
    else if(h==6)
    {
        int f=1;
        printf("\t\t\t\t\tEnter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
                printf("\n");
                printf("\t\t\t\t\tSerial Number=%d\n",g);
                printf("\t\t\t\t\tName = ");
                puts(x[g].name);
                printf("\t\t\t\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\t\t\t\tCabin no = %d\n\t\t\t\t\tPhone number = 0%d\n\t\t\t\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("\t\t\t\t\tNot Found\n\n");

    }
    else
        printf("\n\n\t\t\t\t\tInvalid input\n\n");




}
void del()
{
    int f,h;
    printf("\t\t\t\t\tEnter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("\t\t\t\t\tWhat do you want ?\n");
        printf("\t\t\t\t\t1.Remove the whole record\n\t\t\t\t\t2.Remove Name\n\t\t\t\t\t3.Remove Disease\n\t\t\t\t\t4.Remove age\n\t\t\t\t\t5.Remove Cabin\n\t\t\t\t\t6.Remove phone number\n\t\t\t\t\tOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].cabin=x[f+1].cabin;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].cabin=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else{
        printf("\n\n\t\t\t\t\tInvalid Serial number\n");}

}
void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}
