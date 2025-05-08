#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <filesystem>

namespace fs = std::filesystem;

using namespace std;

void slowPrint(const string& text, unsigned int millis_per_char) {
    for (const char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(millis_per_char));
    }
}

int main() {
    system("clear");
    system("sudo apt install figlet");
    system("clear");
    system("figlet -f /usr/share/figlet/slant.flf \"ADVHCKTOOL\"");

    int userselect;
    cout << "\t\t\t\t\t\tcoded by Rafig Zarbaliyev";
    cout << endl;
    cout << "\t\t\t\t\t\tinstagram @rafok2v9c";
    cout << endl << endl << endl;
    slowPrint("Select from the menu\n\n\a", 20);
    slowPrint("\033[31m[1] Web attacks\033[0m\n", 5);
    slowPrint("\033[31m[2] Wireless attacks\033[0m\n", 5);
    slowPrint("\033[31m[3] Phishing tools\033[0m\n", 5);
    slowPrint("\033[31m[4] Sniffing tools\033[0m\n", 5);
    slowPrint("\033[31m[5] Osint tools\033[0m\n", 5);
    slowPrint("\033[31m[6] Be anonymous(VPN)\033[0m\n", 5);
    slowPrint("\033[31m[7] Advanced tools\033[0m\n\n", 5);
    slowPrint("fr> ", 10);
    cin >> userselect;

    if (userselect == 1) {
        string useropp;
        system("clear");
        system("figlet -f /usr/share/figlet/slant.flf \"ADVHCKTOOL\"");
        cout << endl;
        slowPrint("[1] commix\n", 20);
        slowPrint("[2] nuclei\n", 20);
        slowPrint("[3] wpscan\n", 20);
        slowPrint("[4] sqlmap\n", 20);
        slowPrint("[5] redhawk\n", 20);
        slowPrint("[6] ffuf\n", 20);
        slowPrint("[7] wafw00f\n", 20);
        slowPrint("[8] nmap\n", 20);
        slowPrint("[9] jsencoder\n", 20);
        slowPrint("[10] zaproxy\n", 20);
        slowPrint("[11] ddos\n", 20);
        cout << endl;
        slowPrint("fr> ", 10);
        cin >> useropp;

        if (useropp == "1") {
            string url;
            system("clear");
            system("sudo apt install commix");
            system("clear");
            cout << "Enter Target url: ";
            cin >> url;
            string command = "commix -u \"" + url + "\"";
            system(command.c_str());
        }
        else if (useropp == "2") {
            string url;
            system("clear");
            system("sudo apt install nuclei");
            system("clear");
            cout << "Enter Target url: ";
            cin >> url;
            string command = "nuclei -u \"" + url + "\"";
            system(command.c_str());
        }
        else if (useropp == "3") {
            string url;
            cout << endl;
            cout << "Enter Target url: ";
            cin >> url;
            string command = "wpscan --url \"" + url + "\"";
            system(command.c_str());
        }
        else if (useropp == "4") {
            string url;
            system("clear");
            cout << "Enter Target url: ";
            cin >> url;
            string command = "sqlmap -u \"" + url + "\" --tables";
            system(command.c_str());
        }
        else if (useropp == "5") {
            system("clear");
            system("git clone https://github.com/Tuhinshubhra/RED_HAWK");
            system("clear");
            system("cd RED_HAWK && php rhawk.php");
        }
        else if (useropp == "6") {
            string url;
            string wordlist;
            string fuzz = "/FUZZ";
            cout << endl;
            cout << "Enter Target url: ";
            cin >> url;
            cout << "Enter Wordlist Directory: ";
            cin >> wordlist;
            string command = "ffuf -u " + url + fuzz + " -w " + wordlist;
            system(command.c_str());
        }
        else if (useropp == "7") {
            string url;
            cout <<"Enter url :";
            cin >> url;
            string command = "wafw00f " + url;
            system(command.c_str());
        }
        else if (useropp == "8") {
            string targetIP;
            cout << "Enter Target IP :";
            cin >> targetIP;
            cout << endl;
            string command = "sudo nmap -sVC " + targetIP;
            system(command.c_str());
        }
        else if (useropp == "9") {
            system("clear");
            system("git clone https://github.com/rst3m/js-encoder.git");
            system("clear");
            system("cd js-encoder && python js_encoder.py");
        }
        else if (useropp == "10") {
            system("clear");
            system("sudo apt install zaproxy");
            system("zaproxy");
        }
        else if (useropp == "11") {
            string url;
            system("clear");
            cout << endl;
            system("git clone https://github.com/palahsu/DDoS-Ripper.git");
            system("clear");
            cout << "Enter target ip address: ";
            cin >> url;
            string command = "cd DDoS-Ripper && python3 DRipper.py -p 80 -t 135 -s " + url;
            system(command.c_str());
        }
        else {
            cout << endl << endl;
            slowPrint("wrong options!", 60);
            system("clear");
            slowPrint("program aborted!", 50);
            system("./advhcktool");
        }
    }
    else if (userselect == 2) {
        string useropp;
        system("clear");
        system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
        cout << endl;
        slowPrint("[x] put in monitor mode\n", 20);
        slowPrint("[1] wifite\n", 20);
        slowPrint("[2] airgeddon\n", 20);
        slowPrint("[3] fern\n", 20);
        slowPrint("[4] fluxion\n", 20);
        cout << endl;
        slowPrint("fr> ", 10);
        cin >> useropp;

        if (useropp == "1") {
            system("clear");
            system("sudo wifite");
        }
        else if (useropp == "2") {
            system("clear");
            system("sudo apt install airgeddon");
        }
        else if (useropp == "3") {
            system("clear");
            system("sudo fern-wifi-cracker");
        }
        else if (useropp == "4") {
            system("clear");
            system("git clone https://www.github.com/FluxionNetwork/fluxion.git");
            system("cd fluxion && ./fluxion.sh");
        }
        else if (useropp == "x") {
            string interface;
            system("clear");
            system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
            cout << endl;
            slowPrint("enter your interface :", 10);
            cin >> interface;
            string command = "sudo airmon-ng start " + interface;
            system(command.c_str());
            slowPrint("start the tool again", 100);
        }
        else {
            cout << endl << endl;
            slowPrint("wrong options!", 60);
            system("clear");
            slowPrint("program aborted!", 50);
            system("./advhcktool");
        }
    }
    else if (userselect == 3) {
        string useropp;
        system("clear");
        system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
        cout << endl;
        slowPrint("[1] mip22\n", 20);
        slowPrint("[2] zphisher\n", 20);
        slowPrint("[3] nexphisher\n", 20);
        slowPrint("[4] advphishing\n", 20);
        cout << endl;
        slowPrint("fr> ", 10);
        cin >> useropp;

        if (useropp == "1") {
            system("clear");
            system("sudo git clone https://github.com/makdosx/mip22.git");
            system("chmod -R 777 mip22 && cd mip22 && bash mip22.sh");
        }
        else if (useropp == "2") {
            system("clear");
            system("git clone --depth=1 https://github.com/htr-tech/zphisher.git");
            system("clear");
            system("cd zphisher && bash zphisher.sh");
        }
        else if (useropp == "3") {
            system("clear");
            system("sudo apt install git -y");
            system("git clone https://github.com/htr-tech/nexphisher.git");
            system("cd nexphisher && bash setup && bash nesphisher");
        }
        else if (useropp == "4") {
            system("clear");
            system("git clone https://github.com/Ignitetch/AdvPhishing.git");
            system("cd AdvPhishing/ && chmod 777 * && ./Linux-Setup.sh && ./AdvPhishing.sh");
        }
        else {
            cout << endl << endl;
            slowPrint("wrong options!", 60);
            system("clear");
            slowPrint("program aborted!", 50);
            system("./advhcktool");
        }

    }
    else if (userselect == 4) {
        string useropp;
        system("clear");
        system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
        cout << endl;
        slowPrint("[1] wireshark\n", 20);
        slowPrint("[2] scapy\n", 20);
        slowPrint("[3] tcpdump\n", 20);
        slowPrint("[4] ettercap \n", 20);
        cout << endl;
        slowPrint("fr> ", 10);
        cin >> useropp;

        if (useropp == "1") {
            system("wireshark");
        }
        else if (useropp == "2") {
            system("scapy");
        }
        else if (useropp == "3") {
            string interface;
            cout << endl;
            system("ifconfig");
            cout << endl;
            cout << "Enter your interface: ";
            cin >> interface;
            string command = "sudo tcpdump -i " + interface;
            system(command.c_str());
        }
        else if (useropp == "4") {
            cout << endl;
            system("sudo ettercap -G");
        }
        else if (useropp == "5") {
            cout << endl << endl;
            slowPrint("wrong options!", 60);
            system("clear");
            slowPrint("program aborted!", 50);
            system("./advhcktool");
        }
    }
    else if (userselect == 5) {
        string useropp;
        system("clear");
        system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
        cout << endl;
        slowPrint("[1] maltego\n", 20);
        slowPrint("[2] th3inspector\n", 20);
        slowPrint("[3] instagram\n", 20);
        slowPrint("[4] osintframework\n", 20);
        slowPrint("[5] osint canada\n", 20);
        cout << endl;
        slowPrint("fr> ", 10);
        cin >> useropp;

        if (useropp == "1") {
            system("maltego");
        }
        else if (useropp == "2") {
            system("clear");
            system("git clone https://github.com/Moham3dRiahi/Th3inspector.git && cd Th3inspector && sudo bash ./install.sh");
        }
        else if (useropp == "3") {
            string username;
            string sessionid;
            system("git clone https://github.com/megadose/toutatis.git");
            system("cd toutatis/");
            system("sudo python3 setup.py install");
            system("clear");
            cout << "Enter username: ";
            cin >> username;
            cout <<"If you don't know how to get the session id, check this link\n";
            cout <<"https://camo.githubusercontent.com/b456ce5d94485de8f34b0a49a1e9f72cf81b050c045cc5fa57d85359fe5264c2/68747470733a2f2f66696c65732e636174626f782e6d6f652f31726669366a2e706e67";
            cout << endl;
            cout << "Enter session id: ";
            cin >> sessionid;
            string command = "toutatis -u " + username + " -s " + sessionid;
            system(command.c_str());  
        }
        else if (useropp == "4") {
            system("xdg-open https://osintframework.com/");
        }
        else if (useropp == "5") {
            system("xdg-open https://start.me/p/aLe0vp/osint-resources-in-canada");
        }
        else {
            cout << endl << endl;
            slowPrint("wrong options!", 60);
            system("clear");
            slowPrint("program aborted!", 50);
            system("./advhcktool");
        }
    }
    else if (userselect == 6) {
        string useropp;
        system("clear");
        system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
        cout << endl;
        slowPrint("[1] macchanger\n", 20);
        slowPrint("[2] kali-anonsurf\n", 20);
        slowPrint("[3] protonvpn\n", 20);
        cout << endl;
        slowPrint("fr> ", 10);
        cin >> useropp;

        if (useropp == "1") {
            string interface;
            system("sudo apt install macchanger");
            system("clear");
            system("ifconfig");
            cout << endl;
            cout << "Enter interface: ";
            cin >> interface;
            string command = "sudo macchanger -r " + interface;
            system(command.c_str());
            cout << endl << endl;
            slowPrint("mac address changed successfully!", 100);
            system("./advhcktool");
        }
        else if (useropp == "2") {
            system("clear");
            system("https://github.com/Und3rf10w/kali-anonsurf.git");
            system("sudo cd kali-anonsurf && ./installer.sh");
            system("sudo anonsurf start");
            cout << endl;
            slowPrint("Type anonsurf stop to close it.", 100);
            system("./advhcktool");
        }
        else if (useropp == "3") {
            cout << endl;
            system("wget https://repo.protonvpn.com/debian/dists/stable/main/binary-all/protonvpn-stable-release_1.0.4_all.deb");
            system("sudo dpkg -i protonvpn-stable-release_1.0.4_all.deb");
            system("sudo apt-get install protonvpn-stable-release_1.0.4_all.deb");
            system("sudo apt-get update");
            system("clear");
            system("sudo apt-get install protonvpn");
            system("protonvpn");
        }
        else {
            cout << endl << endl;
            slowPrint("wrong options!", 60);
            system("clear");
            slowPrint("program aborted!", 50);
            system("./advhcktool");
        } 
    }
    else if (userselect == 7) {
    string useropp;
    system("clear");
    system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
    cout << endl;
    slowPrint("[1] Firefox History and Passwords\n", 20);
    slowPrint("[2] Chrome History\n", 20);
    slowPrint("[3] My system information\n", 20);
    slowPrint("[4] Somebody Hack me?\n", 20);
    slowPrint("[5] What are the queries I receive?\n", 20);
    slowPrint("[6] null\n", 20);
    slowPrint("[7] World Map\n", 20);
    cout << endl;
    slowPrint("fr> ", 10);
    cin >> useropp;

    if (useropp == "1") {
        cout << endl << endl << endl;
        string profileDir = "/home/kali/.mozilla/firefox/";

        for (const auto &entry : fs::directory_iterator(profileDir)) {
            string dirName = entry.path().filename().string();
            
            if (dirName.find(".default-esr") != string::npos) {
                cout << "Your Profil directory: " << dirName << endl;
            }
        }
        string firefox;
        cout << endl;
        cout << "Enter Your Profile Directory: ";
        cin >> firefox;
        
        string command = "dumpzilla /home/kali/.mozilla/firefox/" + firefox + " --Passwords --History";
        system(command.c_str());
    }
    else if (useropp == "2") {
            std::string history_path = std::string(getenv("HOME")) + "/.config/google-chrome/Default/History";
    
    std::string destination;
    std::cout << "Please specify the path where the files will be saved: ";
    std::getline(std::cin, destination);

    if (fs::exists(history_path)) {
        std::cout << "Google history files found!" << std::endl;
        std::cout << "Copying..." << std::endl;

        std::string destination_path = destination + "/History_copy";
        try {
            fs::copy_file(history_path, destination_path, fs::copy_options::overwrite_existing);
            std::cout << "Google history files successfully copied: " << destination_path << std::endl;

            std::system("xdg-open https://inloop.github.io/sqlite-viewer/");

            std::string open_folder_command = "xdg-open \"" + destination + "\"";
            std::system(open_folder_command.c_str());
        }
        catch (const fs::filesystem_error& e) {
            std::cerr << "Errors occurred while copying Google Chrome history: " << e.what() << std::endl;
        }
    } else {
        cout << "File path not found." << std::endl;
    }
    
    string nothing;
    std::cout << "Press any key to continue..." << std::endl;
    cin >> nothing;
    system("./advhcktool");
    
    }
    else if(useropp == "3") {
        cout << endl;
        system("sudo apt install neofetch");
        system("clear");
        system("neofetch");
        cout << endl;
        string nothing;
        cout << "Press any key to continue..." << endl;
        cin >> nothing;
        system("./advhcktool");

    }
    else if (useropp == "4") {
        cout << endl;
        system("sudo apt install chkrootkit");
        system("sudo apt install rkhunter");
        system("sudo rkhunter --check && sudo chkrootkit");
    }
    else if (useropp == "6") {
        cout << endl;
        system("xdg-open https://google.com");
    }
    else if (useropp == "5") {
        string interface;
        cout << endl;
        system("ifconfig");
        slowPrint("Enter your interface: ", 10);
        cin >> interface;
        string command = "tshark -i " + interface;
        system(command.c_str());

    }
    else if (useropp == "7") {
        cout << endl;
        system("telnet mapscii.me");
    }
    else {
            cout << endl << endl;
            slowPrint("wrong options!", 60);
            system("clear");
            slowPrint("program aborted!", 50);
            system("./advhcktool");
        }
    

    }
    }
