#include "header.h" 
 
 int main()
 {
     list one;
     list two;
     int reply;
     char answer;
     char E;
    for (int i = 0;i < 2;i++)
    {
        cout<<"Which list do you prefer to fill?(1/2)"<<endl;
        cin>>reply;
        switch (reply)
        {
            case 1: cout<<"1st symbol:"<<endl;
                    cin>>answer;
                    one.push(answer);
                    cout<<"Any more symbols?(y/n)"<<endl;
                    cin>>answer;
                    if (answer == 'y')
                    {
                        while (answer!='n')
                        {
                        cin>>answer;
                        if (answer!='n')
                            {
                             one.push(answer);
                            }
                        }
                        break;
                    }
            case 2: cout<<"1st symbol:"<<endl;
                    cin>>answer;
                    two.push(answer);
                    cout<<"Any more symbols?(y/n)"<<endl;
                    cin>>answer;
                    if (answer == 'y')
                    {
                        while (answer!='n')
                        {
                        cin>>answer;
                        if (answer!='n')
                            {
                            two.push(answer);
                            }
                        }
                        break;
                    }
            default: cout<<"Wrong answer!"<<endl;break;
        }
    }
    cout<<"Which function do you prefer to choose?"<<endl;
    cout<<"1 - add"<<endl;
    cout<<"2 - mddl"<<endl;
    cout<<"3 - reverse"<<endl;
    cout<<"4 - splt"<<endl;
    cout<<"5 - file"<<endl;
    cin>>reply;
    switch(reply)
    {
        case 1: cout<<"Which list do you need for work?"<<endl;
                cin>>reply;
                switch(reply)
                {
                    case 1:one.add(two);
                           one.output();
                           break;
                    case 2:two.add(one);
                           two.output(); 
                           break;
                }
                break;
        case 2: cout<<"Which list do you need for work?"<<endl;
                cin>>reply;
                cout<<"Write your E"<<endl;
                cin>>E;
                switch(reply)
                {
                    case 1:one.mddl(E,two);
                           one.output();
                           break;
                    case 2:two.mddl(E,one); 
                           two.output();
                           break;
                }
                break;
        case 3: cout<<"Which list do you need for work?"<<endl;
                cin>>reply;
                switch(reply)
                {
                    case 1:one.reverse();
                           one.output();
                           break;
                    case 2:two.reverse(); 
                           two.output();
                           break;
                }
                break;
        case 4: cout<<"Which list do you need for work?"<<endl;
                cin>>reply;
                switch(reply)
                {
                    case 1:one.splt();
                           one.output();
                           break;
                    case 2:two.splt(); 
                           two.output();
                           break;
                }
                break;
        case 5: cout<<"Which list do you need for work?"<<endl;
                cin>>reply;
                switch(reply)
                {
                    case 1:one.file();
                           one.output();
                           break;
                    case 2:two.file(); 
                           two.output();
                           break;
                }
                break;
        default: cout<<"Wrong answer!"<<endl;
    }
    cout<<endl;
    return 0;
 }


