#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct defendent
{
    char name[50];
    char address[100];
    char type_crime[50];
    char location_crime[50];
    char name_officer[50];
    char date_crime[20];
    char date_arrest[20];
    int CIN;
    char status_prodeeding[50];
};

int count=0;
int main_menu();
int menu_judge();
int menu_lawyer();
void defendent_details();
void modify();
void deletee();
void display();
void displayAll();
void displayjudge();
void search();
char fname[]={"mydatabase.dat"};

int main()
{
    char choice[50];
    printf("========================================================\n");
    printf("Specify Your Designation\n");
    printf("========================================================\n\n");
    printf("1. Registrar\n\n2. Lawyer\n\n3. Judge\t\n\n4. Exit\n\n");
    printf("========================================================\n\n");
    printf("Enter Your Choice: ");
    scanf("%s", &choice);
    printf("\n");
    printf("========================================================\n\n");
   if(strcmp(choice,"1")==0)
    {
        char username[15];
        char password[15];
        printf("Enter your username:\n");
        scanf("%s",&username);
        printf("Enter your password:\n");
        scanf("%s",&password);
        printf("========================================================\n\n");

        if(strcmp(username,"registrar")==0)
        {
            if(strcmp(password,"registrar@123")==0)
            {
                printf("Welcome,You have Logged In As Registrar Successfully!\n");
                main_menu();
            }
            else
            {
                printf("Password Entered is Invalid\n");
                printf("\n========================================================\n");
                exit(0);
            }
        }
        else
            {
		        printf("Username entered is invalid\n");
		        printf("\n========================================================\n");
		        exit(0);
            }
    }
    else
    {
        if(strcmp(choice,"2")==0)
        {
            char username[15];
            char password[15];
            printf("Enter your username:\n");
            scanf("%s",&username);
            printf("Enter your password:\n");
            scanf("%s",&password);
            printf("========================================================\n\n");
            if(strcmp(username,"lawyer")==0)
            {
                if(strcmp(password,"lawyer@456")==0)
                {
                    printf("Welcome,You have Logged In As Lawyer Successfully!\n");
                    menu_lawyer();
                }
                else
                {
                    printf("Password Entered is Invalid\n");
                    printf("\n========================================================\n");
                    exit(0);
                }
            }
            else
            {
		        printf("Username entered is invalid\n");
		        printf("\n========================================================\n");
		        exit(0);
            }
        }
        else
        {
            if(strcmp(choice,"3")==0)
            {
                char username[15];
                char password[15];

                printf("Enter your username:\n");
                scanf("%s",&username);
                printf("Enter your password:\n");
                scanf("%s",&password);
                printf("========================================================\n\n");
                if(strcmp(username,"judge")==0)
                {
                    if(strcmp(password,"judge@789")==0)
                    {
                        printf("Welcome,You have Logged In As Registrar Successfully!\n");
                        menu_judge();
                    }
                    else
                    {
                        printf("Password Entered is Invalid\n");
                        printf("\n========================================================\n");
                        exit(0);
                    }
                }
                else
                {
                    printf("Username entered is invalid\n");
                    printf("\n========================================================\n");
                    exit(0);
                }
            }
            else
            {
                if(strcmp(choice,"4")==0)
                {
                    exit(0);
                }
            }
        }
    }
}

int main_menu()
{
    int ch;
    while(1)
    {
        printf("\n==============Judiciary Information System==============\n\n");
        printf("1. Input Details\n\n");
        printf("2. Modify The Case Status\n\n");
        printf("3. Delete\n\n");
        printf("4. Display\n\n");
        printf("5. Display All\n\n");
        printf("6. Search\n\n");
        printf("7. Log Out\n\n");
        printf("0. Exit\n\n");
        printf("========================================================\n\n");
        printf("Please enter your Choice:");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1: defendent_details();
            break;
            case 2: modify();
            break;
            case 3: deletee();
            break;
            case 4: display();
            break;
            case 5: displayAll();
            break;
            case 6: search();
            break;
            case 7: main();
            break;
            case 0: exit(0);
        }
    }
    return 0;
}

int menu_judge()
{
    int ch;
    while(1)
    {
        printf("\n\n");
        printf("1. Display any specific case\n\n");
        printf("2. Display All the old cases\n\n");
        printf("3. Log out\n\n");
        printf("0. Exit\n\n");
        printf("========================================================\n\n");
        printf("Please enter your Choice: ");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1: display();
            break;
            case 2: displayjudge();
            break;
            case 3: main();
            break;
            case 0: exit(0);
        }
    }
    return 0;
}

int menu_lawyer()
{
    int ch;
    int c;
    while(1)
    {
        printf("\nLawyers are required to pay a charge of $25 per BROWSED case");
        c=count*25;
        count++;
        printf("\nYour due Amount is $%d", c);
        printf("\n\n");
        printf("1. Display any specific case\n\n");
        printf("2. Display All the old cases\n\n");
        printf("3. Log out\n\n");
        printf("0. Exit\n\n");
        printf("========================================================\n\n");
        printf("Please enter your Choice: ");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1: display();
            break;
            case 2: displayjudge();
            break;
            case 3: main();
            break;
            case 0: exit(0);
        }
    }
    return 0;
}

void defendent_details()
{
    int CIN;
    FILE *fp;
    struct defendent t1;

    fp=fopen(fname,"ab");

    printf("Enter defendent name: ");
    scanf("%s", &t1.name);
    printf("Enter defendent address: ");
    scanf("%s", &t1.address);
    printf("Enter the type of crime: ");
    scanf("%s", &t1.type_crime);
    printf("Enter the location of crime: ");
    scanf("%s", &t1.location_crime);
    printf("Enter the name of the arresting officer: ");
    scanf("%s", &t1.name_officer);
    printf("Enter the date of the crime: ");
    scanf("%s", &t1.date_crime);
    printf("Enter the date of the arrest: ");
    scanf("%s", &t1.date_arrest);
    printf("Assign a CIN Number : ");
    scanf("%d", &t1.CIN);
    printf("Status of the Proceeding: ");
    scanf("%s", &t1.status_prodeeding);
    fwrite(&t1,sizeof(t1),1,fp);
    fclose(fp);
}

void modify()
{
    FILE *fp,*fp1;
    struct defendent t,t1;
    int CIN,found=0,count=0;
    fp=fopen(fname,"rb");
    fp1=fopen("temp.dat","wb");

    printf("\nEnter the CIN Number you want to Modify: ");
    scanf("%d",&CIN);

    while(1)
    {
        fread(&t,sizeof(t),1,fp);

        if(feof(fp))
        {
            break;
        }
        if(t.CIN==CIN)
        {
            found=1;
            printf("\nEnter CIN No:");
            scanf("%d",&t.CIN);
            fflush(stdin);
            printf("Status of the Proceeding: ");
            scanf("%s", t.status_prodeeding);
            fwrite(&t,sizeof(t),1,fp1);
        }
        else
        {
            fwrite(&t,sizeof(t),1,fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if(found==0)
    {
        printf("Sorry No Record Found\n\n");
    }
    else
    {
        fp=fopen(fname,"wb");
        fp1=fopen("temp.dat","rb");

        while(1)
        {
            fread(&t,sizeof(t),1,fp1);

            if(feof(fp1))
            {
                break;
            }
            fwrite(&t,sizeof(t),1,fp);
        }

    }
    fclose(fp);
    fclose(fp1);
}

void deletee()
{
    FILE *fp,*fp1;
    struct defendent t,t1;
    int CIN,found=0,count=0;

    fp=fopen(fname,"rb");
    fp1=fopen("temp.dat","wb");

    printf("\nEnter the CIN you want to Delete:");
    scanf("%d",&CIN);

    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(t.CIN==CIN)
        {
            found=1;
            printf("Record Deleted\n\n");
        }
        else
        {
            fwrite(&t,sizeof(t),1,fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if(found==0)
    {
        printf("Sorry No Record Found\n\n");
    }
    else
    {
        fp=fopen(fname,"wb");
        fp1=fopen("temp.dat","rb");

        while(1)
        {
            fread(&t,sizeof(t),1,fp1);
            if(feof(fp1))
            {
                break;
            }
            fwrite(&t,sizeof(t),1,fp);
        }
    }
    fclose(fp);
    fclose(fp1);
}

void display()
{
    FILE *fp;
    struct defendent t;
    int CIN,found=0;
    fp=fopen(fname,"rb");

    printf("\nEnter the CIN: ");
    scanf("%d",&CIN);

    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(t.CIN==CIN)
        {
            found=1;
            printf("\n========================================================\n\n");
            printf("\t\t Defendent Details of %d\n\n",t.CIN);
            printf("========================================================\n\n");
            printf("Name:              %s\n", t.name);
            printf("CIN:               %d\n", t.CIN);
            printf("Address:           %s\n", t.address);
            printf("CrimeType:         %s\n", t.type_crime);
            printf("Location of crime: %s\n", t.location_crime);
            printf("Officer Name:      %s\n", t.name_officer);
            printf("Date Of Crime:     %s\n", t.date_crime);
            printf("Date Of Arrest:    %s\n", t.date_arrest);
            printf("Status:            %s\n", t.status_prodeeding);

            printf("\n========================================================\n\n");
        }
    }
    if(found==0)
    {
        printf("\nSorry No Record Found");
        printf("\n========================================================\n\n");

    }
    fclose(fp);
}

void displayAll()
{
    FILE *fp;
    struct defendent t;

    fp=fopen(fname,"rb");
    printf("\n========================================================\n\n");
    printf("\t\t All Defendent Details\n\n");
    printf("========================================================\n\n");

    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        printf("Name:              %s\n", t.name);
        printf("CIN:               %d\n", t.CIN);
        printf("Address:           %s\n", t.address);
        printf("CrimeType:         %s\n", t.type_crime);
        printf("Location of crime: %s\n", t.location_crime);
        printf("Officer Name:      %s\n", t.name_officer);
        printf("Date Of Crime:     %s\n", t.date_crime);
        printf("Date Of Arrest:    %s\n", t.date_arrest);
        printf("Status:            %s\n", t.status_prodeeding);
        printf("--------------------------------------------------------\n");
    }
printf("========================================================\n\n");
fclose(fp);
}

void displayjudge()
{
    FILE *fp;
    struct defendent t;
    int found=0;
    char status_prodeeding[20]="end";

    fp=fopen(fname,"rb");

    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(strcmp(status_prodeeding,t.status_prodeeding)==0)
        {
            printf("\n========================================================\n\n");
            printf("\t\t Defendent Details of %d\n\n",t.CIN);
            printf("========================================================\n\n");
            printf("Name:              %s\n", t.name);
            printf("CIN:               %d\n", t.CIN);
            printf("Address:           %s\n", t.address);
            printf("CrimeType:         %s\n", t.type_crime);
            printf("Location of crime: %s\n", t.location_crime);
            printf("Officer Name:      %s\n", t.name_officer);
            printf("Date Of Crime:     %s\n", t.date_crime);
            printf("Date Of Arrest:    %s\n", t.date_arrest);
            printf("Status:            %s\n", t.status_prodeeding);
            printf("========================================================\n\n");
        }
    }
    fclose(fp);
}

void search()
{
    FILE *fp;
    struct defendent t;
    int found=0;
    char namee[20];

    fp=fopen(fname,"rb");

    printf("\nEnter the Defendent Name:");
    scanf("%s",&namee);

    while(1)
    {
        fread(&t,sizeof(t),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(strcmp(namee,t.name)==0)
        {
            printf("\n========================================================\n\n");
            printf("\t\t Defendent Details of %d\n\n",t.CIN);
            printf("========================================================\n\n");
            printf("Name:              %s\n", t.name);
            printf("CIN:               %d\n", t.CIN);
            printf("Address:           %s\n", t.address);
            printf("CrimeType:         %s\n", t.type_crime);
            printf("Location of crime: %s\n", t.location_crime);
            printf("Officer Name:      %s\n", t.name_officer);
            printf("Date Of Crime:     %s\n", t.date_crime);
            printf("Date Of Arrest:    %s\n", t.date_arrest);
            printf("Status:            %s\n", t.status_prodeeding);
            printf("========================================================\n\n");
        }
    }
    if(found==0)
    {
        printf("\nSorry No Record Found");
    }
    fclose(fp);
}
