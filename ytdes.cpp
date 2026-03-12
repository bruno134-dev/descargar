#include <iostream> 
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	string link;	
	cout << "Ingresa el link de descarga:";
	cin >> link;
	string comando = "yt-dlp " + link;
	system(comando.c_str());
}
