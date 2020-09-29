#include <iostream>
#include <cstring>
#include <cstdio>

#include "CString.h"

using namespace std;

int cstringCreation() {
	cout << "=> Step 1 : create string" << endl << endl;

	string a(4, 'a');
	cout << "1.length 4 based on \"a\"\n";
	cout << "string a(4,'a');\n";
	cout << a << endl << endl;

	cout << "2.string with any size\n";
	cout << "string b(\"abcdef\");\n";
	string b("abcdef");
	cout << b << endl << endl;

	cout << "3.give part of b string to c (length 4 at position 1)\n";
	cout << "string c(b,1,4);\n";
	string c(b, 1, 4);
	cout << c << endl << endl;

	cout << "4.append \"*\" because the original length 10 is not enough\n";
	cout << "c.resize(10,'*');\n";
	c.resize(10, '*');
	cout << c << endl << endl;

	return 0;
}

int cstringAssign() {
	cout << "=> Step 2 : assign();" << endl << endl;

	cout << "1.like append, but erase then overwrite\n";
	cout << "string e; char f[10]=\"123456\" e.assign(f); e+=' ';\n";
	string e;
	char f[10] = "123456";
	e.assign(f);
	e += ' ';
	cout << "<" <<  e << ">" << endl << endl;

	cout << "2.string intervel assign\n";
	cout << "e.assign(f,3,3); e+=' '; e.assign(f,3);\n";
	e.assign(f, 3, 3);
	e += ' ';
	cout << "<" << e << ">" << endl;
	e.assign(f, 3);
	cout << "<" << e << ">" << endl << endl;

	cout << "3.whole of a string with type char\n";
	cout << "char ssr[10]=\"asdqwezxc\"; e.assign(ssr);\n";
	char ssr[10] = "asdqwezxc";
	e.assign(ssr);
	cout << "<" << ssr << ">" << endl << endl;

	cout << "4.the first \"num\" chars of a string with type char\n";
	cout << "e.assign(ssr,4);\n";
	e.assign(ssr, 4);
	cout << "<" << e << ">" << endl << endl;

	cout << "5.assign char: assigne three \"6\"\n";
	cout << "e.assign(3, '6');\n";
	e.assign(3, '6');
	cout << "<" << e << ">" << endl << endl;

	cout << "6.copy() : copy and overwirte twelve chars from position 2 from d to ss with type char. Must be type char otherwise get error\n";
	cout << " char ss[10]=\"123\"; string dd; d.copy(ss,12,2);\n";
	char ss[15] = "123";
	cout << "before copy <" << ss << ">" << endl;
	string dd("abcdefghijklmn");
	dd.copy(ss, 12, 2);
	cout << "after copy <" << ss << ">" << endl << endl;

	cout << "7.copy() : copy and overwirte twenty chars from position 2 from d to ss with type char. Will get warning\n";
	cout << " char ss2[10]=\"123\"; string dd; d.copy(ss2,20,2);\n";
	char ss2[15] = "123";
	dd.copy(ss2, 20, 2);
	cout << "<" << ss2 << ">" << endl << endl;

	return 0;
}

int cstringAppend() {
	cout << "=> Step 3 : string append and copy append(); string d(a); or d=d+a; d.append(b);" << endl;

	string a(4, 'a');
	string b("bbbbbb");

	cout << "1. append string a in the end of d\n";
	string d(a);
	d.append(b);
	cout << "<" << d << ">" << endl << endl;

	cout << "2.append string b(length 2, position 0) in the end of d\n";
	cout << "d.append(b,0,2);\n";
	d.append(b, 0, 2);
	cout << "<" << d << ">" << endl << endl;

	cout << "3.append four character \"~\" \n";
	cout << "d.append(4,'~');\n";
	d.append(4, '~');
	cout << "<" << d << ">" << endl << endl;

	cout << "4. append with type int and char\n";
	cout << "char app[100]=\"aaabbb\"; string charr(\"-_-\"); charr.append(app);\n";
	char app[100] = "aaabbb";
	string charr("-_- ");
	charr.append(app);
	cout << "<" << charr << ">" << endl << endl;

	cout << "charr.append(app,4);\n";
	charr.append(app, 4);
	cout << "<" << charr << ">" << endl << endl;

	cout << "5. whole array with type char, first four chars with type char; ***if append in middle***\n";
	cout << "string tmp; string tmp; tmp.assign(app); charr.assign(\"\"); charr.append(tmp,1,4);\n";
	string tmp;
	tmp.assign(app);
	cout << "before <" << charr << ">" << endl;
	charr.assign("");
	charr.append(tmp, 1, 4);
	cout << "after  <" << charr << ">" << endl << endl;

	cout << "6.for int, double etc., transferred by sprintf_s() <cstdio>\n";
	cout << "int aaa=15314; double bbb=3.1415; char aa[10];\nsprintf_s(aa,\"%d\",aaa); charr.append(aa,0,4); sprintf_s(aa,\"%f\",bbb); charr.append(aa,0,4);\n";
	cout << "before <" << charr << ">" << endl;
	int aaa = 15314;
	double bbb = 3.1415;
	char aa[10];
	sprintf_s(aa, "%d", aaa);
	charr.append(aa, 0, 4);
	sprintf_s(aa, "%f", bbb);
	charr.append(aa, 0, 4);
	cout << "after  <" << charr << ">" << endl << endl;

	return 0;
}