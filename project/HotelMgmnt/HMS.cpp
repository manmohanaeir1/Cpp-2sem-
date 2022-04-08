#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    //quantity
     int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodels = 0, Qshake = 0;
     //food iteams
     int Srooms=0, Spasta=0, Sburger=0, Snoodels=0, Sshake=0;
     //total proce of items
        int Total_rooms= 0, Total_pasta=0, Total_burger=0, Total_noodels=0, Total_shake=0;

    cout<<"\n\t Quantiiti of items we have";
    cout<<"\n Rooms we have";
    cout<<Qrooms;
    cout<<"\n Pasta we have";
    cin>>Qpasta;;
    cout<<"\n Burger we have";
    cin>>Qburger;
    cout<<"\n Noodels we have";
    cin>>Qnoodels;
    cout<<"\n Shake we have";
    cin>>Qshake;
        m:
        cout<<"\n\t\t Please selest from the given menu";
        cout<<"\n\t\t 1.Rooms";
        cout<<"\n\t\t 2.Pasta";
        cout<<"\n\t\t 3.Burger";
        cout<<"\n\t\t 4.Noodels";
        cout<<"\n\t\t 5.Shake";
        cout<<"\n\t\t 6.Information regarding selse and collection";
        cout<<"\n\t\t 7.Exit";
        cout<<"\n\t\t Enter your choice";
        cin>>choice;

        switch(choice)
        {
        case 1:
              cout<<"\n\n Enter the number of room you want";
            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms = Srooms+quant;
                Total_rooms = Total_rooms+quant*1000;
                cout<<"\n\t\t" <<quant <<"Your order is placed";
            }else{
                cout<<"\n\t only"<<Qrooms-Srooms <<"rooms are available in hotel";
            }
            break;

            case 2:
                cout<<"\n\n Enter the number of pasta you want";
                cin>>quant;
                if(Qpasta-Spasta >=quant)
            {
                Spasta = Spasta+quant;
                Total_pasta = Total_pasta+quant*250;
                cout<<"\n\t\t" <<quant <<"Your order is placed";
            }else{
                cout<<"\n\t only"<<Qpasta-Spasta <<"pasta are available in hotel";
            }   break;

            case 3:
                cout<<"\n\n Enter the number of burger you want";
                cin>>quant;
                if(Qburger-Sburger >=quant)
            {
                Sburger = Sburger+quant;
                Total_burger = Total_burger+quant*300;
                cout<<"\n\t\t" <<quant <<"Your order is placed";
            }else{  
                cout<<"\n\t only"<<Qburger-Sburger <<"burger are available in hotel";
            }   break;

            case 4:
                cout<<"\n\n Enter the number of noodels you want";
                cin>>quant;
                if(Qnoodels-Snoodels >=quant)
            {
                Snoodels = Snoodels+quant;
                Total_noodels = Total_noodels+quant*100;
                cout<<"\n\t\t" <<quant <<"Your order is placed";
            }else{
                cout<<"\n\t only"<<Qnoodels-Snoodels <<"noodels are available in hotel";
            }   break;

            case 5:
                cout<<"\n\n Enter the number of shake you want";
                cin>>quant;
                if(Qshake-Sshake >=quant)
            {
                Sshake = Sshake+quant;
                Total_shake = Total_shake+quant*150;
                cout<<"\n\t\t" <<quant <<"Your order is placed";
            }else{
                cout<<"\n\t only"<<Qshake-Sshake <<"shake are available in hotel";
            }   break;

            case 6:
            cout<<"\n\t Details of sales and collection";
            cout<<"\n\t\t Display numbers of rooms we had: "<<Qrooms;
            cout<<"\n\t\t Display numbers of rooms we had: "<<Srooms;
            cout<<"\n\n Remaining rooms:" <<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day:"<<Total_rooms;

            cout<<"\n\t\t Display numbers of pasta we had: "<<Qpasta;
            cout<<"\n\t\t Display numbers of pasta we sold: "<<Spasta;
            cout<<"\n\n Remaining pasta:" <<Qpasta-Spasta;
            cout<<"\n\n Total pasta collection for the day:"<<Total_pasta;

            cout<<"\n\t\t Display numbers of burger we had: "<<Qburger;
            cout<<"\n\t\t Display numbers of burger we sold: "<<Sburger;    
            cout<<"\n\n Remaining burger:" <<Qburger-Sburger;   
            cout<<"\n\n Total burger collection for the day:"<<Total_burger;

            cout<<"\n\t\t Display numbers of noodels we had: "<<Qnoodels;   
            cout<<"\n\t\t Display numbers of noodels we sold: "<<Snoodels;
            cout<<"\n\n Remaining noodels:" <<Qnoodels-Snoodels;
            cout<<"\n\n Total noodels collection for the day:"<<Total_noodels;  

            cout<<"\n\t\t Display numbers of shake we had: "<<Qshake;
            cout<<"\n\t\t Display numbers of shake we sold: "<<Sshake;
            cout<<"\n\n Remaining shake:" <<Qshake-Sshake;
            cout<<"\n\n Total shake collection for the day:"<<Total_shake;
            break;
             
             case 7:
             exit(0);

            default:
            cout<<"\n\t\t Invalid choice!! Please select the number mention above.";
            break;
        }

        goto m;

        return 0;


}