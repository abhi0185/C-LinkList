// Program to insert a string after a node starting with a specific letter.


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
       char name[20];
       
       struct node *next;
       }*start;
       
       void insert_at_end()
       {
                      struct node *var,*temp;
                      temp=start;
                      var=(struct node*)malloc(sizeof(struct node));
                      printf("Enter name to insert\n");
                      scanf("%s",var->name);
                 //canf("%d",&var->t);
                      
                      if(start==NULL){
                                       start=var;
                                      var->next=start;
                                     
                                      }
                      else{
                           while(temp->next!=start)
                           {
                                                  temp=temp->next;
                           }
                           temp->next=var;
                           var->next=start;
                           }
       }
       
       void insert_at_loc()
       {
             struct node *var,*temp,*temp2;
              temp=start;
              
                          char chc[10];
            printf("Enter first charcter of any given string \n");
            scanf("%s",chc);

                    var=(struct node*)malloc(sizeof(struct node));
                      printf("Enter name you want to insert\n");
                      scanf("%s",var->name);
          
            

           
            while(temp!=NULL)
            {
                             if(temp->name[0]==chc[0])
                             {
                                    //             printf("yes");
                                                 temp2=temp->next;
                                                   temp->next=var;
                                                   var->next=temp2;
                                                   temp=var;
                                                 break;
                           }
                             else
                             {
                           //    printf("no");
                                 temp=temp->next;
                             }
            }
       }
       
       
       
       
       
       void display(){
            struct node *dis;
            dis=start;
            while(dis->next!=start){
                                   printf("%s ",dis->name);
                                   dis=dis->next;
                                   }
                                    printf("%s ",dis->name);
                                   printf("\n\n");
            }
       
       
       
       
       int main()
       {
           start=NULL;
           int ch;
           printf("1 for insert at end\n2 for insert at position\n3 for exit\n");
           while(1)
           {
                   printf("Enter your choice \n");
                   scanf("%d",&ch);
           switch(ch)
           {
                     case 1:
                          {
                                   insert_at_end();
                                   display();
                                   break;
                          }
                       case 2:
                          {
                                   insert_at_loc();
                                   display();
                                   break;
                          }    
                          
                          
                          
                          case 3:
                               {
                                   getch();
                               }
           }
           }
           
           getch();
           }
                          
           
           
           
           
           
       

