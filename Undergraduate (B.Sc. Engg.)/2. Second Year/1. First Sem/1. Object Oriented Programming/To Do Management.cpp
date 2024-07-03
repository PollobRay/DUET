//
// Created by Ray on 3/9/2022.
//

#include<bits/stdc++.h>
#include<unistd.h>
#include<windows.h>

using namespace std;


class ToDoManager
{
    int k=0;
    void start ()
    {

        system("Color 0B");
        cout<<"\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t ___________________________________\n";
        cout<<"\t\t\t\t\t\t|___________________________________|\n";
        cout<<"\t\t\t\t\t\t|        To Do Management           |\n";
        cout<<"\t\t\t\t\t\t|___________________________________|\n";
        cout<<"\n\n\n\n\t\t\t\t\t\tLoading";
        char x = 219;
        for(int i=0;i<35;i++)
        {
            cout<<x;
            if(i<10)
                Sleep(100);
            if(i>=10 && i<28)
                Sleep(80);
            if(i>=18)
                Sleep (25);
        }
        system("cls");
    }
    int manu()
    {
        cout<<"\n\n\n\n\n\n";

        cout<<"\t\t\t\t\t\t _____________________________________\n";
        cout<<"\t\t\t\t\t\t|        To Do Management             |\n";
        cout<<"\t\t\t\t\t\t|_____________________________________|\n";
        cout<<"\t\t\t\t\t\t|                                     |\n";
        cout<<"\t\t\t\t\t\t|      [1] Add Task                   |\n";
        cout<<"\t\t\t\t\t\t|      [2] Display All Task           |\n";
        cout<<"\t\t\t\t\t\t|      [3] Update Task                |\n";
        cout<<"\t\t\t\t\t\t|      [4] Delete Task (By Task Name) |\n";
        cout<<"\t\t\t\t\t\t|      [5] Delete Task (By Time)      |\n";
        cout<<"\t\t\t\t\t\t|      [6] Search by a Task           |\n";
        cout<<"\t\t\t\t\t\t|      [7] Search by Time             |\n";
        cout<<"\t\t\t\t\t\t|      [8] Delete All Task            |\n";
        cout<<"\t\t\t\t\t\t|      [9] Total Task                 |\n";
        cout<<"\t\t\t\t\t\t|                                     |\n";
        cout<<"\t\t\t\t\t\t|_____________________________________|\n";
        cout<<"\t\t\t\t\t\t|      [10] Exit                      |\n";
        cout<<"\t\t\t\t\t\t|_____________________________________|\n";
        cout<<"\n\n";

        int n;
        cin>>n;
        system("cls");
        return n;



    }

public:

    void performOperation()
    {
        start();
        string task[100];
        string start_time[100];
        string end_time[100];
        string time[100];
        int total_task=0;
        int check=0;
        check=manu();
        do
        {
            //Add Task
            if(check==1)
            {
                cout<<"\t\t\t\t\t\t Enter Task : ";
                cin>>task[k];
                cout<<"\t\t\t\t\t\t Start Time : ";
                cin>>start_time[k];
                cout<<"\t\t\t\t\t\t AM/PM Time : ";
                cin>>time[k];
                cout<<"\t\t\t\t\t\t End Time   : ";
                cin>>end_time[k];
                cout<<"\t\t\t\t\t\t AM/PM Time : ";
                cin>>time[k];
                k++;
                total_task++;
            }


                //Display Task
            else if(check == 2)
            {
                cout<<"\t\t\t\t\t\t _____________________________________\n";
                cout<<"\t\t\t\t\t\t|        My Todays Task               |\n";
                cout<<"\t\t\t\t\t\t|_____________________________________|\n\n";
                for(int i=0;i<100;i++)
                {
                    if(task[i]!="\0")
                    {

                        cout<<"\t\t\t\t\t\t Task : "<<task[i]<<"\t\t\tTime : "<<start_time[i]<<" "<< time[i]<<" - "<<end_time[i]<<" " <<time[i]<<"\n";

                    }
                }
            }




                //Update Task
            else if(check==3)
            {
                string temp,temp2,temp3,temp4;
                cout<<"\t\t\t\t\t\t Enter Update Task Time : ";
                cin>>temp;
                for(int i=0;i<100;i++)
                {
                    if(temp>=start_time[i] && temp <end_time[i])
                    {
                        cout<<"\t\t\t\t\t\t Enter New Task Name       : ";
                        cin>>temp2;
                        cout<<"\t\t\t\t\t\t Enter New Task Start Time : ";
                        cin>>temp3;
                        cout<<"\t\t\t\t\t\t Enter New Task End Time   : ";
                        cin>>temp4;
                        task[i]=temp2;
                        start_time[i]=temp3;
                        end_time[i]=temp4;
                        cout<<"\n\t\t\t\t\t\t Update Successfully.\n";
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t This Time Task is not Available.\n";
                    }


                }

            }




                //Delete Task Search by a Task Name
            else if(check==4)
            {
                string temp;
                cout<<"\t\t\t\t\t\t Enter Delete Task : ";
                cin>>temp;
                for(int i=0;i<100;i++)
                {
                    if(temp==task[i])
                    {
                        cout<<"\t\t\t\t\t\t Successfully Deleted\n";
                        cout<<"\t\t\t\t\t\t Task : "<<task[i]<<"\t\t\tTime : "<<start_time[i]<<" "<< time[i]<<" - "<<end_time[i]<<" " <<time[i]<<"\n";
                        task[i]="\0";
                        start_time[i]="\0";
                        end_time[i]="\0";
                        time[i]="\0";
                        total_task--;
                        break;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t This Task is not Available.\n";
                        cout<<"\t\t\t\t\t\t Deleted Failed.\n";
                        break;
                    }


                }

            }



                //Delete Task Search by Time
            else if(check==5)
            {
                string temp;
                cout<<"\t\t\t\t\t\t Enter Deleting Task Time : ";
                cin>>temp;
                for(int i=0;i<100;i++)
                {
                    if(temp>=start_time[i] && temp<end_time[i])
                    {
                        cout<<"\t\t\t\t\t\t Successfully Deleted\n";
                        cout<<"\t\t\t\t\t\t Task : "<<task[i]<<"\t\t\tTime : "<<start_time[i]<<" "<< time[i]<<" - "<<end_time[i]<<" " <<time[i]<<"\n";
                        task[i]="\0";
                        start_time[i]="\0";
                        end_time[i]="\0";
                        time[i]="\0";
                        total_task--;
                        break;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t This Task is not Available.\n";
                        cout<<"\t\t\t\t\t\t Deleted Failed.\n";
                        break;
                    }


                }

            }



                //Search by a task
            else if(check==6)
            {
                string temp;
                cout<<"\t\t\t\t\t\t Task : ";
                cin>>temp;
                for(int i=0;i<100;i++)
                {
                    if(temp==task[i])
                    {
                        cout<<"\t\t\t\t\t\t The Task is Available.\n";
                        cout<<"\t\t\t\t\t\t Task : "<<task[i]<<"\t\t\tTime : "<<start_time[i]<<" "<< time[i]<<" - "<<end_time[i]<<" " <<time[i]<<"\n";
                        break;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t The Task is not Available.\n";
                        break;
                    }
                }

            }


                //Search by Time
            else if(check==7)
            {
                string temp;
                cout<<"\t\t\t\t\t\t Time : ";
                cin>>temp;
                for(int i=0;i<100;i++)
                {
                    if(temp>=start_time[i] && temp<end_time[i])
                    {
                        cout<<"\t\t\t\t\t\t The Task is Available.\n";
                        cout<<"\t\t\t\t\t\t Task : "<<task[i]<<"\t\t\tTime : "<<start_time[i]<<" "<< time[i]<<" - "<<end_time[i]<<" " <<time[i]<<"\n";
                        break;
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t The Task is not Available.\n";
                        break;
                    }
                }

            }



                //Delete all Task
            else if(check==8)
            {
                cout<<"\t\t\t\t\t\t All Task Delete Successfully Done.\n";
                for(int i=0;i<k;i++)
                {
                    task[i]="\0";
                    start_time[i]="\0";
                    end_time[i]="\0";

                }
                k=0;
                total_task=0;

            }


                //Total Task
            else if(check==9)
            {
                cout<<"\t\t\t\t\t\t _____________________________________\n";
                cout<<"\t\t\t\t\t\t|        My Todays Task               |\n";
                cout<<"\t\t\t\t\t\t|_____________________________________|\n\n";
                cout<<"\t\t\t\t\t\t The Total Task of the Day : "<<total_task<<"\n";


            }

            check=manu();













        }while(check!=10);



    }
};

int main()
{
    ToDoManager todo;
    todo.performOperation();

    return 0;

}


