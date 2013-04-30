#include<fstream.h>
#include<process.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
/*
GAMZ Web Maker
Author: Girik Malik & Mayank Gupta
License : Creative Commons 3.0
*/
int winpos=1;
int m=0,n=0,a=1,b=3;
char name[50];
void menu()
{

  clrscr();
	window(0,0,80,50);
	textbackground(9);
	clrscr();
	clrscr();
	textbackground(4);         //1 red
	window(10,10,21,15);

	clrscr();
	textbackground(15);           //1 yellow
	window(10,10,20,14);

	clrscr();
	textcolor(0);                     // window 1   winpos=1;
	gotoxy(2,7);
	cprintf("\n\n\r Enter Text");
	gotoxy(2,2);

	textbackground(4);              //2 red
	window(36,10,46,15);

	clrscr();
	textbackground(6);             //2 yellow
	window(36,10,45,14);

	clrscr();
	textcolor(0);              // window 2
	cprintf("\n\n\r   Photo");
	gotoxy(2,2);

	textbackground(4);                 // 3 red
	window(62,10,72,15);

	clrscr();
	textbackground(6);                   //3 yellow
	window(62,10,71,14);

	clrscr();
	textcolor(0);                    // window 3
	cprintf("\n\n\r   Hyper\n    Linking");

	textbackground(4);               //4 red
	window(10,30,21,35);

	clrscr();
	textbackground(6);               //4 yellow
	window(10,30,20,34);

	clrscr();
	textcolor(0);                    // window 4
	cprintf("\n\n\r   Photo\n     Linking");

	textbackground(4);                   //5 red
	window(36,30,46,35);

	clrscr();
	textbackground(6);                    //5 yellow
	window(36,30,45,34);

	clrscr();
	textcolor(0);                  // window 5
	cprintf("\n\n\r   Audio\n     Video");

	textbackground(4);                   //6 red
	window(62,30,72,35);

	clrscr();
	textbackground(6);                   //6 yellow
	window(62,30,71,34);

	clrscr();
	textcolor(0);                // window 6
	cprintf("\n\n\r  Scratch\n    Mode");

	window(0,0,80,50);
	gotoxy(0,0);
	textcolor(0);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n    CURRENT PROJECT : "<<name;

	window(10,10,20,14);         //window 1
	gotoxy(1,b);
	char ch1;
	do
	{
		ch1=getch();
		if(ch1==27)
		{
			winpos=7;
		}
		if(ch1==77)
		{
			winpos++;
			if(winpos==2)
			{
				clrscr();
				textbackground(6);           //1 yellow
				window(10,10,20,14);

				clrscr();
				textcolor(0);                     // window 1   winpos=1;
				cprintf("\n\n\r Enter Text");

				textbackground(15);             //2 yellow
				window(36,10,45,14);

				clrscr();
				textcolor(0);              // window 2
				cprintf("\n\n\r   Photo");
			}
			if(winpos==3)
			{
				clrscr();
				textbackground(6);             //2 yellow
				window(36,10,45,14) ;

				clrscr();
				textcolor(0);              // window 2
				cprintf("\n\n\r   Photo");

				textbackground(15);                   //3 yellow
				window(62,10,71,14);

				clrscr();
				textcolor(0);                    // window 3
				cprintf("\n\n\r   Hyper\n    Linking");
			}
			if(winpos==4)
			{
				clrscr();
				textbackground(6);                   //3 yellow
				window(62,10,71,14);

				clrscr();
				textcolor(0);                    // window 3
				cprintf("\n\n\r   Hyper\n    Linking");

				textbackground(15);               //4 yellow
				window(10,30,20,34);

				clrscr();
				textcolor(0);                    // window 4
				cprintf("\n\n\r   Photo\n     Linking");
			}
			if(winpos==5)
			{
				clrscr();
				textbackground(6);               //4 yellow
				window(10,30,20,34);

				clrscr();
				textcolor(0);                    // window 4
				cprintf("\n\n\r   Photo\n     Linking");

				textbackground(15);                    //5 yellow
				window(36,30,45,34);

				clrscr();
				textcolor(0);                  // window 5
				cprintf("\n\n\r   Audio\n     Video");
			}
			if(winpos==6)
			{
				clrscr();
				textbackground(6);                    //5 yellow
				window(36,30,45,34);
				clrscr();
				textcolor(0);                  // window 5
				cprintf("\n\n\r   Audio\n     Video");

				textbackground(15);                   //6 yellow
				window(62,30,71,34);

				clrscr();
				textcolor(0);                // window 6
				cprintf("\n\n\r  Scratch\n    Mode");
				winpos=7;
			}
			if(winpos==7)
			{
				winpos=1;
				clrscr();
				textbackground(6);                   //6 yellow
				window(62,30,71,34);

				clrscr();
				textcolor(0);                // window 6
				cprintf("\n\n\r  Scratch\n    Mode");

				textbackground(15);           //1 yellow
				window(10,10,20,14);

				clrscr();
				textcolor(0);                     // window 1   winpos=1;
				cprintf("\n\n\r Enter Text");
			}
		}
		if(ch1==72)
		{
			if(winpos>3)
				winpos-=3;
			else
				winpos+=3;
			if(winpos==1)
			{
				winpos=1;
				clrscr();
				textbackground(6);             //4 yellow
				window(10,30,20,34);

				clrscr();
				textcolor(0);              // window 4
				cprintf("\n\n\r   Photo\n     Linking");

				textbackground(15);           //1 yellow
				window(10,10,20,14);

				clrscr();
				textcolor(0);                     // window 1   winpos=1;
				cprintf("\n\n\r Enter Text");

			}
			if(winpos==2)
			{
				winpos=2;
				clrscr();
				textbackground(6);                   //5 yellow
				window(36,30,45,34);

				clrscr();
				textcolor(0);                    // window 5
				cprintf("\n\n\r   Audio\n     Video");

				textbackground(15);             //2 yellow
				window(36,10,45,14);

				clrscr();
				textcolor(0);              // window 2
				cprintf("\n\n\r   Photo");

			}

			if(winpos==3)
			{
				winpos=3;
				clrscr();
				textbackground(6);               //3 yellow
				window(62,30,71,34);

				clrscr();
				textcolor(0);                    // window 6
				cprintf("\n\n\r  Scratch\n    Mode");

				textbackground(15);                   //3 yellow
				window(62,10,71,14);

				clrscr();
				textcolor(0);                    // window 3
				cprintf("\n\n\r   Hyper\n    Linking");
			}
			if(winpos==4)
			{
				clrscr();
				textbackground(6);           //1 yellow
				window(10,10,20,14);

				clrscr();
				textcolor(0);                     // window 1   winpos=1;
				cprintf("\n\n\r Enter Text");

				textbackground(15);               //4 yellow
				window(10,30,20,34);

				clrscr();
				textcolor(0);                    // window 4
				cprintf("\n\n\r   Photo\n     Linking");

			}
			if(winpos==5)
			{
				clrscr();
				textbackground(6);             //2 yellow
				window(36,10,45,14);

				clrscr();
				textcolor(0);              // window 2
				cprintf("\n\n\r   Photo");

				textbackground(15);                    //5 yellow
				window(36,30,45,34);

				clrscr();
				textcolor(0);                  // window 5
				cprintf("\n\n\r   Audio\n     Video");
			}
			if(winpos==6)
			{
				clrscr();
				textbackground(6);                   //3 yellow
				window(62,10,71,14);

				clrscr();
				textcolor(0);                    // window 3
				cprintf("\n\n\r   Hyper\n    Linking");

				textbackground(15);                   //6 yellow
				window(62,30,71,34);

				clrscr();
				textcolor(0);                // window 6
				cprintf("\n\n\r  Scratch\n    Mode");
			}
		}
		if(ch1==80)
		{
			if(winpos<4)
				winpos+=3;
			else
				winpos-=3;
			if(winpos==1)
			{
				winpos=1;
				clrscr();
				textbackground(6);             //4 yellow
				window(10,30,20,34);

				clrscr();
				textcolor(0);              // window 4
				cprintf("\n\n\r   Photo\n     Linking");

				textbackground(15);           //1 yellow
				window(10,10,20,14);

				clrscr();
				textcolor(0);                     // window 1   winpos=1;
				cprintf("\n\n\r Enter Text");

			}
			if(winpos==2)
			{
				winpos=2;
				clrscr();
				textbackground(6);                   //5 yellow
				window(36,30,45,34);

				clrscr();
				textcolor(0);                    // window 5
				cprintf("\n\n\r   Audio\n     Video");

				textbackground(15);             //2 yellow
				window(36,10,45,14);

				clrscr();
				textcolor(0);              // window 2
				cprintf("\n\n\r   Photo");

			}
			if(winpos==3)
			{
				winpos=3;
				clrscr();
				textbackground(6);               //3 yellow
				window(62,30,71,34);

				clrscr();
				textcolor(0);                    // window 6
				cprintf("\n\n\r  Scratch\n    Mode");

				textbackground(15);                   //3 yellow
				window(62,10,71,14);

				clrscr();
				textcolor(0);                    // window 3
				cprintf("\n\n\r   Hyper\n    Linking");

			}
			if(winpos==4)
			{
				clrscr();
				textbackground(6);           //1 yellow
				window(10,10,20,14);

				clrscr();
				textcolor(0);                     // window 1   winpos=1;
				cprintf("\n\n\r Enter Text");

				textbackground(15);               //4 yellow
				window(10,30,20,34);

				clrscr();
				textcolor(0);                    // window 4
				cprintf("\n\n\r   Photo\n     Linking");

			}
			if(winpos==5)
			{
				clrscr();
				textbackground(6);             //2 yellow
				window(36,10,45,14);

				clrscr();
				textcolor(0);              // window 2
				cprintf("\n\n\r   Photo");

				textbackground(15);                    //5 yellow
				window(36,30,45,34);

				clrscr();
				textcolor(0);                  // window 5
				cprintf("\n\n\r   Audio\n     Video");
			}
			if(winpos==6)
			{
				clrscr();
				textbackground(6);                   //3 yellow
				window(62,10,71,14);

				clrscr();
				textcolor(0);                    // window 3
				cprintf("\n\n\r   Hyper\n    Linking");

				textbackground(15);                   //6 yellow
				window(62,30,71,34);

				clrscr();
				textcolor(0);                // window 6
				cprintf("\n\n\r  Scratch\n    Mode");
			}
		}
		if(ch1==75)
		{
			winpos--;
			if(winpos==0)
			{
				winpos=6;
				clrscr();
				textbackground(6);           //1 yellow
				window(10,10,20,14);

				clrscr();
				textcolor(0);                     // window 1   winpos=1
				cprintf("\n\n\r Enter Text");

				textbackground(15);                   //6 yellow
				window(62,30,71,34);

				clrscr();
				textcolor(0);                // window 6
				cprintf("\n\n\r  Scratch\n    Mode");

			}
			if(winpos==5)
			{
				clrscr();
				textbackground(6);                   //6 yellow
				window(62,30,71,34);

				clrscr();
				textcolor(0);                // window 6
				cprintf("\n\n\r  Scratch\n    Mode");

				textbackground(15);                    //5 yellow
				window(36,30,45,34);

				clrscr();
				textcolor(0);                  // window 5
				cprintf("\n\n\r   Audio\n     Video");

			}
			if(winpos==4)
			{
				clrscr();
				textbackground(6);                    //5 yellow
				window(36,30,45,34);

				clrscr();
				textcolor(0);                  // window 5
				cprintf("\n\n\r   Audio\n     Video");

				textbackground(15);               //4 yellow
				window(10,30,20,34);

				clrscr();
				textcolor(0);                    // window 4
				cprintf("\n\n\r   Photo\n     Linking");

			}
			if(winpos==3)
			{
				clrscr();
				textbackground(6);               //4 yellow
				window(10,30,20,34);

				clrscr();
				textcolor(0);                    // window 4
				cprintf("\n\n\r   Photo\n     Linking");

				textbackground(15);                   //3 yellow
				window(62,10,71,14);

				clrscr();
				textcolor(0);                    // window 3
				cprintf("\n\n\r   Hyper\n    Linking");
			}
			if(winpos==2)
			{
				clrscr();
				textbackground(6);                   //3 yellow
				window(62,10,71,14);

				clrscr();
				textcolor(0);                    // window 3
				cprintf("\n\n\r   Hyper\n    Linking");

				textbackground(15);             //2 yellow
				window(36,10,45,14);

				clrscr();
				textcolor(0);              // window 2
				cprintf("\n\n\r   Photo");

			}
			if(winpos==1)
			{
				clrscr();
				textbackground(6);             //2 yellow
				window(36,10,45,14);

				clrscr();
				textcolor(0);              // window 2
				cprintf("\n\n\r   Photo");

				textbackground(15);           //1 yellow
				window(10,10,20,14);

				clrscr();
				textcolor(0);                     // window 1   winpos=1;
				cprintf("\n\n\r Enter Text");

			}
		}
		if(ch1==13)
		{
			break;
		}
		if(ch1==67)
		{

			window(0,0,80,50);
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tCredits:\n";
			cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tModule Development : Girik Malik\n";
			cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tGUI Development : Mayank Gupta";

		}
	}while(ch1!=13&&ch1!=27);
}

char text1[5000];

	void get_info()
	{
	cout<<"\n\nStart Entering Text - Use '^' When done):\n\n";
	char text[5000];
	cin.getline(text,5000,'^');
	for(int i=0,j=0;i<strlen(text);i++)
	{

	if(text[i]=='\n')
	{
		text1[j]='<';
		j++;
		text1[j]='b';
		j++;
		text1[j]='r';
		j++;
		text1[j]='>';
		j++;
	}
	else
		text1[j++]=text[i];
	}
	text1[j]='\0';
}
	void show_info()
	{
	clrscr();
	cout<<text1;
	}


void main()
{
	clrscr();
	char title1[100];
	char bgcolor[10];
	char photo[80];
	char font[60],fcolor[10];
	char link[80],link_title[80];
	char link_photo_name[80],photo_link[100];
	int height , width;
	char head_code[150],body_code[100];
	char apath[50], vpath[50], acaption[100], vcaption[100];

	clrscr();
	window(0,0,80,50);
	textbackground(YELLOW);
	gotoxy(60,47);
	cout<<"Gamz Web Maker";
	getch();
	clrscr();
	cout<<"\n\n\n\n\t\t\tEnter the Name of your Web Page :";
	cin>>name;
	strcat(name,".html");
	cout<<"\n\nEnter Title for your page "<<name<<" : ";
	gets(title1);
	cout<<"\n\nEnter Background Color for "<<name<<" : ";
	cin>>bgcolor;
	fstream html;
	html.open(name,ios::out);
	html<<"<html> <head> <title>";
	html<<title1;
	html<<"</title></head><body bgcolor=";
	html<<bgcolor;
	html<<">";
	//Switching
	cout<<"\n\nWhat would you like to do? ";
	int ch;
	do
	{
	menu();
	window(1,1,80,50);
	clrscr();

	switch(winpos)
	{
		case 1: clreol();
			clrscr();
			textbackground(0);
			textcolor(0);
			gotoxy(0,0);
			cout<<"\n\nFont Selection :\n";
			cout<<"\nSuggested Fonts:\nLucida Handwriting\nMonotype Corsiva\nAlgerian\nArial\nArial Black\nArial Narrow\nArial Rounded MT Bold\nBaskerville Old Face\nBauhaus 93\nBlackadder ITC\nBodoni MT\nBookman Old Style\nBrush Script MT\nCandara\nCastellar\nCentury Schoolbook\nChiller\nCooper Black\nCurlz MT\nEdwardian Script ITC\nFelix Titling\nForte\nFreestyle Script\nGill Sans Ultra Bold\nMagneto\nMatura MT Script Capitals\nMicrosoft Sans Serif\nOld English Text MT\nTimes New Roman\nVivaldi\nVladimir Script\nWide Latin\n";
			cout<<"Enter Yor Choice: ";
			gets(font);
			cout<<"\nEnter the Color of the Font: ";
			cin>>fcolor;
			html<<"<font face=\""<<font;
			html<<"\" color=\""<<fcolor<<"\">";
			cout<<"\nEnter Text";
			get_info();
			html<<text1;
			html<<"</font>";
			show_info();
			break;
		case 2:
			clreol();
			clrscr();
			cout<<"\nInserting Picture";
			cout<<"\n\nEnter the Photo to be inserted: ";
			cout<<"\nIMPORTANT: Before entering the photo name Please ensure that the photograph \nis in the same folder in which this software is!\n";
			cin>>photo;
			html<<"<br/><br/><img src=";
			html<<photo;
			html<<">";


			break;
		case 3:
			clreol();
			clrscr();
			cout<<"\n\nHyper Linking\n\n";
			cout<<"\n\nEnter the Webpage name to be Linked(With .HTML/.HTM Extension)\n";
			cout<<"\nIMPORTANT: Before entering the HTML page to be linked,\nPlease ensure that the page is in the same folder in which this software is!\n\nLinking is CASE SENSITIVE also do ensure the Extension if .HTML or .HTM\n\n";
			cin>>link;
			cout<<"Enter The title for linked page\n";
			gets(link_title);
			html<<"<a href=";
			html<<link;
			html<<">";
			html<<link_title;
			html<<"</a>";
			break;
		case 4:
			clreol();
			clrscr();
			cout<<"\n\nPhoto Linking\n";
			//Get the photo name and dimensions to be linked
			cout<<"\n\nEnter the photo to be linked: ";
			cout<<"\nIMPORTANT: Before entering the photo name Please ensure that the photograph \nis in the same folder in which this software is!\n";
			gets(link_photo_name);
			cout<<"Enter the Height for the Photo: ";
			cin>>height;
			cout<<"Enter the Width of the Photo: ";
			cin>>width;
			//get the link for the photo linking
			cout<<"\n\nEnter the Webpage to be Linked to "<<link_photo_name<<" (With .HTML/.HTM Extension)\n";
			cout<<"\nIMPORTANT: Before entering the HTML page to be linked,\nPlease ensure that the page is in the same folder in which this software is!\n\nLinking is CASE SENSITIVE also do ensure the Extension if .HTML or .HTM\n\n";
			cin>>photo_link;
			//inserting photo link in the webpage
			html<<"<br><br><a href="<<photo_link<<">";
			html<<"<img src="<<link_photo_name<<" height="<<height<<" width="<<width<<">";
			html<<"</a>";
			break;

		case 5:
			clreol();
			clrscr();
			cout<<"\n\nAudio / Video Insertion\n";
			cout<<"\n\nEnter the Audio Path : ";
			cin>>apath;
			cout<<"\n\nEnter the Caption for Audio : ";
			gets(acaption);
			cout<<"\n\n\n\nEnter the Video Path : ";
			cin>>vpath;
			cout<<"\n\nEnter the Caption for Video : ";
			gets(vcaption);
			html<<"<audio src='"<<apath<<"'></audio>";
			html<<"<caption><br>"<<acaption<<"</caption>";
			html<<"<video src='"<<vpath<<"'></video>";
			html<<"<caption><br>"<<acaption<<"</caption>";
			getch();
			break;
	      case 6:
			clreol();
			clrscr();
			cout<<"\n\nWelcome To Compatibility Mode\n";
			cout<<"You are in the HEAD section of your Webpage "<<name;
			cout<<"\nEnter the codes/attributes you would like to enter in the HEAD Section\nTitle already inserted!\n\n";
			gets(head_code);
			cout<<"\nYou are in the BODY Section\nEnter the codes for the BODY Section, After declaring the Code for body as:\n<body {attributes}>";
			gets(body_code);
			cout<<"\nEnter Text for the page "<<name;
			get_info();
			show_info();
			cout<<"\n\nEnding the BODY Section";
			fstream html2;
			html2.open(name,ios::out|ios::in);
			html<<"<html> <head> <title>";
			html<<title1;
			html<<"</title>";
			html<<head_code;
			html<<"</head>";
			html<<body_code;
			html<<text1;
			html<<"</body></html>";
			html2.close();
			break;

		default:
			clrscr();
			window(0,0,80,50);
			textbackground(6);
			gotoxy(24,20);
			cout<<"Thank You for Using Gamz Web Maker!\n\n\n";
			gotoxy(19,22);
			cout<<"https://github.com/gmalik9/GamzWebMaker.git/";
	}
	}while(winpos!=7);
	html<<"</body></html>";

	html.close();

	getch();
}
