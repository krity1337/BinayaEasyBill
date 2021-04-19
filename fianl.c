#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>	
#include<stdlib.h>
#include<windows.h>

//Incli=udeing header
void loginChecker();
void option1();
void option2();
void totalsales();
void newRegister(int role);
void n();
void inventory();
void add_inv();
void display_inv();
void search_inv();
void modify_inv();
void delete_inv();
void exit_inv();





struct credentials {
  char firstName[30];
  char lastName[30];

  char username[30];

  char password[30];

  int role;
};

struct inventory
{
    char product_code[4];
   char product_name[20];
   int quantity;
   float rate;
};



struct bill
    {
        int sn;
        char n[20];
        int quantity;
        float r;
        float t;
    };


		
				
		int main()
					{
						struct inv;
					
					n();
				   // puts("************************Welcome To Easy Bill************************");
				    
				    puts("\n \n");
				    loginChecker();
				    
				    
				 }
				
					
				    void loginChecker(){
				    	system("COLOR 0A");
				    					char name[20],ch,password[15],i=0;
				    					int t;
									puts("\n \t \t\tPlease Proceed To Log In");
				   					puts("\n Enter user name:");
				   					scanf("%s",&name);
				   					
				  					puts("\n");
				 				    puts ("Enter Password:");
									
													while(ch!= 13){
														ch=getch();
														if(ch!=13 && ch!=8){
															putch('*');
															password[i]=ch;
															i++;
														}
													}
													password[i]='\0';
													
									
								 
        							if(strcmp(password,"pass123" )==0 &&strcmp(name,"Admin")==0){ 
 									system ("cls"); 
        						
        							puts("\n \n");
        							option1();
        							
        							
        							
        						}
        						else if(strcmp(password,"hello")==0 && strcmp(name,"Staff")==0){
        							system("cls");
        							option2();
								}
        						else{
								
									system ("cls"); 
								
        							puts("\n \n****Incorrect Password****");
        							puts("\n Press 1 to try again: \n Press 2 to terminate:");
        							scanf("%d",&t);
        							if(t==1){
        								system ("cls"); 
        								
        								loginChecker();
        								
									}
									else
									exit(0);
								}
									
        							
        							
        							
        					}
        					
        				   	void option1() {
        				   		system ("cls"); 
        				   		system("COLOR 0D");
        				   		
        									int optadmin;
        										printf("\n -------------*************Welcome to Admin pannel*************------------- "); 
        								puts("\n \n \t Press 1 for Staff Registration \n \t Press 2 for Total sales ");
        								scanf("%d",&optadmin);
        								if(optadmin==1){
        									system ("cls"); 
        									newRegister(0);
        								
        									
										}
										else if(optadmin==2){
										system ("cls"); 
										
										totalsales();
        								
        								
										}
										else
										puts("Incorrect Option");
        					}
    void newRegister(int rolexyz) {
    	int a;
    	system ("cls");
	
  puts("*Please Enter your Information* \n\n");

  FILE * fpcred;

  fpcred = fopen("cred", "a+");

  struct credentials c;

  puts("\n Enter your first name:  \n");
  scanf("%s", c.firstName);

  puts("\n Enter your last name:  \n");
  scanf("%s", c.lastName);


  puts("\n Enter your desired username:  \n");

  scanf("%s", c.username);

  puts("\n Enter your desired password:  \n");

  scanf("%s", c.password);

  c.role = rolexyz;

  fprintf(fpcred, "%d\t%s %s\t%s\t%s\n", c.role, c.firstName, c.lastName, c.username, c.password);

  fclose(fpcred);
  puts("\n * Regestered Successfully*** \n");
  
puts("\n \n Press 1 for Add more staff");
puts("\n Press 2 for Main Menu");
puts("\n Press 3 Inventory Management \n");
scanf("%d",&a);
if(a==1)

newRegister(0);
else if(a==2)
option1();
else if(a==3)
inventory();
else
puts("Invalid Option");
									}
	void totalsales(){
		int b;
		
		puts("*******Here you can find total sales of a day.*******");
		puts("\n \n Back to main menu?? press 5");
		scanf("%d",&b);
		if (b==5)
		option1();
		else
		exit(0);
		
	}
	
	void option2(){
		int products,i=0,n;
		char ch;
		int stop;
		system("cls");
		
		puts("\n *********Welcome to Staff Pannel*********");
		puts("\n \n Enter product Id");
		while(scanf("%d%c", &products, &ch))
    {
        if((ch == '\n')) stop++;   

         

        if (stop == 1) break;
		
	}
	}
	
	void n(){
		  printf(
       "\n\n \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n"
           " \xDB                                                                                       \xDB \n"
           " \xDB                           POKHARA UNIVERSITY                                          \xDB \n"
           " \xDB                           LA GRANDEE INTERNATIIONAL COLLEGE                           \xDB\n"
           " \xDB                   	     EASYBILL                                                    \xDB\n"
           " \xDB                                                                                       \xDB\n"
           " \xDB                                    Developed by:                                      \xDB\n"
           " \xDB                                                -> AAKRITY CHAPAGAIN [072 BCT 527]     \xDB\n"
           " \xDB                                                -> ASMIN RIJAL       [072 BCT 505]     \xDB\n"
           " \xDB                                                -> BINAYA KOIRALA    [072 BCT 505]     \xDB\n"
           " \xDB                                                -> LAXMAN PARAJULI   [072 BCT 505]     \xDB\n"
           " \xDB                                                -> UJJWAL ADHIKARI   [072 BCT 505]     \xDB\n"
           " \xDB                                                                                       \xDB\n"
           " \xDB_______________________________________________________________________________________\xDB\n"

          );
	}
	
void inventory(void)
{
    char tmp[50];
      sytem("cls");
        n();
    int option;

    printf("%s",
			"\n"
			"\n   INVENTORY MAIN MENU    \n"
			"------------------------------------\n"
			"   1.  CUSTOMER'S BILL    \n"
			"   2.  ADD inventory product \n"
			"   3.  LIST all inventory products \n"
			"   4.  SEARCH a product \n"
			"   5.  MODIFY inventory record\n"
			"   6.  DELETE inventory record \n"
			"   7.  ADD or LIST employee record\n"
			"   8.  Exit \n"
			"\n"
			"Enter your choice:\t ");
			getstr(tmp,50,stdin);
			option=strtol(tmp,NULL,10);
			printf("\n");


        switch(option)
        {
        //case 1:inv_bill();break;;
        case 2:add_inv(); break;
        case 3:display_inv(); break;
        case 4:search_inv(); break;
        case 5:modify_inv();break;
        case 6:delete_inv();break;
        case 7:employee();break;
        case 8: exit_inv();break;

        default: inventory();

           }
           
           
           void inv_bill()
{
	struct inventory inv;
    struct bill b;
    int a=1,q;
    float total;
    FILE *fptr;
    FILE *bill;
    char tmp[50];
    char x[4]= {0};
    int in;
    system("cls");


     char ch[]="\xDB\xDB\xDB\xDB\xDB CUSTOMER  BILL \xDB\xDB\xDB\xDB\xDB\n\n\n";
     int i=strlen(ch),k=20,option,j;

        for(j=0;j<i;j++)
        {
        gotoxy(k,5);
        printf("%c",ch[j]);
        Sleep(90);
        k+=2;}
        Sleep(500);


    printf("\n\nenter \"end\" to finish");



    fptr=fopen("C:\\C project\\inventory management system\\datafiles\\inventory.txt","rb+");
    bill=fopen("C:\\C project\\inventory management system\\datafiles\\bill.txt","wb");

     while(1)
     {

         printf("\n\nEnter item code   :"); getstr(x,50,stdin);
         if(strcmp(x,"end")==0)
            {
                    fclose(fptr);
                    fclose(bill);
            bill_print();
            }

        printf("Enter Quantity    :");getstr(tmp,50,stdin);q=strtol(tmp,NULL,10);
        rewind(fptr);
        while(fread(&inv,sizeof(inv),1,fptr))
      {

          if((strcmp(inv.product_code,x)==0))
          {
                total=(inv.rate)*q;
                b.sn=a;b.r=inv.rate;b.quantity=q;b.t=total;

                strcpy(b.n,inv.product_name);

                fwrite(&b,sizeof(b),1,bill);
                int size=sizeof(inv);
                inv.quantity=inv.quantity-q;
                a++;
              fseek(fptr,-size,SEEK_CUR);/* this function helps to move the cursor backward or forward from current
                                            position in the fie */
              fwrite(&inv,sizeof(inv),1,fptr);
              break;
            }
            else
            printf("No match found");
      }

      }
      fclose(fptr);
      fclose(bill);


}


void add_inv()
{
	struct inventory inv;
    FILE *fptr;
    char tmp[50];
    int in;
    system("cls");

     char ch[]="\xDB\xDB\xDB\xDB\xDB ADDING RECORDS \xDB\xDB\xDB\xDB\xDB\n\n\n";
     int i=strlen(ch),k=20,option,j;

        for(j=0;j<i;j++)
        {
        gotoxy(k,5);
        printf("%c",ch[j]);
        //Sleep(90);
        k+=2;}
        Sleep(500);

          printf("\n\n\n\nEnter new record(Y/N)?");
         while(toupper(getche())=='Y')
          {
               fptr=fopen("C:\\C project\\inventory management system\\datafiles\\inventory.txt","ab");
               //append file mode puts cursor at end of file
               //fseek(fptr,0,SEEK_END);


                    printf("\n\nCode                : "); getstr(inv.product_code,50,stdin);
                    printf("Product Name        : "); getstr(inv.product_name,50,stdin);
                    printf("Quantity            : "); getstr(tmp,50,stdin);  inv.quantity = strtol(tmp, NULL,10);
                    printf("Rate                : "); getstr(tmp,50,stdin); inv.rate=strtof(tmp,NULL);


    fwrite(&inv,sizeof(inv),1,fptr);
	fclose(fptr);
	  printf("\nEnter new record(Y/N)?");
} inventory();
}

void display_inv()
{
	struct inventory inv;
    FILE *fptr;
    char tmp[50];
    int in;
    system("cls");

     char ch[]="\xDB\xDB\xDB\xDB\xDB ALL INVENTORY PRODUCTS \xDB\xDB\xDB\xDB\xDB\n\n\n";
     int i=strlen(ch),k=20,option,j;

        for(j=0;j<i;j++)
        {
        gotoxy(k,5);
        printf("%c",ch[j]);
        Sleep(90);
        k+=2;}
        Sleep(500);

            fptr=fopen("C:\\C project\\inventory management system\\datafiles\\inventory.txt","rb");
            fseek(fptr,0,SEEK_SET);//sets cursor to initial point of file
            printf("\n\n\nCode\tPRODUCT NAME\t\tQUANTITY\t\tRATE\n");
            printf("----------------------------------------------------------------\n");
            while(fread(&inv,sizeof(inv),1,fptr)==1)
            {

                printf("%s\t%s\t\t\t%d\t\t\t%.2f\n",inv.product_code,inv.product_name,inv.quantity,inv.rate);
            }
            printf("\n\npress any key to continue to main menu");
            getch();
            inventory();

}

void search_inv()
{
	struct inventory inv;
    int datafound=0;
    FILE *fptr;
    char tmp[50];
    int in;
    system("cls");


     char ch[]="\xDB\xDB\xDB\xDB\xDB Search Inventory Product \xDB\xDB\xDB\xDB\xDB\n\n\n";
     int i=strlen(ch),k=20,option,j;

        for(j=0;j<i;j++)
        {
        gotoxy(k,5);
        printf("%c",ch[j]);
        Sleep(90);
        k+=2;}
        Sleep(500);



            fptr=fopen("C:\\C project\\inventory management system\\datafiles\\inventory.txt","rb");
            printf("\n\nWhat is the name of product you want to search\n");
            getstr(tmp,50,stdin);
            fseek(fptr,0,SEEK_SET);
            while(fread(&inv,sizeof(inv),1,fptr)==1)
            {
                if(strcmp(inv.product_name,tmp)==0)
                {

                    datafound=1;
                       printf("\nCode\tPRODUCT NAME\t\tQUANTITY\t\tRATE\n");
                       printf("--------------------------------------------------------------\n");
                       printf("%s\t%s\t\t\t%d\t\t\t%.2f",inv.product_code,inv.product_name,inv.quantity,inv.rate);
                }
                if(datafound=0)
                {
                    printf("\nNO product found");
                    printf("\ncheck if you have entered name correctly!!");
                    }}
        printf("\n\n\npress any key to continue to main menu");
        getch();
        inventory();

}

void modify_inv()
{
	struct inventory inv;
    FILE *fptr;
    char tmp[50];
    int in;
    int datafound=0;
    system("cls");

    char ch[]="\xDB\xDB\xDB\xDB\xDB Modify Inventory Product \xDB\xDB\xDB\xDB\xDB\n\n\n";
     int i=strlen(ch),k=20,option,j;

        for(j=0;j<i;j++)
        {
        gotoxy(k,5);
        printf("%c",ch[j]);
        Sleep(90);
        k+=2;}
        Sleep(500);

            fptr=fopen("C:\\C project\\inventory management system\\datafiles\\inventory.txt","rb+");
            //rewind(fptr);
            printf("\n\nWhat is the name of product you want to modify:\n");
            getstr(tmp,50,stdin);

            while(fread(&inv,sizeof(inv),1,fptr)==1)
            {
                if(strcmp(inv.product_name,tmp)==0)
                {
                    datafound=1;
                    printf("\nThe product you want to modify is: \n");
                    printf("\nCode\tPRODUCT NAME\t\tQUANTITY\t\tRATE\n");
                    printf("---------------------------------------------------------------\n");
                    printf("%s\t%s\t\t\t%d\t\t\t%.2f",inv.product_code,inv.product_name,inv.quantity,inv.rate);

                     printf("\n\nDo you want to edit this record?(y/n):");
                    if(toupper(getche())=='Y')
                    {
                    printf("\n\nCode                : "); getstr(inv.product_code,50,stdin);
                    printf("Product Name        : "); getstr(inv.product_name,50,stdin);
                    printf("Quantity            : "); getstr(tmp,50,stdin);  inv.quantity = strtol(tmp, NULL,10);
                    printf("Rate                : "); getstr(tmp,50,stdin); inv.rate=strtof(tmp,NULL);

                    fseek(fptr,sizeof(inv),SEEK_CUR); //moving back the cursor position
                    fwrite(&inv,sizeof(inv),1,fptr);

                        printf("\n--- product edited---\n");
                        break;


                }}
            }
            if(datafound==0)
            {
                 printf("\nNO product found");
                printf("\ncheck if you have entered name correctly!!");
            }
        printf("\n\n\npress any key to continue to main menu");
        getch();
        fclose(fptr);
        inventory();

}

void delete_inv()
{
	struct inventory inv;
     FILE *fptr;
     FILE *temp;
    char tmp[50];
    int datafound=0;
    int in;
    system("cls");


    char ch[]="\xDB\xDB\xDB\xDB\xDB Delete Inventory Product \xDB\xDB\xDB\xDB\xDB\n\n\n";
     int i=strlen(ch),k=20,option,j;

        for(j=0;j<i;j++)
        {
        gotoxy(k,5);
        printf("%c",ch[j]);
        Sleep(90);
        k+=2;}
        Sleep(500);

            fptr=fopen("C:\\C project\\inventory management system\\datafiles\\inventory.txt","rb");
            printf("\n\nWhat is the name of product you want to Delete:\n");
            getstr(tmp,50,stdin);//passing to our input function
            /* here we have opened two files: "inventory.txt" and temp.txt"
    To Remove a Product we first search for it's existence in file and if the product name is found we write all other
    products and their details in "temp.txt" and delete the file "inventory.txt" and at the same time renaming
            "temp.txt" to "inventory.txt" */

           while(fread(&inv,sizeof(inv),1,fptr)==1)
            {
                if(strcmp(inv.product_name,tmp)==0)
                {
                     datafound=1;
                    printf("\nThe product you want to delete is: \n");
                    printf("\nCode\tPRODUCT NAME\t\tQUANTITY\t\tRATE\n");
                    printf("-------------------------------------------------------------\n");
                    printf("%s\t%s\t\t\t%d\t\t\t%.2f",inv.product_code,inv.product_name,inv.quantity,inv.rate);
                }}

                     if(datafound==0)
            {

                 printf("\nNO product found");
                printf("\ncheck if you have entered name correctly!!");
            }


            printf("\n\nDo you really want to delete this record?(y/n):");

                    if(toupper(getche())=='Y')
                    {
                    temp=fopen("C:\\C project\\inventory management system\\datafiles\\temp.txt","wb");
                    rewind(fptr);

                    while(fread(&inv,sizeof(inv),1,fptr)==1)
                    {
                    if(strcmp(inv.product_name,tmp)!=0)
                    {
                    fwrite(&inv,sizeof(inv),1,temp);
                    }
                    }

                    fclose(fptr);
                    fclose(temp);

                    remove("C:\\C project\\inventory management system\\datafiles\\inventory.txt");
                    rename("C:\\C project\\inventory management system\\datafiles\\temp.txt","C:\\C project\\inventory management system\\datafiles\\inventory.txt");
                    printf("\n--- product deleted---\n");

                    }
        printf("\n\n\npress any key to continue to main menu");
        getch();
        inventory();

}

void exit_inv()
{
    printf("Want to close?(y/n):");
    if(toupper(getche())=='Y')
    {
        systen("cls");
        gotoxy(20,5);

         int r;
		printf("EXITING");
		for(r=1;r<=20;r++){
    Sleep(50);
    printf("\xB0");}
    exit(1);

    }
    else
    inventory();
}

}
	
