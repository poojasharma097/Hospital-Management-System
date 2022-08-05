//Hospital Management System
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct ad //Structure to store details of Patient
{
    char name[30];
    char disease[15];
    char cabin[5];
    char age[5];
    char id[30];
    char address[150];

} x[100];

struct doctor //Structure to store details of Doctor
{
    char name_doc[30];
    char spec[50];
    char tim[10];
    char yoe[5];
}doc[30];

struct login //Structure to store login credentials
{
   char id[30];
   char password[30];
}y[50];
//Global Variables
int z,cp,cvs,cov;
int n,i,sum=0,g,flag,num;
int N,SUM=0,NUM;
//Function prototype declarations
void add_patient();
void view_patient();
void search_patient();
void edit_patient();
void del_patient();
void patient_read();
void patient_write();
void login_read();
void login();
void sign();
void update();
void covidv();
void info();
void doctor_read();
void doctor_write();
void covidp();
void add_doctor();
void view_doctor();
void edit_doctor();
void search_doctor();
void del_doctor();

int main()//main function
{
    patient_read();
    login_read();
    doctor_read();
    int c,i,q;
    printf("\tMary Hospital Management System\n");
    int m,n;
    //making out the pattern

    for(int i=1;i<=5;i++)
   {
       printf("\t");
       if(i==1 || i==5)
       {
           for(int j=1;j<=31;j++)
           {
               printf("*");
           }
       }
       else
       {
           for(int j=1;j<=31;j++)
           {
               if(j%2!=0)
               {
                   printf("*");
               }
               else
               {
                  printf(" ");
               }
           }
       }
       printf("\n");
   }

   int k=0;
    printf("\n\n1.Patient\n2.Staff\n\nOption=");
    scanf("%d",&q);
    int e;
    //Login/Sign up menu
    system("cls");
    printf("1.Login\n2.Sign up\n\n");
    printf("Enter choice=");
    scanf("%d",&e);
    if(e==1)
    {
        login();

    }
    else if(e==2)
    {
        sign();
    }
    else if(e==3)
    {
        exit(0);
    }
    else
    {
        printf("Wrong choice");
        exit(0);
    }
    system("cls");

if(q==1)//Patient menu
{
    while(k!=6)
    {
    printf("**Enter choice\n1.Info\n2.List of Covid patients in Hospital\n3.Doctor's list\n4.Doctor's search\n5.Book vaccination slot\n6.Exit\n\nOption=");
    fflush(stdin);
    scanf("%d",&k);
    switch(k)
    {
    case 1://Info regarding important diseases
        system("cls");
        info();
        break;
    case 2://To show the list and number of covid patients in the hospital
        system("cls");
        covidp();
        break;
    case 3://List of doctors in the hospital
        system("cls");
        view_doctor();
        break;
    case 4://searching a particular doctor from the list
        system("cls");
        search_doctor();
        break;
    case 5://Booking a vaccination slot in the hospital
        system("cls");
        covidv();
        break;
    case 6:
        break;
    default:
        printf("\nwrong choice\n");
    }
    }
}

else if(q==2)
{
    int d=0,sc;
    printf("\nEnter a staff secret code=");//For security the staff menu is code protected
    scanf("%d",&sc);
    if(sc==2021)
    {
        system("cls");
    while(d!=4)
    {
        //Staff menu
    printf("\n**Enter option\n\n1.Edit doctor info\n2.Edit patient info\n3.Update Vaccination slots\n4.Exit\n\nOption=");
    fflush(stdin);
    scanf("%d",&d);

    if(d==1)
    {
        int c=0;
        while(c!=6)
        {
        //Editing doctor records
        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add_doctor();
        }
        else if(c==2)//view
        {
            system("cls");
            view_doctor();
        }
        else if(c==3)//search
        {
            system("cls");
            search_doctor();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit_doctor();
        }
        else if(c==5)//delete
        {
            system("cls");
            del_doctor();
        }
        else if(c==6)//inputting in file
        {
            doctor_write();
            break;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
        }
    }


    else if(d==2)
    {
        int c=0;
      while(c!=6)
       {

        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add_patient();
        }
        else if(c==2)//view
        {
            system("cls");
            view_patient();
        }
        else if(c==3)//search
        {
            system("cls");
            search_patient();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit_patient();
        }
        else if(c==5)//delete
        {
            system("cls");
            del_patient();
        }
        else if(c==6)//inputting in the file
        {
            patient_write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
        }
    }

    else if(d==3)//updation of slots
    {
        system("cls");
          update();
          printf("\nVaccination Slots updated successfully!..\n");
    }
    else if(d==4)
    {
        break;
    }
    else
    {
          printf("Invalid input\n\n");
    }
    }
  }
  else
  {
      printf("\nWrong code\n");
      exit(0);
  }
}
else
{
    printf("Invalid choice\n\n");
}

}

void add_patient()
{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;
    for(i=num; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter patient's Name = ");
        gets(x[i].name);
        fflush(stdin);
        printf("Enter disease = ");
        gets(x[i].disease);
        fflush(stdin);
        printf("Enter the age = ");
        gets(x[i].age);
        fflush(stdin);
        printf("Enter cabin no = ");
        gets(x[i].cabin);
        fflush(stdin);
        printf("Enter email id = ");
        gets(x[i].id);
        fflush(stdin);
        printf("Enter address = ");
        gets(x[i].address);
        printf("\n");
        num++;
    }
}

void view_patient()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name);
        printf("Disease = ");
        puts(x[i].disease);
        printf("cabin no=");
        puts(x[i].cabin);
        printf("Email ID = ");
        puts(x[i].id);
        printf("Age=");
        puts(x[i].age);
        printf("Address = ");
        puts(x[i].address);
        printf("\n\n");
    }
}
void edit_patient()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n");
    printf("2.Disease\n");
    printf("3.Age\n");
    printf("4.Cabin\n");
    printf("5.Email ID.\n");
    printf("6.Address");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=6)
    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(x[p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new Disease=");
                gets(x[p].disease);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                gets(x[p].age);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new Cabin no=");
                gets(x[p].cabin);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new email id =");
                gets(x[p].id);

            }
            else if(q==6)
            {
                fflush(stdin);
                printf("Enter the new address=");
                gets(x[p].address);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
void search_patient()
{
    int s,h,f;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n");
    printf("2.Name\n");
    printf("3.Disease\n");
    printf("4.Cabin no.\n");
    printf("5.Email Id.\n");
    printf("6.Age\n");
    printf("7.Address\n");
    printf("Option = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name = ");
            puts(x[s].name);
            printf("Disease = ");
            puts(x[s].disease);
            printf("Email ID = ");
            puts(x[s].id);
            printf("cabin = ");
            puts(x[s].cabin);
            printf("Age = ");
            puts(x[s].age);
            printf("Address = ");
            puts(x[s].address);
            printf("\n\n");
        }
        else
        {
            printf("\n\nNot Found\n\n");
        }
    }
    else if(h==2)//problem is here.........
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcasecmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("cabin = ");
                puts(x[g].cabin);
                printf("Email Id = ");
                puts(x[g].id);
                printf("Age = ");
                puts(x[g].age);
                printf("Address = ");
                puts(x[g].address);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
        {
            printf("\nNot Found\n");
        }
    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Disease = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcasecmp(u,x[g].disease)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("cabin = ");
                puts(x[g].cabin);
                printf("Email Id = ");
                puts(x[g].id);
                printf("Id = ");
                printf("Age = ");
                puts(x[g].age);
                printf("Address = ");
                puts(x[g].address);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
        {
            printf("\nNot Found\n");
        }
    }
    else if(h==4)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Cabin = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcasecmp(u,x[g].cabin)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("cabin = ");
                puts(x[g].cabin);
                printf("Email Id = ");
                puts(x[g].id);
                printf("Age = ");
                puts(x[g].age);
                printf("Address = ");
                puts(x[g].address);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
        {
            printf("Not Found\n\n");
        }
    }
    else if(h==5)
    {
        int f=1;
        fflush(stdin);
        printf("Enter email id=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcasecmp(u,x[g].id)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("cabin = ");
                puts(x[g].cabin);
                printf("Email Id = ");
                puts(x[g].id);
                printf("Age = ");
                puts(x[g].age);
                printf("Address = ");
                puts(x[g].address);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
        {
            printf("Not Found");
        }
    }
    else if(h==6)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Age = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcasecmp(u,x[g].age)==0)

            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("cabin = ");
                puts(x[g].cabin);
                printf("Email Id = ");
                puts(x[g].id);
                printf("Age = ");
                puts(x[g].age);
                printf("Address = ");
                puts(x[g].address);
                printf("\n\n");
                f=0;
            }
        }
        if(f==1)
        {
            printf("Not Found\n\n");
        }
    }
    else if (h==7)
    {
        int f=1;
        fflush(stdin);
        printf("Enter your address = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcasecmp(u,x[g].address)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("cabin = ");
                puts(x[g].cabin);
                printf("Email Id = ");
                puts(x[g].id);
                printf("Age = ");
                puts(x[g].age);
                printf("Address = ");
                puts(x[g].address);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
        {
            printf("\nNot Found\n");
        }
    }
    else
    {
        printf("\n\nInvalid input\n\n");
    }
}
void del_patient()
{
    int f=0,h=0;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n");
        printf("2.Remove Name\n");
        printf("3.Remove Disease\n");
        printf("4.Remove age\n");
        printf("5.Remove Cabin\n");
        printf("6.Remove Email id\n");
        printf("7.Remove Address\n");
        printf("Option = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                strcpy(x[f].address,x[f+1].address);
                strcpy(x[f].cabin,x[f+1].cabin);
                strcpy(x[f].age,x[f+1].age);
                strcpy(x[f].id,x[f+1].id);
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
            strcpy(x[f].age,"Cleared");
        }
        else if(h==5)
        {
           strcpy(x[f].cabin,"Cleared");
        }
        else if(h==6)
        {
           strcpy(x[f].id,"Cleared");
        }
        else if (h==7)
        {
            strcpy(x[f].address,"Cleared");
        }
        else
        {
            printf("\nInvalid choice\n");
        }
    }
    else
    {
        printf("\n\nInvalid Serial number\n");
    }
}
void patient_read()
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
void patient_write()
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
void login_read()
{
    int q;
    FILE *ptr;
    ptr=fopen("login.txt","r");
    if(ptr == NULL)
    {
        ptr = fopen("login.txt","w");
        fclose(ptr);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }
    z = fread(y, sizeof(struct login),50, ptr);

    fclose(ptr);
}
void login()
{
    FILE *ptr;
    ptr=fopen("login.txt","r");
    char s[30], p[30];
    fflush(stdin);
    printf("Id=");
    gets(s);
    struct login input;
    int co=0;
    char ch;
    int t=z,d=0;
    while(t--)
    {
        fread(&input, sizeof(struct login), 1, ptr);
        if(strcasecmp(s,input.id)==0)
        {
            d=1;
            printf("password=");
            while(1)
            {
                fflush(stdin);
                ch=getch();
                if(ch==13)
                {
                    p[co]='\0';
                    break;
                }
                else if(ch==8)
                {
                    if(co>0)
                    {
                        co--;
                        printf("\b \b");
                    }
                }
                else if(ch==9||ch==32)
                {
                    continue;
                }
                else
                {
                    p[co]=ch;
                    co++;
                    printf("*");
                }
            }

            if(strcasecmp(p,input.password)==0)
            {
                printf("\nLogin successfull\n\n");
            }
            else
            {
                printf("\nWrong password\nLogin unsuccessfull...!");
                exit(0);
            }
        }
    }
        if(d==0)
        {
            printf("\nWrong id\n");
        }

        fclose(ptr);
}
void sign()
{
    FILE *ptr;
    ptr=fopen("login.txt","w");
    fflush(stdin);
    printf("Id=");
    gets(y[z].id);
    fflush(stdin);
    printf("password=");
    char ch;
    int co=0;
    while(1)
            {
                fflush(stdin);
                ch=getch();
                if(ch==13)
                {
                    y[z].password[co]='\0';
                    break;
                }
                else if(ch==8)
                {
                    if(co>0)
                    {
                        co--;
                        printf("\b \b");
                    }
                }
                else if(ch==9||ch==32)
                {
                    continue;
                }
                else
                {
                    y[z].password[co]=ch;
                    co++;
                    printf("*");
                }
            }
    printf("\nSign in successfull\n");
    z++;
    fwrite (y, sizeof(struct login), z, ptr);
    fclose(ptr);
}

void info()
{
    int info_no;
    printf("\n\tWant to gather information about the disease  symptoms ,precautions  and much more\n");
    printf("\tpress 1 to know about dengue\n");
    printf("\tpress 2 to know about malaria\n");
    printf("\tpress 3 to know about covid\n\n");
    printf("\tEnter the disease no.=");
    scanf("%d",&info_no);
switch (info_no)
{
    case 1:
        printf("\n  INFORMATION  :- dengue \n");
        printf("A mosquito-borne viral disease occurring in tropical and subtropical areas");
        printf("Those who become infected with the virus a second time are at a significantly greater risk of developing severe disease.\n");
        printf("SYMPTOMS\n");
        printf("Symptoms include high fever, headache, rash and muscle and joint pain.");
        printf("In severe cases there is serious bleeding and shock, which can be life threatening.");
        printf("Pain areas:  in the abdomen, back, back of the eyes, bones, joints, or muscles\n");
        printf("Whole body:  chills, fatigue, fever, or loss of appetite\n");
        printf("Gastrointestinal:  nausea or vomiting\n");
        printf("Skin:  rashes or red spots\n");
        printf("Also common:  easy bruising or headache\n");
        printf("PRECAUTIONS\n");
        printf("1. Apply mosquito repellent, ideally one containing DEET.\n");
        printf("2. Protect yourself against mosquito bites\n");
        printf("3. Prevent mosquito breeding inside and outside your home\n");
        printf("4. Avoid visiting areas prone to mosquitoes\n");
        printf("TREATMENT\n");
        printf("Treatment includes fluids and pain relievers. Severe cases require hospital care.\n\n");
        break;
    case 2:
        printf("\n  INFORMATION  :- Malaria\n");
        printf("A disease caused by a plasmodium parasite, transmitted by the bite of infected mosquitoes.");
        printf("The severity of malaria varies based on the species of plasmodium.\n");
        printf("SYMPTOMS\n");
        printf("Symptoms are chills, fever and sweating, usually occurring a few weeks after being bitten..");
        printf("People travelling to areas where malaria is common typically take protective drugs before, their trip. .");
        printf("People may experience:\n");
        printf("Pain areas: in the abdomen or muscles\n");
        printf("Whole body: chills, fatigue, fever, night sweats, shivering, or sweating\n");
        printf("Gastrointestinal:diarrhoea, nausea, or vomiting\n");
        printf("Skin:  rashes or red spots\n");
        printf("Also common: easy bruising or headache\n");
        printf("PRECAUTIONS\n");
        printf("1. Put screens on windows and doors.\n");
        printf("2.Treat clothing, mosquito nets, tents, sleeping bags and other fabrics with an insect repellent called permethrin.\n");
        printf("TREATMENT\n");
        printf("Treatment includes antimalarial drugs..\n\n");
        break;
    case 3:
        printf("\n  INFORMATION  :-Covid 19\n");
        printf("Coronavirus disease (COVID-19) is an infectious disease caused by the SARS-CoV-2 virus.");
        printf(".Most people who fall sick with COVID-19 will experience mild to moderate symptoms and recover without special treatment\n");
        printf("SYMPTOMS\n");
        printf("fever,cough,tiredness\n.");
        printf(" sore throat,headache,aches and pains.\n");
        printf("loss of speech or mobility, or confusion\n ");
        printf("Skin:  rashes or red spots\n");
        printf("Also common: easy bruising or headache\n");
        printf("PRECAUTIONS\n");
        printf("1. Maintain a safe distance from others (at least 1 metre), even if they don’t appear to be sick..\n");
        printf("2.Wear a mask in public, especially indoors or when physical distancing is not possible.\n");
        printf("TREATMENT\n");
        printf("Isolate yourself in a well ventilated room.");
        printf("Use a triple layer medical mask, discard mask after 8 hours of use or earlier if they become wet or visibly soiled. ");
        printf("In the event of a caregiver entering the room, both caregiver and patient may consider using N 95 mask.\n\n");
        break ;
    default:
        printf("\nwrong choice\n");

}
}

void covidp()
{
    cp=0;
    for(int v=0;v<num;v++)
    {
        if(strcasecmp(x[v].disease,"covid")==0)
        {
            cp++;
        }
    }
    printf("No. of Covid patients in hospital=%d\n",cp);
    printf("List of covid patients in hospital:-\n");
    printf("\t Age\t Name\n");
    for(int v=0;v<num;v++)
    {
        if(strcasecmp(x[v].disease,"covid")==0 )
        {
            printf("\t%s\t",x[v].age);
            puts(x[v].name);
        }
    }
    printf("\n\n");
}
void update()
{
    FILE *fp=fopen("vaccine.txt","w");
    printf("\nEnter Covidshield vaccination slots=");
    scanf("%d",&cvs);
    printf("\nEnter Covaccine vaccination slots=");
    scanf("%d",&cov);
    fprintf(fp,"%d %d",cvs,cov);
    fclose(fp);
}
void covidv()
{
    int k=0;
    FILE *fp=fopen("vaccine.txt","r");
    fscanf(fp,"%d %d",&cvs,&cov);
    fclose(fp);
    printf("\nNo. of vaccination slots left for tomorrow of each Vaccine:-\n");
    printf("Covidshield=%d\n",cvs);
    printf("Covaccine=%d\n",cov);
    printf("**Enter Option\n\n1.Book a Covidshield slot\n2.Book a Covaccine slot\n3.Exit\n\nOption=");
    scanf("%d",&k);
    if(k==1)
    {
        if(cvs>0)
        {

         FILE *ptr=fopen("vaccine.txt","w");
         --cvs;
         fprintf(ptr,"%d %d",cvs,cov);
         printf("\nVaccination slot successfully booked for tomorrow!\n\n");
         fclose(ptr);
        }
        else
        {
          printf("\nSorry Vaccination slots are full\n");
        }
    }
    else if(k==2)
    {
        if(cov>0)
        {
        FILE *ptr=fopen("vaccine.txt","w");
         --cov;
         fprintf(ptr,"%d %d",cvs,cov);
         printf("\nVaccination slot successfully booked for tomorrow!\n\n");
        fclose(ptr);
        }
        else
        {
            printf("\nSorry Vaccination slots are full\n");
        }
    }
}
void add_doctor()
{

    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",NUM);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&N);
    SUM=N+NUM;
    for(i=NUM;i<SUM; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter doctor's Name = ");
        gets(doc[i].name_doc);
        fflush(stdin);
        printf("Enter specialization = ");
        gets(doc[i].spec);
        fflush(stdin);
        printf("Enter timings in hour-hour format in 24 hour system= ");
        gets(doc[i].tim);
        fflush(stdin);
        printf("Enter years of experience = ");
        gets(doc[i].yoe);
        printf("\n");
        NUM++;
    }
}

void view_doctor()
{
    for(i=0; i<NUM; i++)
    {
        printf("\n");
        printf("Reference Number=%d\n",i);
        printf("Name = ");
        puts(doc[i].name_doc);
        printf("Specialization = ");
        puts(doc[i].spec);
        printf("Timings = ");
        puts(doc[i].tim);
        printf("Years of experience = ");
        puts(doc[i].yoe);
        printf("\n\n");
    }
}

void edit_doctor()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1. Name\n");
    printf("2. Specialization\n");
    printf("3. Timings\n");
    printf("4. Years of experience\n");
    printf("Option = ");
    scanf("%d",&q);//option
    if(q<=4)
    {
        printf("Enter the refernce no of that doctor= (0 - %d)=",NUM-1);
        scanf("%d",&p);//reference number
        if(p<NUM)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(doc[p].name_doc);
            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new specialization=");
                gets(doc[p].spec);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new timings=");
                gets(doc[p].tim);
            }
            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new years of experience=");
                gets(doc[p].yoe);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}

void search_doctor()
{
    int s;
    char n[50];
    printf("By what do you want to search ?\n");
    printf("1. Name\n");
    printf("2. Specialization\n");
    printf("3. Timings\n");
    printf("4. Years of experience\n\n");
    printf("Option=");
    scanf("%d",&s);
    if (s==1)
    {
        int flag=0;
        fflush(stdin);
        printf("Enter the name : ");
        gets(n);
        for (i=0;i<NUM;i++)
        {
            if (strcasecmp(doc[i].name_doc,n)==0)
            {
                printf("Name = ");
                puts(doc[i].name_doc);
                printf("Specialization = ");
                puts(doc[i].spec);
                printf("Timings = ");
                puts(doc[i].tim);
                printf("Years of experience = ");
                puts(doc[i].yoe);
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("\nNot Found\n");
        }
    }
    else if (s==2)
    {
        int flag=0;
        fflush(stdin);
        printf("Enter the specialization : ");
        gets(n);
        for (i=0;i<NUM;i++)
        {
            if (strcasecmp(doc[i].spec,n)==0)
            {
                printf("Name = ");
                puts(doc[i].name_doc);
                printf("Specialization = ");
                puts(doc[i].spec);
                printf("Timings = ");
                puts(doc[i].tim);
                printf("Years of experience = ");
                puts(doc[i].yoe);
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("\nNot Found\n");
        }
    }
    else if (s==3)
    {
        int flag=0;
        fflush(stdin);
        printf("Enter the timings Hour-Hour in 24 hour format: ");
        gets(n);
        for (i=0;i<NUM;i++)
        {
            if (strcasecmp(doc[i].tim,n)==0)
            {
                printf("Name = ");
                puts(doc[i].name_doc);
                printf("Specialization = ");
                puts(doc[i].spec);
                printf("Timings = ");
                puts(doc[i].tim);
                printf("Years of experience = ");
                puts(doc[i].yoe);
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("\nNot Found\n");
        }
    }
    else if (s==4)
    {
        int flag=0;
        printf("Enter the years of experience : ");
        fflush(stdin);
        gets(n);

        for (i=0;i<NUM;i++)
        {
            if (strcasecmp(doc[i].yoe,n)==0)
            {
                printf("Name = ");
                puts(doc[i].name_doc);
                printf("Specialization = ");
                puts(doc[i].spec);
                printf("Timings = ");
                puts(doc[i].tim);
                printf("Years of experience = ");
                puts(doc[i].yoe);
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("\nNot Found\n");
        }
    }
    else
    {
        printf("Invalid Entry\n");
    }
}

void del_doctor()
{
    int f=0,h=0;
    printf("Enter the reference number of the doctor that you want to delete=");
    scanf("%d",&f);
    if(f<NUM)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n");
        printf("2.Remove Name\n");
        printf("3.Remove Specialization\n");
        printf("4.Remove timings\n");
        printf("5.Remove years of experience\n");
        printf("Option = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<NUM)
            {
                strcpy(doc[f].name_doc,doc[f+1].name_doc);
                strcpy(doc[f].spec,doc[f+1].spec);
                strcpy(doc[f].tim,doc[f+1].tim);
                strcpy(doc[f].yoe,doc[f+1].yoe);
                f++;
            }
            NUM--;
        }
        else if(h==2)
        {
            strcpy(doc[f].name_doc,"Cleared");
        }
        else if(h==3)
        {
            strcpy(doc[f].spec,"Cleared");
        }
        else if(h==4)
        {
            strcpy(doc[f].tim,"Cleared");
        }
        else if(h==5)
        {
            strcpy(doc[f].yoe,"Cleared");
        }
        else
        {
            printf("\nInvalid Choice\n");
        }
    }
    else
    {
        printf("\n\nInvalid Reference number\n");
    }
}

void doctor_read()
{
    FILE *fp = fopen("doctor.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("doctor.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }
    NUM = fread(doc, sizeof(struct doctor),30, fp);
    fclose(fp);

}
void doctor_write()
{
    FILE *fp = fopen("doctor.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(doc, sizeof(struct doctor),NUM, fp);

    fclose(fp);

}
