#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class web
{
   //	char title[100];
   //	char color[10];
	char text[5000];
  //	char begin[250];
  //	char end[100];
	public:
     /*	web()      //constructor
	{
	begin="<html><head>";
	}
     */
	void get_info()
	{
  //	cout<<"\n\nEnter the Title of your Page: ";
  //	gets(title);
  //	cout<<"\n\nEnter the body color for your webpage : ";
  //	cin>>color;
	cout<<"\n\nStart Entering Text (use <br/> for New Line Use '^' When done):\n\n";
	cin.get(text,5000,'^');
	}
/*	void showtitle()
	{
	cout<<title;
	}
	void showbgcolor()
	{
	cout<<color;
	}
 */	void show_info()
	{
	clrscr();
       //	cout<<"<html> <head> <title>"<<title<<"</title></head><body bgcolor="<<color<<">" ;
	puts(text);
      //	cout<<"</body> </html>";
	}
}w;
/*
void show_title()
{
	w.showtitle();
}
void bgcolor()
{
	w.showbgcolor();
}
*/
void main()
{
	clrscr();
	char name[50];
	char title1[100];
	char bgcolor[10];
	cout<<"\n\nEnter the Name of your Web Page (With .html extension): ";
	cin>>name;
	cout<<"\n\nEnter Title: ";
	gets(title1);
	cout<<"\n\nEnter Background Color:";
	cin>>bgcolor;
	w.get_info();
	w.show_info();
	fstream html;
	html.open(name,ios::out|ios::in);
	html<<"<html> <head> <title>";
	html<<title1;
	html<<"</title></head><body bgcolor=";
	html<<bgcolor;
	html<<">";
	html.write((char*)&w,sizeof(w));
	html<<"</body> </html>";
	html.close();
	getch();
}