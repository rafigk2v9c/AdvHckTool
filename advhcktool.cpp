#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <filesystem>
#include <limits>

namespace fs = std::filesystem;
using namespace std;

void slowPrint(const string& text, unsigned int millis_per_char) {
    for (const char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(millis_per_char));
    }
}

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool askToContinue() {
    char choice;
    cout << endl << endl;
    slowPrint("Do you want to continue? (Y/N): ", 20);
    cin >> choice;
    clearInputBuffer();
    
    if (choice == 'Y' || choice == 'y') {
        return true;
    }
    return false;
}

void showMainMenu();

void handleWebAttacks() {
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
    getline(cin, useropp);

    if (useropp == "1") {
        string url;
        system("clear");
        if (system("which commix > /dev/null 2>&1") != 0) {
            system("sudo apt install commix -y");
        }
        system("clear");
        cout << "Enter Target url: ";
        getline(cin, url);
        string command = "commix -u '" + url + "'";
        system(command.c_str());
    }
    else if (useropp == "2") {
        string url;
        system("clear");
        if (system("which nuclei > /dev/null 2>&1") != 0) {
            system("sudo apt install nuclei -y");
        }
        system("clear");
        cout << "Enter Target url: ";
        getline(cin, url);
        string command = "nuclei -u '" + url + "'";
        system(command.c_str());
    }
    else if (useropp == "3") {
        string url;
        cout << endl << "Enter Target url: ";
        getline(cin, url);
        string command = "wpscan --url '" + url + "'";
        system(command.c_str());
    }
    else if (useropp == "4") {
        string url;
        system("clear");
        cout << "Enter Target url: ";
        getline(cin, url);
        string command = "sqlmap -u '" + url + "' --tables";
        system(command.c_str());
    }
    else if (useropp == "5") {
        system("clear");
        if (!fs::exists("RED_HAWK")) {
            system("git clone https://github.com/Tuhinshubhra/RED_HAWK");
        }
        system("clear");
        system("cd RED_HAWK && php rhawk.php");
    }
    else if (useropp == "6") {
        string url, wordlist, fuzz = "/FUZZ";
        cout << endl << "Enter Target url: ";
        getline(cin, url);
        cout << "Enter Wordlist Directory: ";
        getline(cin, wordlist);
        string command = "ffuf -u '" + url + fuzz + "' -w '" + wordlist + "'";
        system(command.c_str());
    }
    else if (useropp == "7") {
        string url;
        cout << "Enter url: ";
        getline(cin, url);
        string command = "wafw00f '" + url + "'";
        system(command.c_str());
    }
    else if (useropp == "8") {
        string targetIP;
        cout << "Enter Target IP: ";
        getline(cin, targetIP);
        cout << endl;
        string command = "sudo nmap -sVC " + targetIP;
        system(command.c_str());
    }
    else if (useropp == "9") {
        system("clear");
        if (!fs::exists("js-encoder")) {
            system("git clone https://github.com/rst3m/js-encoder.git");
        }
        system("clear");
        system("cd js-encoder && python js_encoder.py");
    }
    else if (useropp == "10") {
        system("clear");
        if (system("which zaproxy > /dev/null 2>&1") != 0) {
            system("sudo apt install zaproxy -y");
        }
        system("zaproxy");
    }
    else if (useropp == "11") {
        string url;
        system("clear");
        if (!fs::exists("DDoS-Ripper")) {
            system("git clone https://github.com/palahsu/DDoS-Ripper.git");
        }
        system("clear");
        cout << "Enter target ip address: ";
        getline(cin, url);
        string command = "cd DDoS-Ripper && python3 DRipper.py -p 80 -t 135 -s " + url;
        system(command.c_str());
    }
    else {
        cout << endl << endl;
        slowPrint("Wrong option!", 60);
    }
    
    if (askToContinue()) {
        showMainMenu();
    } else {
        cout << endl;
        slowPrint("Exiting program... Goodbye!\n", 30);
        exit(0);
    }
}

void handleWirelessAttacks() {
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
    getline(cin, useropp);

    if (useropp == "1") {
        system("clear");
        system("sudo wifite");
    }
    else if (useropp == "2") {
        system("clear");
        if (system("which airgeddon > /dev/null 2>&1") != 0) {
            system("sudo apt install airgeddon -y");
        }
        system("sudo airgeddon");
    }
    else if (useropp == "3") {
        system("clear");
        system("sudo fern-wifi-cracker");
    }
    else if (useropp == "4") {
        system("clear");
        if (!fs::exists("fluxion")) {
            system("git clone https://www.github.com/FluxionNetwork/fluxion.git");
        }
        system("cd fluxion && ./fluxion.sh");
    }
    else if (useropp == "x") {
        string interface;
        system("clear");
        system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
        cout << endl;
        slowPrint("Enter your interface: ", 10);
        getline(cin, interface);
        string command = "sudo airmon-ng start " + interface;
        system(command.c_str());
        slowPrint("Start the tool again", 100);
    }
    else {
        cout << endl << endl;
        slowPrint("Wrong option!", 60);
    }
    
    if (askToContinue()) {
        showMainMenu();
    } else {
        cout << endl;
        slowPrint("Exiting program... Goodbye!\n", 30);
        exit(0);
    }
}

void handlePhishingTools() {
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
    getline(cin, useropp);

    if (useropp == "1") {
        system("clear");
        if (!fs::exists("mip22")) {
            system("sudo git clone https://github.com/makdosx/mip22.git");
        }
        system("chmod -R 777 mip22 && cd mip22 && bash mip22.sh");
    }
    else if (useropp == "2") {
        system("clear");
        if (!fs::exists("zphisher")) {
            system("git clone --depth=1 https://github.com/htr-tech/zphisher.git");
        }
        system("clear");
        system("cd zphisher && bash zphisher.sh");
    }
    else if (useropp == "3") {
        system("clear");
        if (!fs::exists("nexphisher")) {
            system("git clone https://github.com/htr-tech/nexphisher.git");
        }
        system("cd nexphisher && bash setup && bash nexphisher");
    }
    else if (useropp == "4") {
        system("clear");
        if (!fs::exists("AdvPhishing")) {
            system("git clone https://github.com/Ignitetch/AdvPhishing.git");
        }
        system("cd AdvPhishing/ && chmod 777 * && ./Linux-Setup.sh && ./AdvPhishing.sh");
    }
    else {
        cout << endl << endl;
        slowPrint("Wrong option!", 60);
    }
    
    if (askToContinue()) {
        showMainMenu();
    } else {
        cout << endl;
        slowPrint("Exiting program... Goodbye!\n", 30);
        exit(0);
    }
}

void handleSniffingTools() {
    string useropp;
    system("clear");
    system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
    cout << endl;
    slowPrint("[1] wireshark\n", 20);
    slowPrint("[2] scapy\n", 20);
    slowPrint("[3] tcpdump\n", 20);
    slowPrint("[4] ettercap\n", 20);
    cout << endl;
    slowPrint("fr> ", 10);
    getline(cin, useropp);

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
        cout << endl << "Enter your interface: ";
        getline(cin, interface);
        string command = "sudo tcpdump -i " + interface;
        system(command.c_str());
    }
    else if (useropp == "4") {
        cout << endl;
        system("sudo ettercap -G");
    }
    else {
        cout << endl << endl;
        slowPrint("Wrong option!", 60);
    }
    
    if (askToContinue()) {
        showMainMenu();
    } else {
        cout << endl;
        slowPrint("Exiting program... Goodbye!\n", 30);
        exit(0);
    }
}

void handleOsintTools() {
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
    getline(cin, useropp);

    if (useropp == "1") {
        system("maltego");
    }
    else if (useropp == "2") {
        system("clear");
        if (!fs::exists("Th3inspector")) {
            system("git clone https://github.com/Moham3dRiahi/Th3inspector.git");
        }
        system("cd Th3inspector && sudo bash ./install.sh");
    }
    else if (useropp == "3") {
        string username, sessionid;
        if (!fs::exists("toutatis")) {
            system("git clone https://github.com/megadose/toutatis.git");
        }
        system("cd toutatis/ && sudo python3 setup.py install");
        system("clear");
        cout << "Enter username: ";
        getline(cin, username);
        cout << "If you don't know how to get the session id, check this link:\n";
        cout << "https://camo.githubusercontent.com/b456ce5d94485de8f34b0a49a1e9f72cf81b050c045cc5fa57d85359fe5264c2/68747470733a2f2f66696c65732e636174626f782e6d6f652f31726669366a2e706e67" << endl;
        cout << "Enter session id: ";
        getline(cin, sessionid);
        string command = "toutatis -u '" + username + "' -s '" + sessionid + "'";
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
        slowPrint("Wrong option!", 60);
    }
    
    if (askToContinue()) {
        showMainMenu();
    } else {
        cout << endl;
        slowPrint("Exiting program... Goodbye!\n", 30);
        exit(0);
    }
}

void handleAnonymousTools() {
    string useropp;
    system("clear");
    system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
    cout << endl;
    slowPrint("[1] macchanger\n", 20);
    slowPrint("[2] kali-anonsurf\n", 20);
    slowPrint("[3] protonvpn\n", 20);
    cout << endl;
    slowPrint("fr> ", 10);
    getline(cin, useropp);

    if (useropp == "1") {
        string interface;
        if (system("which macchanger > /dev/null 2>&1") != 0) {
            system("sudo apt install macchanger -y");
        }
        system("clear");
        system("ifconfig");
        cout << endl << "Enter interface: ";
        getline(cin, interface);
        string command = "sudo macchanger -r " + interface;
        system(command.c_str());
        cout << endl << endl;
        slowPrint("MAC address changed successfully!", 100);
    }
    else if (useropp == "2") {
        system("clear");
        if (!fs::exists("kali-anonsurf")) {
            system("git clone https://github.com/Und3rf10w/kali-anonsurf.git");
        }
        system("cd kali-anonsurf && sudo ./installer.sh");
        system("sudo anonsurf start");
        cout << endl;
        slowPrint("Type 'anonsurf stop' to close it.", 100);
    }
    else if (useropp == "3") {
        cout << endl;
        system("wget https://repo.protonvpn.com/debian/dists/stable/main/binary-all/protonvpn-stable-release_1.0.4_all.deb");
        system("sudo dpkg -i protonvpn-stable-release_1.0.4_all.deb");
        system("sudo apt-get update");
        system("clear");
        system("sudo apt-get install protonvpn -y");
        system("protonvpn");
    }
    else {
        cout << endl << endl;
        slowPrint("Wrong option!", 60);
    }
    
    if (askToContinue()) {
        showMainMenu();
    } else {
        cout << endl;
        slowPrint("Exiting program... Goodbye!\n", 30);
        exit(0);
    }
}

void handleAdvancedTools() {
    string useropp;
    system("clear");
    system("figlet -f /usr/share/figlet/slant.flf \"ADVHCK\"");
    cout << endl;
    slowPrint("[1] Firefox History and Passwords\n", 20);
    slowPrint("[2] Chrome History\n", 20);
    slowPrint("[3] My system information\n", 20);
    slowPrint("[4] Somebody Hack me?\n", 20);
    slowPrint("[5] What are the queries I receive?\n", 20);
    slowPrint("[6] Open Browser\n", 20);
    slowPrint("[7] World Map\n", 20);
    cout << endl;
    slowPrint("fr> ", 10);
    getline(cin, useropp);

    if (useropp == "1") {
        cout << endl << endl << endl;
        string profileDir = string(getenv("HOME")) + "/.mozilla/firefox/";

        if (fs::exists(profileDir)) {
            for (const auto &entry : fs::directory_iterator(profileDir)) {
                string dirName = entry.path().filename().string();
                
                if (dirName.find(".default-esr") != string::npos || dirName.find(".default") != string::npos) {
                    cout << "Your Profile directory: " << dirName << endl;
                }
            }
        }
        
        string firefox;
        cout << endl << "Enter Your Profile Directory: ";
        getline(cin, firefox);
        
        string command = "dumpzilla '" + profileDir + firefox + "' --Passwords --History";
        system(command.c_str());
    }
    else if (useropp == "2") {
        string history_path = string(getenv("HOME")) + "/.config/google-chrome/Default/History";
        
        string destination;
        cout << "Please specify the path where the files will be saved: ";
        getline(cin, destination);

        if (fs::exists(history_path)) {
            cout << "Google history files found!" << endl;
            cout << "Copying..." << endl;

            string destination_path = destination + "/History_copy";
            try {
                fs::copy_file(history_path, destination_path, fs::copy_options::overwrite_existing);
                cout << "Google history files successfully copied: " << destination_path << endl;

                system("xdg-open https://inloop.github.io/sqlite-viewer/");

                string open_folder_command = "xdg-open '" + destination + "'";
                system(open_folder_command.c_str());
            }
            catch (const fs::filesystem_error& e) {
                cerr << "Errors occurred while copying: " << e.what() << endl;
            }
        } else {
            cout << "File path not found." << endl;
        }
    }
    else if(useropp == "3") {
        cout << endl;
        if (system("which neofetch > /dev/null 2>&1") != 0) {
            system("sudo apt install neofetch -y");
        }
        system("clear");
        system("neofetch");
        cout << endl;
    }
    else if (useropp == "4") {
        cout << endl;
        if (system("which chkrootkit > /dev/null 2>&1") != 0) {
            system("sudo apt install chkrootkit -y");
        }
        if (system("which rkhunter > /dev/null 2>&1") != 0) {
            system("sudo apt install rkhunter -y");
        }
        system("sudo rkhunter --check && sudo chkrootkit");
    }
    else if (useropp == "5") {
        string interface;
        cout << endl;
        system("ifconfig");
        slowPrint("Enter your interface: ", 10);
        getline(cin, interface);
        string command = "tshark -i " + interface;
        system(command.c_str());
    }
    else if (useropp == "6") {
        cout << endl;
        system("xdg-open https://google.com");
    }
    else if (useropp == "7") {
        cout << endl;
        system("telnet mapscii.me");
    }
    else {
        cout << endl << endl;
        slowPrint("Wrong option!", 60);
    }
    
    if (askToContinue()) {
        showMainMenu();
    } else {
        cout << endl;
        slowPrint("Exiting program... Goodbye!\n", 30);
        exit(0);
    }
}

void showMainMenu() {
    system("clear");
    system("figlet -f /usr/share/figlet/slant.flf \"ADVHCKTOOL\"");

    int userselect;
    cout << "\t\t\t\t\t\tcoded by Rafig Zarbaliyev" << endl;
    cout << "\t\t\t\t\t\tinstagram @rafok2v9c" << endl << endl << endl;
    
    slowPrint("Select from the menu\n\n\a", 20);
    slowPrint("\033[31m[1] Web attacks\033[0m\n", 5);
    slowPrint("\033[31m[2] Wireless attacks\033[0m\n", 5);
    slowPrint("\033[31m[3] Phishing tools\033[0m\n", 5);
    slowPrint("\033[31m[4] Sniffing tools\033[0m\n", 5);
    slowPrint("\033[31m[5] Osint tools\033[0m\n", 5);
    slowPrint("\033[31m[6] Be anonymous(VPN)\033[0m\n", 5);
    slowPrint("\033[31m[7] Advanced tools\033[0m\n", 5);
    slowPrint("\033[31m[0] Exit\033[0m\n\n", 5);
    slowPrint("fr> ", 10);
    
    cin >> userselect;
    clearInputBuffer();

    switch(userselect) {
        case 1:
            handleWebAttacks();
            break;
        case 2:
            handleWirelessAttacks();
            break;
        case 3:
            handlePhishingTools();
            break;
        case 4:
            handleSniffingTools();
            break;
        case 5:
            handleOsintTools();
            break;
        case 6:
            handleAnonymousTools();
            break;
        case 7:
            handleAdvancedTools();
            break;
        case 0:
            cout << endl;
            slowPrint("Exiting program... Goodbye!\n", 30);
            exit(0);
            break;
        default:
            cout << endl << endl;
            slowPrint("Wrong option!", 60);
            if (askToContinue()) {
                showMainMenu();
            } else {
                cout << endl;
                slowPrint("Exiting program... Goodbye!\n", 30);
                exit(0);
            }
    }
}

int main() {
    system("clear");
    
   
    if (system("which figlet > /dev/null 2>&1") != 0) {
        cout << "Figlet yükleniyor..." << endl;
        system("sudo apt install figlet -y");
    }
    
    showMainMenu();
    
    return 0;
}
