#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main(int argc, char** argv) {
	
	
	string textid="default", text="default", q="y", q2;
	bool success=1;
	ofstream file;
	file.open("output.c");
	
	cout<<"what font do you use?\n";
	cout<<"1. font_min\n";
	cout<<"2. font_ibm\n";
	cout<<"3. font_italic\n";
	getline(cin, q2);
	
	/*
	if(q2=="2"){
		cout<<"unsupported:\ntriangle(0x60)\n'(0x08)\n \\(0x3d)";
	}
	*/
	
	
	while(q=="y"){
	cout<<"enter text id\n";
	getline(cin, textid);
	
	cout<<"enter text\n";
	cout<<"--------------------____space___--------------------____space___--------------------____space___--------------------____space___--------------------____space___";
	cout<<"--------------------____space___--------------------____space___--------------------____space___--------------------____space___--------------------____space___";
	getline(cin, text);
	
	file<<"//length: "<<text.length();
	file<<"\n//"<<text<<"\nunsigned char "<<textid<<"[] =\n{\n";
	file<<"\t";
	
	if(q2=="1"){
		for(int i=0; i<text.length(); i++){//write min
			if(text[i]==' '){
				file<<"0x01,";
			}
			else if(text[i]=='!'){
				file<<"0x02,";
			}
			else if(text[i]=='"'){
				file<<"0x03,";
			}
			else if(text[i]=='#'){
				file<<"0x04,";
			}
			else if(text[i]=='$'){
				file<<"0x05,";
			}
			else if(text[i]=='%'){
				file<<"0x06,";
			}
			else if(text[i]=='&'){
				file<<"0x07,";
			}
			else if(text[i]=='`'){
				file<<"0x08,";
			}
			else if(text[i]=='('){
				file<<"0x09,";
			}
			else if(text[i]=='8'){
				file<<"0x0a,";
			}
			else if(text[i]=='9'){
				file<<"0x0b,";
			}
			else if(text[i]=='a'){
				file<<"0x0c,";
			}
			else if(text[i]=='b'){
				file<<"0x0d,";
			}
			else if(text[i]=='c'){
				file<<"0x0e,";
			}
			else if(text[i]=='d'){
				file<<"0x0f,";
			}
			else if(text[i]=='e'){
				file<<"0x10,";
			}
			else if(text[i]=='f'){
				file<<"0x11,";
			}
			else if(text[i]=='g'){
				file<<"0x12,";
			}
			else if(text[i]=='h'){
				file<<"0x13,";
			}
			else if(text[i]=='i'){
				file<<"0x14,";
			}
			else if(text[i]=='j'){
				file<<"0x15,";
			}
			else if(text[i]=='k'){
				file<<"0x16,";
			}
			else if(text[i]=='l'){
				file<<"0x17,";
			}
			else if(text[i]=='m'){
				file<<"0x18,";
			}
			else if(text[i]=='n'){
				file<<"0x19,";
			}
			else if(text[i]=='o'){
				file<<"0x1a,";
			}
			else if(text[i]=='p'){
				file<<"0x1b,";
			}
			else if(text[i]=='q'){
				file<<"0x1c,";
			}
			else if(text[i]=='r'){
				file<<"0x1d,";
			}
			else if(text[i]=='s'){
				file<<"0x1e,";
			}
			else if(text[i]=='t'){
				file<<"0x1f,";
			}
			else if(text[i]=='u'){
				file<<"0x20,";
			}
			else if(text[i]=='v'){
				file<<"0x21,";
			}
			else if(text[i]=='w'){
				file<<"0x22,";
			}
			else if(text[i]=='x'){
				file<<"0x23,";
			}
			else if(text[i]=='y'){
				file<<"0x24,";
			}
			else if(text[i]=='z'){
				file<<"0x25,";
			}else{
				file<<"?,";
				success=0;
			}
		}	
	}else if(q2=="2"){
		for(int i=0; i<text.length(); i++){//write ibm
			if(text[i]==' '){
				file<<"0x01,";
			}
			else if(text[i]=='!'){
				file<<"0x02,";
			}
			else if(text[i]=='"'){
				file<<"0x03,";
			}
			else if(text[i]=='#'){
				file<<"0x04,";
			}
			else if(text[i]=='$'){
				file<<"0x05,";
			}
			else if(text[i]=='%'){
				file<<"0x06,";
			}
			else if(text[i]=='&'){
				file<<"0x07,";
			}
			else if(text[i]=='`'){
				file<<"0x08,";
			}
			else if(text[i]=='('){
				file<<"0x09,";
			}
			else if(text[i]==')'){
				file<<"0x0a,";
			}
			else if(text[i]=='*'){
				file<<"0x0b,";
			}
			else if(text[i]=='+'){
				file<<"0x0c,";
			}
			else if(text[i]==','){
				file<<"0x0d,";
			}
			else if(text[i]=='-'){
				file<<"0x0e,";
			}
			else if(text[i]=='.'){
				file<<"0x0f,";
			}
			else if(text[i]=='/'){
				file<<"0x10,";
			}
			else if(text[i]=='0'){
				file<<"0x11,";
			}
			else if(text[i]=='1'){
				file<<"0x12,";
			}
			else if(text[i]=='2'){
				file<<"0x13,";
			}
			else if(text[i]=='3'){
				file<<"0x14,";
			}
			else if(text[i]=='4'){
				file<<"0x15,";
			}
			else if(text[i]=='5'){
				file<<"0x16,";
			}
			else if(text[i]=='6'){
				file<<"0x17,";
			}
			else if(text[i]=='7'){
				file<<"0x18,";
			}
			else if(text[i]=='8'){
				file<<"0x19,";
			}
			else if(text[i]=='9'){
				file<<"0x1a,";
			}
			else if(text[i]==':'){
				file<<"0x1b,";
			}
			else if(text[i]==';'){
				file<<"0x1c,";
			}
			else if(text[i]=='<'){
				file<<"0x1d,";
			}
			else if(text[i]=='='){
				file<<"0x1e,";
			}
			else if(text[i]=='>'){
				file<<"0x1f,";
			}
			else if(text[i]=='?'){
				file<<"0x20,";
			}
			else if(text[i]=='@'){
				file<<"0x21,";
			}
			else if(text[i]=='A'){
				file<<"0x22,";
			}
			else if(text[i]=='B'){
				file<<"0x23,";
			}
			else if(text[i]=='C'){
				file<<"0x24,";
			}
			else if(text[i]=='D'){
				file<<"0x25,";
			}
			else if(text[i]=='E'){
				file<<"0x26,";
			}
			else if(text[i]=='F'){
				file<<"0x27,";
			}
			else if(text[i]=='G'){
				file<<"0x28,";
			}
			else if(text[i]=='H'){
				file<<"0x29,";
			}
			else if(text[i]=='I'){
				file<<"0x2a,";
			}
			else if(text[i]=='J'){
				file<<"0x2b,";
			}
			else if(text[i]=='K'){
				file<<"0x2c,";
			}
			else if(text[i]=='L'){
				file<<"0x2d,";
			}
			else if(text[i]=='M'){
				file<<"0x2e,";
			}
			else if(text[i]=='N'){
				file<<"0x2f,";
			}
			else if(text[i]=='O'){
				file<<"0x30,";
			}
			else if(text[i]=='P'){
				file<<"0x31,";
			}
			else if(text[i]=='Q'){
				file<<"0x32,";
			}
			else if(text[i]=='R'){
				file<<"0x33,";
			}
			else if(text[i]=='S'){
				file<<"0x34,";
			}
			else if(text[i]=='T'){
				file<<"0x35,";
			}
			else if(text[i]=='U'){
				file<<"0x36,";
			}
			else if(text[i]=='V'){
				file<<"0x37,";
			}
			else if(text[i]=='W'){
				file<<"0x38,";
			}
			else if(text[i]=='X'){
				file<<"0x39,";
			}
			else if(text[i]=='Y'){
				file<<"0x3a,";
			}
			else if(text[i]=='Z'){
				file<<"0x3b,";
			}
			else if(text[i]=='['){
				file<<"0x3c,";
			}
			else if(text[i]=='\\'){
				file<<"0x3d,";
			}
			else if(text[i]==']'){
				file<<"0x3e,";
			}
			else if(text[i]=='^'){
				file<<"0x3f,";
			}
			else if(text[i]=='_'){
				file<<"0x40,";
			}
			else if(text[i]=='`'){
				file<<"0x41,";
			}
			else if(text[i]=='a'){
				file<<"0x42,";
			}
			else if(text[i]=='b'){
				file<<"0x43,";
			}
			else if(text[i]=='c'){
				file<<"0x44,";
			}
			else if(text[i]=='d'){
				file<<"0x45,";
			}
			else if(text[i]=='e'){
				file<<"0x46,";
			}
			else if(text[i]=='f'){
				file<<"0x47,";
			}
			else if(text[i]=='g'){
				file<<"0x48,";
			}
			else if(text[i]=='h'){
				file<<"0x49,";
			}
			else if(text[i]=='i'){
				file<<"0x4a,";
			}
			else if(text[i]=='j'){
				file<<"0x4b,";
			}
			else if(text[i]=='k'){
				file<<"0x4c,";
			}
			else if(text[i]=='l'){
				file<<"0x4d,";
			}
			else if(text[i]=='m'){
				file<<"0x4e,";
			}
			else if(text[i]=='n'){
				file<<"0x4f,";
			}
			else if(text[i]=='o'){
				file<<"0x50,";
			}
			else if(text[i]=='p'){
				file<<"0x51,";
			}
			else if(text[i]=='q'){
				file<<"0x52,";
			}
			else if(text[i]=='r'){
				file<<"0x53,";
			}
			else if(text[i]=='s'){
				file<<"0x54,";
			}
			else if(text[i]=='t'){
				file<<"0x55,";
			}
			else if(text[i]=='u'){
				file<<"0x56,";
			}
			else if(text[i]=='v'){
				file<<"0x57,";
			}
			else if(text[i]=='w'){
				file<<"0x58,";
			}
			else if(text[i]=='x'){
				file<<"0x59,";
			}
			else if(text[i]=='y'){
				file<<"0x5a,";
			}
			else if(text[i]=='z'){
				file<<"0x5b,";
			}
			else if(text[i]=='{'){
				file<<"0x5c,";
			}
			else if(text[i]=='|'){
				file<<"0x5d,";
			}
			else if(text[i]=='}'){
				file<<"0x5e,";
			}
			else if(text[i]=='~'){
				file<<"0x5f,";
			}
		}
	}
	
	file<<"\n};\n";
	if(success){
		cout<<"written successfully, want to write more?(y/n)\n";
	}else{
		cout<<"errors in text, want to write more?(y/n)\n";
	}
	
	getline(cin, q);
	
	}
	
	
	file.close();
	return 0;
}
