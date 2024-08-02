#include<stdio.h>
#include<iostream>
#include<list>

using namespace std;
int main() {
	list<const char*>ekiname = { "tokyo","kanda","akihabara","okachimachi","ueno"
		,"uguisudani","nippori","nishi-nippori","tabata","komagome"
		,"sugamo","otuka","ikebukuro","mejiro","takadanobaba",
		"shin-okubo","shinjuku","yoyogi"
		,"harajuku","shibuya","ebisu","meguro","gotanda","osaki"
		,"shinagawa","tamachi","hamamatucho","shimbashi","yurakucho" };
	for (list<const char*>::iterator itr = ekiname.begin(); itr != ekiname.end(); ++itr) {
		cout << *itr << endl;
	}
	for (list<const char*>::iterator itr = ekiname.begin(); itr != ekiname.end(); ++itr) {
		if (strcmp(*itr, "tabata") == 0) {
			itr = ekiname.insert(itr, "nishi nippori"); ++itr;
		}
	}
	printf("\n2019\n");
	for (list<const char*>::iterator itr = ekiname.begin(); itr != ekiname.end(); ++itr) {
		cout << *itr << endl;
	}
	printf("\n2022\n");
	for (list<const char*>::iterator itr = ekiname.begin(); itr != ekiname.end(); ++itr) {
		if (strcmp(*itr, "tamachi") == 0) {
			itr = ekiname.insert(itr, "takanawa getoway"); ++itr;
		}
	}
	for (list<const char*>::iterator itr = ekiname.begin(); itr != ekiname.end(); ++itr) {
		cout << *itr << endl;
	}
	return 0;
}