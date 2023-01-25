/*            Bloqueando Sites pelos HOSTs     */
/*		              23/01/2023             */
/*	Frederico Almeida - Analista de Suporte Jr - Gupo Multi */

#include <iostream>
#include <stdlib.h>
#include <windows.h> 

using namespace std;
int main(){
	
	// esconder prompt de comando
	ShowWindow(GetConsoleWindow(), SW_HIDE); 
	
    // Define as URLs das redes sociais que você deseja bloquear
    string blocked_sites[] = {"www.facebook.com", "www.twitter.com", "www.instagram.com", "www.youtube.com"};

    // Usa o comando "ipconfig /flushdns" para limpar o cache DNS
    system("ipconfig /flushdns");

    // Adiciona as URLs das redes sociais à lista de sites bloqueados no arquivo "hosts"
    for (int i = 0; i < sizeof(blocked_sites) / sizeof(blocked_sites[0]); i++){
        string command = "echo 0.0.0.0 " + blocked_sites[i] + " >> C:\\Windows\\System32\\drivers\\etc\\hosts";
        system(command.c_str());
    }

    return 0;
}

