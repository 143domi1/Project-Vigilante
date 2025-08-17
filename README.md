# Project Vigilante

Hello! Welcome to Project Vigilante. You might be wondering… what is Project Vigilante? Well, let me tell you, it’s an ambitious hardware-level antivirus concept I created, designed to take security to a whole new level.

Project Vigilante is a PCIe card antivirus that works outside your operating system and UEFI, making it immune to malware detection or tampering. Its main goal? Protect your machine at the deepest level:

UEFI Protection: Vigilante can detect rootkits and malicious modifications in the UEFI firmware and restore it to its original, safe state.(Work in progress)

Full Disk Scans: It can scan all connected filesystems and storage devices for malware. When malware is detected, it is permanently removed instantly no trash bins, no waiting.(Work in progress)

Zero System Resource Usage: Vigilante runs independently thanks to a dedicated embedded RISC-V CPU and a lightning-fast 1GB NVMe drive, so your computer’s performance is never affected.


The NVMe drive stores both the firmware and malware databases. It is read-only most of the time, with writes only occurring during updates. It uses the LittleFS filesystem, making the card resilient to sudden power losses, bricking the device is extremely unlikely.

Because Vigilante operates externally from your OS and UEFI, nothing in your system malware included, can detect, disable, or modify it.

This project is fully FOSS and licensed under GPLv3, meaning all software, firmware, and designs are open for contribution, improvement, and collaboration.
