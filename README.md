# AdvHckTool

![Screenshot_1](https://github.com/user-attachments/assets/d5bf5f4d-f2d2-416b-8b10-f48e06d6c869)

# ADVHCKTOOL

A comprehensive cybersecurity toolkit for penetration testing and security auditing on Linux systems.

## Disclaimer

This tool is designed for **educational purposes** and **authorized security testing only**. Unauthorized access to computer systems is illegal. Always obtain proper authorization before testing any systems you do not own.

## Features

ADVHCKTOOL provides 7 main categories of security tools:

### 1. Web Attacks
- **commix** - Command injection exploitation
- **nuclei** - Vulnerability scanner
- **wpscan** - WordPress security scanner
- **sqlmap** - SQL injection tool
- **redhawk** - Information gathering tool
- **ffuf** - Web fuzzer
- **wafw00f** - Web application firewall detection
- **nmap** - Network scanner
- **jsencoder** - JavaScript encoder
- **zaproxy** - Web application security scanner
- **ddos** - DDoS testing tool

### 2. Wireless Attacks
- **wifite** - Automated wireless auditor
- **airgeddon** - Multi-use wireless security tool
- **fern** - Network security testing
- **fluxion** - Social engineering WPA/WPA2 attack
- **Monitor mode setup** - Configure wireless adapter

### 3. Phishing Tools
- **mip22** - Phishing framework
- **zphisher** - Automated phishing tool
- **nexphisher** - Advanced phishing tool
- **advphishing** - Comprehensive phishing platform

### 4. Sniffing Tools
- **wireshark** - Network protocol analyzer
- **scapy** - Packet manipulation tool
- **tcpdump** - Command-line packet analyzer
- **ettercap** - Network sniffer/interceptor

### 5. OSINT Tools
- **maltego** - Data mining tool
- **th3inspector** - Information gathering tool
- **instagram** - Instagram OSINT (toutatis)
- **osintframework** - OSINT resource collection
- **osint canada** - Canada-specific OSINT resources

### 6. Anonymity Tools (VPN)
- **macchanger** - MAC address changer
- **kali-anonsurf** - System-wide anonymization
- **protonvpn** - Secure VPN service

### 7. Advanced Tools
- **Firefox History/Passwords** - Extract browser data
- **Chrome History** - Extract browser history
- **System Information** - Display system info (neofetch)
- **Rootkit Detection** - Check for compromise
- **Network Query Monitor** - Monitor incoming packets
- **Browser** - Quick web access
- **World Map** - Interactive ASCII world map

## Installation

### Prerequisites

```bash
# Update system
sudo apt update && sudo apt upgrade -y

# Install required packages
sudo apt install g++ figlet git -y
```

### Building the Tool

```bash
# Clone or download the repository
cd /path/to/advhcktool

# Compile the program
g++ -std=c++17 advhcktool.cpp -o advhcktool

# Make it executable
chmod +x advhcktool

# Run the tool
./advhcktool
```

### Alternative Compilation (with filesystem library)

For older systems that require explicit linking:

```bash
g++ -std=c++17 advhcktool.cpp -o advhcktool -lstdc++fs
```

## Usage

1. Run the program:
```bash
./advhcktool
```

2. Select a category from the main menu (1-7)

3. Choose a specific tool from the submenu

4. Follow the prompts for the selected tool

5. After completion, you'll be asked:
   - **Y** - Return to main menu
   - **N** - Exit program

## Recommended Environment

This tool works best on:
- **Kali Linux** (most tools pre-installed)
- **Parrot OS**
- **BlackArch**
- **Ubuntu/Debian** (with manual package installation)

## Usage Examples

### Example 1: Web Vulnerability Scanning
```
1. Select [1] Web attacks
2. Select [2] nuclei
3. Enter target URL: https://example.com
4. Wait for scan results
5. Choose Y to continue or N to exit
```

### Example 2: Network Scanning
```
1. Select [1] Web attacks
2. Select [8] nmap
3. Enter target IP: 192.168.1.1
4. Review scan results
5. Choose next action
```

### Example 3: WiFi Security Testing
```
1. Select [2] Wireless attacks
2. Select [x] to enable monitor mode
3. Enter interface: wlan0
4. Return and select desired tool
```

## Key Features

- **Interactive Menu System** - Easy-to-use interface
- **Automatic Installation** - Tools are installed automatically when needed
- **Continue or Exit** - Choose to perform multiple operations or exit
- **Color-Coded Interface** - Easy navigation with colored menus
- **Modular Design** - Clean code structure with separate functions

## Legal Notice

- This tool is for **authorized testing only**
- Always obtain **written permission** before testing
- Misuse of this tool may violate local, state, or federal laws
- The author is **not responsible** for any misuse or damage caused
- Use responsibly and ethically

## License

This project is provided "as-is" for educational purposes. Users are responsible for complying with all applicable laws and regulations.

## Contributing

Contributions, issues, and feature requests are welcome!

## Important Notes

1. **Root Access**: Many tools require sudo/root privileges
2. **Network Interface**: Some wireless tools need specific network adapters
3. **Legal Compliance**: Always ensure you have authorization
4. **Backup Data**: Some operations may modify system settings
5. **Tool Dependencies**: Internet connection required for first-time setup

---

**Remember: With great power comes great responsibility. Use this tool ethically and legally.**
