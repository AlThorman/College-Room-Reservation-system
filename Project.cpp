#include <iostream>
//#include <string>
#include <cstring>
using namespace std;

int main()

{
    int choice,j=50,i=4,choice2,check = 1,k=0,choice3,choice4,choice5,choice6,choice7,choice8,flaq=1,size1=0,size2=0,flaq2=1,b = 0,t=0,p=1,w1=0,w2=0;
    string instructor[i][j],Assign[b][k],room[i][j], rooms , instructors;
    
    while ((check!=0))
    {
        cout<<"choose one of the Tools: \n";
        cout<<"\n[1] Add new room/instructor.";
        cout<<"\n[2] Assign room for instructor.";
        cout<<"\n[3] Remove room from instructor details and vice versa.";
        cout<<"\n[4] Update room/instructor details.";
        cout<<"\n[5] Delete room/instructor records.";
        cout<<"\n[6] Show room/instructor list.";
        cout<<"\n[7] Search room details.";
        cout<<"\n[8] Search instructor details.";
        cout<<"\n[9] exist from the App. \n";
        cout<<"Choose now: ";
        
        cin>> choice;
        
        switch (choice)
        {
                
            case 1:
                cout<<"[1] Add new room.";
                cout<<"\n[2] Add new instructor\n";
                cout<<"Choose now: ";
                cin>>choice2;
                if (choice2>=1 && choice2<=2)
                    
                {
                    choice2;
                    
                }
                else
                {
                    choice2=0;
                    cout<<"\nInvalid input.\n";
                    break;
                }
                switch (choice2)
            {
                    
                case 1:
                    
                    for (j=0;j<50;j++)
                    {
                        for (i=0;i<=3 ;i++)
                        {
                            if (flaq==1)
                            {
                            switch (i)
                            {
                                case 0:
                                    
                                    cout<<"\nWhat type of room you want:\n";
                                    cout<<"\n[1] Big room.";
                                    cout<<"\n[2] Small room.";
                                    cout<<"\n[3] Lab\n";
                                    cout<<"Choose now: ";
                                    cin>>room[i][j];
                                    
                                    if (room[i][j]>="1" && room[i][j]<="3")
                                    {
                                        room[i][j];
                                        
                                    }
                                    else
                                    {
                                        room[0][j]="0";
                                        cout<<"\nInvalid input.\n";
                                        flaq=0;
                                    }
                                    break;
                                    
                                case 1:
                                    
                                    cout<<"\nEnter the number of the room: ";
                                    cin>>room[i][j];
                                    
                                    if (room[i][j]!="0")
                                    {
                                        room[i][j];
                                        size1++;
                                    }
                                    else
                                    {
                                        room[1][j]="0";
                                        room[0][j]="0";
                                        cout<<"\nInvalid input.\n";
                                        flaq=0;
                                    }
                                    break;
                                    
                                    
                                case 2:
                                    
                                    cout<<"\nChoose the location of the room: \n";
                                    cout<<"\n[1] Right upstairs.";
                                    cout<<"\n[2] Left upstairs.";
                                    cout<<"\n[3] Right downstairs.";
                                    cout<<"\n[4] Left downstairs.\n";
                                    cout<<"Choose now: ";
                                    cin>>room[i][j];
                                    if (room[i][j]>="1" && room[i][j]<="4")
                                    {
                                        room[i][j];
                                        
                                    }
                                    else
                                    {
                                        room[1][j]="0";
                                        room[0][j]="0";
                                        room[2][j]="0";
                                        cout<<"\nInvalid input.\n";
                                        flaq=0;
                                    }
                                    break;
                                    
                                case 3:
                                    
                                    room[i][j]="1";
                                    break;
                                    
                                    
                                    
                                    
                            }
                            }
                            
                            
                            
                            
                            
                        }
                        
                        if (flaq==1)
                        {
                        cout<<"\nDo you want to add a new room?\n";
                        cout<<"\n[1] Yes.";
                        cout<<"\n[2] No.\n";
                        cout<<"Choose now: ";
                        
                        cin>>flaq;
                        if (flaq==2){
                            break;
                        }
                        }
                            else
                            {
                                cout<<"\nDo you want to try again ?\n";
                                cout<<"\n[1] Yes.";
                                cout<<"\n[2] No.\n";
                                cout<<"Choose now: ";
                                
                                cin>>flaq;
                                if (flaq==2)
                                    break;
                                
                                
                                
                            }
                    }
                    
                
                        
                        
                        
        
                    
                    break;
                    
                case 2:
                    for (j=0;j<50;j++)
                    {
                        for (i=0;i<=3;i++)
                        {
                            if (flaq2==1)
                            {
                            switch (i)
                            {
                                case 0:
                                    
                                    cout<<"\nEnter the name of the instructor: ";
                                    cin>>instructor[i][j];
                                    
                                    if (instructor[i][j]!="0")
                                    {
                                        instructor[i][j];
                                        size2++;
                                    }
                                    else
                                    {
                                        
                                        
                                        instructor[0][j]="0";
                                        cout<<"\nInvalid input.\n";
                                        flaq2=0;
                                    }
                                    break;
                                    
                                case 1:
                                    
                                    cout<<"\nEnter the ID of the instructor: ";
                                    cin>>instructor[i][j];
                                    if (instructor[i][j]!="0")
                                    {
                                        instructor[i][j];
                                    }
                                    else
                                    {
                                        
                                        
                                        instructor[0][j]="0";
                                        instructor[1][j]="0";
                                        cout<<"\nInvalid input.\n";
                                        flaq2=0;
                                    }
                                    break;
                                    
                                case 2:
                                    
                                    cout<<"\nEnter phone number of the instructor: ";
                                    cin>>instructor[i][j];
                                    if (instructor[i][j]!="0")
                                    {
                                        instructor[i][j];
                                    }
                                    else
                                    {
                                        
                                        
                                        instructor[0][j]="0";
                                        instructor[1][j]="0";
                                        instructor[2][j]="0";
                                        cout<<"\nInvalid input.\n";
                                        flaq2=0;
                                    }
                                    
                                case 3:
                                    
                                    instructor[3][j]="1";
                                    
                                    
                                    break;
                                    
                                    
                                    
                                    
                                    
                            }
                            
                            
                            
                            
                            
                            
                        }
                        }
                            if (flaq2==1)
                            {
                        cout<<"\nDo you want to add a new instructor?\n";
                        cout<<"\n[1] Yes.";
                        cout<<"\n[2] No.\n";
                        cout<<"Choose now: ";
                        
                        cin>>flaq2;
                        if (flaq2==2)
                            break;
                            }
                        
                        else
                        {
                            cout<<"\nDo you want to try again ?\n";
                            cout<<"\n[1] Yes.";
                            cout<<"\n[2] No.\n";
                            cout<<"Choose now: ";
                            
                            cin>>flaq2;
                            if (flaq2==2)
                                break;
                            
                            
                            
                        }
                        

                    

                    }
                    break;

            }
            
                break;
                
                
            case 2:
                
                cout<<"These are the only available room: \n";
                
                
                
                
                for (j=0;j<size1;j++)
                {
                    if (room[3][j] == "1" && room[1][j]!="0")
                    {
                        cout<<room[1][j]<<" index: "<<j<<" \n";
                    }
                }
                
                
                cout<<"Enter the number of the index: ";
                cin>>k;
                j=k;
                room[3][j]="0";
                Assign[b][k];
                w1++;
                
                
                cout<<"These are the only available instructor: \n";
                
                for (j=0;j<size2;j++)
                {
                    if (instructor[3][j]=="1" && instructor[0][j]!="0")
                    {
                        cout<<instructor[0][j]<<" index: "<<j<<" \n";
                    }
                }
                
                cout<<"Enter the number of the index: ";
                cin>>b;
                
                j=k;
                instructor[3][j]="0";
                Assign[b][k];
                w2++;
                
                
                
                
                cout<<"\nThe room reserved.\n";
                
                break;
                
                
                
            case 3:
                cout<<"\n[1] Remove room from instructor.";
                cout<<"\n[2] Remove instructor from room.\n";
                cout<<"Choose now: ";
                cin>>choice3;
                
                switch (choice3)
            {
                    
                case 1:
                    cout<<"These are the instructor that has room: \n";
                    for (b=0;b<w2;b++)
                    {
                        for (k=0;k<w1;k++)
                        {
                            if (Assign[b][k]!="0")
                            {
                                
                                cout<<Assign[b][k]<<" index: "<<k<<" \n";
                            }
                            
                            
                        }
                        
                        
                    }
                    
                    cout<<"Enter the number of the index: ";
                    cin>>k;
                    Assign[b][k]="0";
                    
                    room[3][j]="1";
                    cout<<"\nThe room deleted\n";
                    break;
                    
                case 2:
                    
                    cout<<"These are the room that has instructor: \n";
                    
                    for (j=0;j<size1;j++)
                    {
                        
                        if  (room[3][j]=="0")
                            
                            
                        {
                            
                            cout<<room[1][j]<<" index: "<<j<<" \n";
                        }
                    }
                    
                    cout<<"Enter the number of the index: ";
                    cin>>j;
                    room[1][j]=room[3][j];
                    
                    room[3][j]="1";
                    Assign[b][k]=room[1][j];
                    Assign[b][k]=Assign[j][j];
                    
                    cout<<"\nThe instructor deleted\n";
                    break;
                    
                    
                    
                    
                    
                    break;
                    
                    
            }
                break;
                
            case 4:
                cout<<"\n[1] Update room details.";
                cout<<"\n[2] Update instructor details. \n";
                cout<<"Choose now: ";
                cin>>choice4;
                
                switch (choice4)
            {
                case 1:
                    for (j=0;j<size1;j++)
                    {
                        if (room[1][j]!="0")
                        {
                            cout<<room[1][j]<<" index: "<<j<<" \n";
                            
                        }
                        
                    }
                    cout<<"Enter the number of the index: ";
                    cin>>j;
                    
                    cout<<"\nYou want edit on:";
                    cout<<"\n[1] Type of room.";
                    cout<<"\n[2] The location of the room.\n";
                    cout<<"Choose now: ";
                    
                    cin>>choice5;
                    
                    switch (choice5)
                {
                    case 1:
                        cout<<"\nWhat type of room you want:\n";
                        cout<<"\n[1] Big room.";
                        cout<<"\n[2] Small room.";
                        cout<<"\n[3] Lab\n";
                        cout<<"Choose now: ";
                        cin>>room[0][j];
                        
                        cout<<"\nThe room details has been Updated.\n";
                        break;
                        
                        
                    case 2:
                        cout<<"\nChoose the location of the room: \n";
                        cout<<"\n[1] Right upstairs.";
                        cout<<"\n[2] Left upstairs.";
                        cout<<"\n[3] Right downstairs.";
                        cout<<"\n[4] Left downstairs.\n";
                        cout<<"Choose now: ";
                        cin>>room[2][j];
                        cout<<"\nThe room details has been Updated.\n";
                        
                        break;
                        
                        
                }
                    
                    break;
                    
                case 2:
                    for (j=0;j<size2;j++)
                    {
                        if (instructor[0][j]!="0")
                        {
                            cout<<instructor[0][j]<<" index: "<<j<<" \n";
                            
                        }
                        
                    }
                    cout<<"Enter the number of the index: ";
                    cin>>j;
                    
                    cout<<"\nYou want edit on:";
                    cout<<"\n[1] The name of the instructor.";
                    cout<<"\n[2] The ID of the instructor.";
                    cout<<"\n[3] The phone number of the instructor.";
                    cout<<"Choose now: ";
                    
                    cin>>choice6;
                    
                    switch (choice6)
                {
                        
                    case 1:
                        cout<<"\nEnter the name of the instructor: ";
                        cin>>instructor[0][j];
                        cout<<"\nThe instructor details has been Updated.\n";
                        
                        break;
                        
                    case 2:
                        cout<<"\nEnter the ID of the instructor: ";
                        cin>>instructor[1][j];
                        cout<<"\nThe instructor details has been Updated.\n";
                        
                        break;
                    case 3:
                        cout<<"\nEnter phone number of the instructor: ";
                        cin>>instructor[2][j];
                        cout<<"\nThe instructor details has been Updated.\n";
                        
                        break;
                        
                        
                }
                    break;
            }
                
                break;
                
            case 5:
                cout<<"\n[1] Delete room records.";
                cout<<"\n[2] Delete instructor records.\n";
                cout<<"Choose now: ";
                cin>>choice7;
                
                switch (choice7)
            {
                case 1:
                    for (j=0;j<size1;j++)
                    {if (room[1][j]!="0")
                    {
                        cout<<room[1][j]<<" index: "<<j<<" \n";
                        
                    }
                        
                        
                    }
                    cout<<"Enter the number of the index: ";
                    cin>>j;
                    
                    room[0][j]="0";
                    room[1][j]="0";
                    room [2][j]="0";
                    room[3][j]="1";
                    
                    cout<<"\nThe record has been Deleted."<<endl;
                    break;
                    
                    
                    
                    
                    
                case 2:
                    for (j=0;j<size2;j++)
                    {
                        if (instructor[0][j]!="0")
                        {
                            cout<<instructor[0][j]<<" index: "<<j<<" \n";
                            
                        }
                        
                        
                    }
                    cout<<"Enter the number of the index: ";
                    cin>>j;
                    
                    instructor[0][j]="0";
                    instructor[1][j]="0";
                    instructor [2][j]="0";
                    cout<<"\nThe record has been Deleted."<<endl;
                    
                    break;
            }
                
                break;
                
            case 6:
                cout<<"\n[1] Show room list.";
                cout<<"\n[2] show instructor list.\n";
                cout<<"Choose now: ";
                cin>>choice8;
                
                switch (choice8)
            {
                    
                case 1:
                    
                    for (j=0;j<size1;j++)
                    {
                        if (room[1][j]!="0")
                        {
                            cout<<room[1][j]<<" index: "<<j<<" \n";
                            
                        }
                        
                        
                        
                    }
                    cout<<"Enter the number of the index: ";
                    cin>>j;
                    
                    if (room[0][j]=="1")
                    {
                        cout<<"\nThe room [ "<<room[1][j]<<" ] has a big room.";
                        
                    }
                    
                    
                    else if (room[0][j]=="2")
                    {
                        cout<<"\nThe room [ "<<room[1][j]<<" ] has a small room.";
                        
                    }
                    else if (room[0][j]=="3")
                    {
                        cout<<"\nThe room [ "<<room[1][j]<<" ] has a lab.";
                        
                    }
                    
                    
                    if (room[2][j]=="1")
                    {
                        cout<<"\nThe room [ "<<room[1][j]<<" ] is upstairs at the Right.\n";
                    }
                    
                    else if (room[2][j]=="2")
                    {
                        cout<<"\nThe room [ "<<room[1][j]<<" ] is upstairs at the left.\n";
                    }
                    
                    else if (room[2][j]=="3")
                    {
                        cout<<"\nThe room [ "<<room[1][j]<<" ] is downstairs at the Right.\n";
                    }
                    
                    else  if (room[2][j]=="4")
                    {
                        cout<<"\nThe room [ "<<room[1][j]<<" ] is downstairs at the left.\n";
                    }
                    break;
                    
                case 2:
                    for (j=0;j<size2;j++)
                    {
                        if (instructor[0][j]!="0")
                        {
                            cout<<instructor[0][j]<<" index: "<<j<<" \n";
                            
                        }
                        
                        
                    }
                    cout<<"Enter the number of the index: ";
                    cin>>j;
                    
                    for (j=0;j<size2;j++)
                    {
                        
                        cout<<"\nThe ID of the instructor: "<<instructor[0][j]<<" is : "<<instructor[1][j];
                        cout<<"\nThe phone number of the instructor: "<<instructor[0][j]<<" is : "<<instructor[2][j]<<endl;
                        
                        break;
                    }
                    
            }
                break;
            case 7:
                
                cout<<"Enter the number of the room: ";
                cin>>rooms;
                
                for (j=0;j<size1;j++)
                {
                    if (rooms==room[1][j])
                    {
                        if (room[0][j]=="1")
                        {
                            cout<<"\nThe room [ "<<room[1][j]<<" ] has a big room.";
                            
                        }
                        
                        
                        else if (room[0][j]=="2")
                        {
                            cout<<"\nThe room [ "<<room[1][j]<<" ] has a small room.";
                            
                        }
                        else if (room[0][j]=="3")
                        {
                            cout<<"\nThe room [ "<<room[1][j]<<" ] has a lab.";
                            
                        }
                        
                        
                        if (room[2][j]=="1")
                        {
                            cout<<"\nThe room [ "<<room[1][j]<<" ] is upstairs at the Right.\n";
                        }
                        
                        else if (room[2][j]=="2")
                        {
                            cout<<"\nThe room [ "<<room[1][j]<<" ] is upstairs at the left.\n";
                        }
                        
                        else if (room[2][j]=="3")
                        {
                            cout<<"\nThe room [ "<<room[1][j]<<" ] is downstairs at the Right.\n";
                        }
                        
                        else  if (room[2][j]=="4")
                        {
                            cout<<"\nThe room [ "<<room[1][j]<<" ] is downstairs at the left.\n";
                        }
                    }
                    
                    //         else
                    //         {
                    //             cout<<"\nThis room is not exsit.\n";
                    //        break;
                    //    }
                    if  (room[3][j]=="0")
                        
                        
                    {
                        
                        cout<<"The room [ "<<room[1][j]<<" ] Assigned for the instructor [ ";
                        
                        for (b=0;b<w2;b++)
                        {
                            for (k=0;k<w1;k++)
                            {
                                if (Assign[b][k]!="0")
                                {
                                    
                                    cout<<Assign[b][k]<<" ]"<<endl;
                                }
                                
                                
                            }
                        }
                        
                        
                        
                        
                    }
                    
                    
                    
                    
                }
                break;
            case 8:
                cout<<"Enter the name of the instructor: ";
                cin>>instructors;
                for (j=0;j<size2;j++)
                {
                    if (instructors==instructor[0][j])
                    {
                        cout<<"\nThe ID of the instructor [ "<<instructor[0][j]<<" ] is [ "<<instructor[1][j]<<" ]";
                        cout<<"\nThe phone number of the instructor [ "<<instructor[0][j]<<" ] is [ "<<instructor[2][j]<<" ]"<<endl;
                    }
                    
                    //   else
                    //   {
                    //        cout<<"\nThis instructor is not exsit.\n";
                    //          break;
                    //      }
                    
                    if (room[3][j]=="0")
                    {                    cout<<"The instructor [ "<<instructor[0][j]<<" ] has this room [ ";
                        
                        for (j=0;j<size1;j++)
                        {
                            
                            if  (room[3][j]=="0")
                                
                                
                            {
                                
                                cout<<room[1][j]<<" ]"<<endl;
                            }
                        }
                        
                        
                        
                    }
                    
                }
                break;
                
            case 9:
                cout<<"\nThank you for using my app. :)";
                cout<<"\nProgramed by: AbdulRahman Fuad AlThorman.";
                cout<<"\nSupervised by: Mr. Mohammed Khaled Alduniawi.";
                cout<<"\nGoodBye. !!"<<endl;
                
                check=0;
                break;
                
            default:
                
                cout<<"Invalid Input"<<endl;
                break;
                
                
                
                
                
                
        }
        
        
    }
    
    
    return 0;
}
