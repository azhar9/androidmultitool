#include<iostream>
//#include<stdlib.h>
#include<string>
#include<windows.h>
#include<conio.h>
using namespace std;

void checkdevice();
void flashrecovery();
void install();
void backup();
void restore();
void sideload();
void rootdevice();
void title();
void home();
void instructions();
void insthome();
void graphics();
void start();
int main()
{
    system("cls");
    graphics();
    instructions();
    start();
}

void start()
{
    char x;

    system("cls");
    //system("color 5f");
    title();
    cout<<"\tMenu:\n\n";
    cout<<"\t1.Check Device";
    cout<<"\t\t\t2.Install APK\n\n\n";
    cout<<"\t3.Flash Recovery";
    //cout<<"\t\t4.Backup your Device\n\n";
    //cout<<"\t5.Restore your Device";
    cout<<"\t\t4.Install Custom Rom\n\n\n";
    cout<<"\t5.Root Device";
    cout<<"\t\t\t6.Instructions\n\n\n";
    cout<<"\t7.RESTART";
    cout<<"\t\t\t8.EXIT.\n\n\n";

    cout<<"\t\t      ->> Choice:";
    x=getche();
    switch(x)
    {
    case '1':
        checkdevice();
        break;
    case '2':
        install();
        break;
     case '3':
         flashrecovery();
        break;
    /* case '4':
         backup();
         break;
     case '5':
         restore();
        break; */
     case '4':
          sideload();
          break;
     case '5':
         rootdevice();
          break;
     case '8':
         //cout<<"\n\n\n\t\t\t->>Thanks for using my software\n";
         home();
         //exit(0);
         break;
     case '6':
          instructions();
          break;
     case '7':
          main();
          break;

     default:
        cout<<"Wrong option!!!!!!\n";
        start();
    }

}
void checkdevice()
{
    system("cls");
    title();
    cout<<"**If you feel it is not working just restart the software**\n\n";
    cout<<"::Device Check::\n";
    system("adb wait-for-device");
    system("adb devices");
    home();
}
void install()
{
    system("cls");
    title();
    cout<<"**If you feel it is not working just restart the software**\n";
    cout<<"::Install APK::\n";
    system("adb wait-for-device");
    system("adb devices");
    cout<<"Instructions:\n";
    cout<<"\n*****->Please Rename the apk to file.apk and place it in the root of this software\n\n";
    system("adb install file.apk");
    home();

}

void flashrecovery()
{
    system("cls");
    title();
    cout<<"**If you feel it is not working just restart the software**\n";
    cout<<"::Flash Recovery::\n";
    system("adb wait-for-device");
    system("adb devices");
    system("adb reboot bootloader");
    cout<<"Waiting for device\n";
    //system("fastboot wait-for-device");
    system("fastboot flash recovery recovery.img");
    cout<<"Finished Flashing Recovery\nCredits:Azhar.Syed\n";
    cout<<"Now Press the Buttons to goto Recovery\n";
    system("fastboot reboot");
    home();
}

  void backup()
  {
    system("cls");
    title();
    cout<<"**If you feel it is not working just restart the software**\n";
    cout<<"::Backup Device::\n";
    cout<<"Backup will be saved as backup.ab\n";
    system("adb wait-for-device");
    system("adb devices");
    system("adb backup -all");
    cout<<"**Backup Success**\n";
    home();

  }
  void restore()
  {
    system("cls");
    title();
    cout<<"::Restore Device::\n";
    cout<<"Copy the ""backup.ab"" in the root of this directory\n";
    system("adb wait-for-device");
    system("adb devices");
    system("adb restore backup.ab");
    cout<<"**Restore Success**\n";
    home();
  }
   void sideload()
   {
    system("cls");
    title();
    cout<<"**If you feel it is not working just restart the software**\n\n";
    cout<<"**For Flashing CUSTOMS ROMS you need to have already installed TWRP (OR) CWM in your device**\n\n";
    cout<<"::Flash Custom Rom::\n";
    cout<<"**Copy the custom rom in the root of this directory\n";
    cout<<"**Rename it to update.zip\n";
    system("adb wait-for-device");
    system("adb devices");
    system("adb reboot recovery");
    cout<<"Select Install zip and then select install zip from sideload\n";
    system("adb sideload update.zip");
    home();
   }
   void rootdevice()
   {
    system("cls");
    title();
    cout<<"**For ROOTING you device you need to already have installed TWRP (OR) CWM**\n\n";
    cout<<"**ROOT DEVICE**\n";
    system("adb wait-for-device");
    system("adb devices");
    system("adb reboot recovery");
    cout<<"Use your CUSTOM RECOVERY to ROOT your device\n";
    home();
   }
   void title()
   {
         //system("color 5f");
         cout<<"\t\t\t\t\t\t\t\t\t  ANDROID  MULTI  TOOL \n\n"<<endl;
         cout<<"\t\t\t\t\t\t\t  Programmer ->> Azhar.Syed :: Email ->> syedazhar9356@gmail.com\n\n"<<endl;
   }
   void home()
   {
       char choice;
       //system("color 5f");
       cout<<"\n\n\t->> Do you want to go to MAIN MENU??\n\n\t->> Press 'Y' or 'y' to Continue or 'N' or 'n' to Exit\n";
       cout<<"\n\n\t->> Choice:";
       choice=getche();
       if(choice=='Y'||choice=='y')
       {
           start();
       }
       else
       {

             if(choice=='N'||choice=='n')
               {
                            cout<<"\t->> \nThanks for using my Software.Contact me if you have any queries.\n\n";
                            exit(0);
               }
       else
       {
           system("cls");
           cout<<"->>Wrong Option\n";
           title();
           home();
       }

       }


   }
   void instructions()
   {
       system("cls");
       title();
       //system("color 5f");
       //system("mode con: cols=175 lines=70");
       cout<<"::INSTRUCTIONS::\n\n";
       cout<<"**PLEASE READ THEM CAREFULLY**\n\n\n";
       cout<<"->>1.Please make sure that you had installed the correct ""ADB DRIVERS"" of your device.\n\n\n";
       cout<<"->>2.Enable USB-DEBUGGING in your Device.To enable it open settings->Aboutdevice->click on buildno 8 times and now goto settings and you see a new option Developer Options->click on USB Debugging\n\n\n";
       cout<<"->>3.If your doing this for the first time when you select check device in this Software menu a message will be pop up.Just tick and agree on your phone.\n\n\n";
       cout<<"->>4.To Install any apk just rename the apk to ""file.apk"" and place it in the root of this software.\n\n\n";
       cout<<"->>5.To Flash any Custom recovery (twrp or cwm) just rename it to ""recovery.img"" and place it in the root of this software. \n\n\n";
       cout<<"->>6.To ROOT your device,download the root required .zip from Internet and place it in the External or Internal Storage.\n\n\n";
       cout<<"->>7.If Custom Rom installation is not working through this software copy the .zip rom to External Storage and the goto custom recovery and select install zip and then select the directory\n\n\n";
       cout<<"->>8.Know what are you doing and search in internet if you are not sure what are you doing.\n\n";
       cout<<"->>9.Use PDA-NET software present in this package.Contact me if you want some help.\n\n";
       insthome();

   }
   void insthome()
   {
       char choice;
       //system("color 5f");
       cout<<"\t->> Do you want to go to MAIN MENU??\n\t->> Press 'Y' or 'y' to Continue or 'N' or 'n' to Exit\n";
       cout<<"\t->> Choice:";
       choice=getche();
       if(choice=='Y'||choice=='y')
       {
           start();
       }
       else
       {

             if(choice=='N'||choice=='n')
               {
                            cout<<"\t->> \n\nThanks for using my Software.Contact me if you have any queries.\n\n";
                            exit(0);
               }
       else
       {
           system("cls");
           cout<<"->>Wrong Option\n";
           title();
           instructions();
       }

       }


   }
void graphics()
{
    system("mode con: cols=170 lines=70");
    system("cls");
    title();
    system("color f6");
    cout<<"::Graphics Layout::\n\n";
    cout<<" 1.Background : White  <<-->>  Text:Blue.(My Fav)\n\n";
    cout<<" 2.Background : Purple <<-->>  Text:White.\n\n";
    cout<<" 3.Background : Aqua   <<-->>  Text:Yellow.\n\n";
    cout<<" 4.Background : Black  <<-->>  Text:Green.(Hacker Theme)\n\n";
    cout<<" 5.Background : Purple <<-->>  Text:Light Yellow.(High Contrast)\n\n";
    cout<<" 6.Background : White  <<-->>  Text:Yellow.(DEFAULT)\n\n";

    char choice;
    cout<<"\tChoice:";
    choice=getch();
    switch (choice)
    {
    case '1':
        system("color F1");
        break;
     case '2':
        system("color 5F");
        break;
     case '3':
        system("color B6");
        break;
     case '4':
        system("color 0A");
        break;
     case '5':
        system("color 5E");
        break;
     case '6':
        system("color F6");
        break;
     default:
        system("cls");
        cout<<"Wrong Option!!!\n\n";
        graphics();
    }
}

