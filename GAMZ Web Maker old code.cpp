#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
class web
{
   //  char title[100];
   //	char color[10];
	char text1[5000];
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
	char text[5000];
	cin.get(text,5000,'^');
	for(int i=0,j=0;i<=strlen(text);i++)
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
	puts(text1);
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
	char photo[80];
	char font[60],fcolor[10];
	char link[80],link_title[80];
	char link_photo_name[80],photo_link[100];
	int height , width;
	cout<<"\n\nEnter the Name of your Web Page :";
	cin>>name;
	strcat(name,".html");
	cout<<"\n\nEnter Title: ";
	gets(title1);
	cout<<"\n\nEnter Background Color:";
	cin>>bgcolor;
	cout<<"\n\nEnter the Webpage name to be Linked(With .HTML/.HTM Extension)\n";
	cout<<"\nIMPORTANT: Before entering the HTML page to be linked,\nPlease ensure that the page is in the same folder in which this software is!\n\nLinking is CASE SENSITIVE also do ensure the Extension if .HTML or .HTM\n\n";
	cin>>link;
	cout<<"Enter The title for linked page\n";
	gets(link_title);
	cout<<"\n\nEnter the Photo to be inserted: ";
	cout<<"\nIMPORTANT: Before entering the photo name Please ensure that the photograph \nis in the same folder in which this software is!\n";
	cin>>photo;
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
	cout<<"\n\nFont Selection :\n";
	cout<<"\nSuggested Fonts:\nLucida Handwriting\nMonotype Corsiva\nAlgerian\nArial\nArial Black\nArial Narrow\nArial Rounded MT Bold\nBaskerville Old Face\nBauhaus 93\nBlackadder ITC\nBodoni MT\nBookman Old Style\nBrush Script MT\nCandara\nCastellar\nCentury Schoolbook\nChiller\nCooper Black\nCurlz MT\nEdwardian Script ITC\nFelix Titling\nForte\nFreestyle Script\nGill Sans Ultra Bold\nMagneto\nMatura MT Script Capitals\nMicrosoft Sans Serif\nOld English Text MT\nTimes New Roman\nVivaldi\nVladimir Script\nWide Latin\n";
	cout<<"Enter Yor Choice: ";
	gets(font);
	cout<<"\nEnter the Color of the Font: ";
	cin>>fcolor;
	w.get_info();
	w.show_info();
	fstream html;
	html.open(name,ios::out|ios::in);
	html<<"<html> <head> <title>";
	html<<title1;
	html<<"</title></head><body bgcolor=";
	html<<bgcolor;
	html<<">";
	html<<"<a href=";
	html<<link;
	html<<">";
	html<<link_title;
	html<<"</a>";
	html<<"<br/><br/><img src=";
	html<<photo;
	html<<">";
	html<<"<font face=\""<<font;
	html<<"\" color=\""<<fcolor<<"\">";
	html.write((char*)&w,sizeof(w));
	html<<"</font>";
	//inserting photo link in the webpage
	html<<"<br><br><a href="<<photo_link<<">";
	html<<"<img src="<<link_photo_name<<" height="<<height<<" width="<<width<<">";
	html<<"</a>";
	html<<"</body> </html>";
	html.close();
	getch();
}
