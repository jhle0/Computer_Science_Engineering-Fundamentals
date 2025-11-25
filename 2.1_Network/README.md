# 🌐 Computer Networks

This repository contains my study notes on **Computer Networks**.  
Each topic is written in both **Korean** and **English**, following the same bilingual structure as my Computer Architecture notes. :contentReference[oaicite:0]{index=0}  

---

## 📑 Table of Contents

### 1. Network Overview & Performance Metrics
- 📄 [Korean](./2.1-1_네트워크_개요.md) | 🌐 [English](./2.1-1_Network_Overview.md)  
- **Internet Structure**: Hosts, links, packet switching, ISPs, edge vs core.  
- **Topologies**: Star, ring, bus, mesh, hybrid; Internet as a hierarchical mesh.  
- **Performance Metrics**: Latency (transmission / propagation / processing / queuing), bandwidth, throughput vs goodput, packet loss.  
- **Switching**: Circuit switching vs packet switching; FDM/TDM/statistical multiplexing.  
- **QoS & Measurement**: Delay, jitter, loss, bandwidth, RTT, traceroute, tail latency (p95/p99).  
- **Focus**: View the Internet as an **end-to-end service** and understand what limits performance.

---

### 2. OSI 7-Layer & TCP/IP Model
- 📄 [Korean](./2.1-2_OSI_7계층&TCPIP_모델.md) | 🌐 [English](./2.1-2_OSI_7Layers&TCPIP_Model.md)  
- **OSI Model**: Application, Presentation, Session, Transport, Network, Data Link, Physical.  
- **TCP/IP Model**: Application, Transport, Internet, Network Access.  
- **Encapsulation/Decapsulation**: How headers are added and removed as data moves down/up the stack.  
- **Protocol Mapping**:  
  - Application: HTTP, HTTPS, DNS, SMTP, POP3, IMAP  
  - Transport: TCP, UDP  
  - Network: IP, ICMP, ARP  
  - Link: Ethernet, Wi-Fi  
- **Focus**: Understand each layer’s **role, abstraction, and real-world protocols**.

---

### 3. Application Layer
- 📄 [Korean](./2.1-3_애플리케이션_계층.md) | 🌐 [English](./2.1-3_Application_Layer.md)  
- **Architecture Styles**: Client–Server vs P2P, hybrid CDNs, BitTorrent-style swarms.  
- **HTTP/HTTPS**: Request–response model, methods, status codes, headers, cookies/sessions, caching, statelessness.  
- **DNS**: Hierarchical naming (Root → TLD → Authoritative), recursive vs iterative queries, caching, DNS over HTTPS/TLS.  
- **Email Protocols**: SMTP (sending), POP3/IMAP (retrieval), message flow across mail servers.  
- **Focus**: How **web and naming services** are actually implemented on the Internet.

---

### 4. Transport Layer
- 📄 [Korean](./2.1-4_트랜스포트_계층.md) | 🌐 [English](./2.1-4_Transport_Layer.md)  
- **UDP**: Connectionless, best-effort, low overhead, typical use cases (DNS, streaming, gaming).  
- **TCP**: Connection-oriented, 3-way handshake, reliable delivery, in-order delivery, retransmissions, sequence/ACK numbers.  
- **Flow Control**: Receive window, preventing receiver buffer overflow.  
- **Congestion Control**: Slow start, congestion avoidance, fast retransmit/fast recovery.  
- **Ports**: Service identification (e.g., HTTP 80, HTTPS 443, DNS 53).  
- **NAT & Port Forwarding**: Private ↔ public addressing, how connections traverse NAT.  
- **Focus**: How the Transport layer provides **reliable or low-latency service** to applications.

---

### 5. Network Layer
- 📄 [Korean](./2.1-5_네트워크_계층.md) | 🌐 [English](./2.1-5_Network_Layer.md)  
- **IP Addressing**: IPv4 structure, subnetting, CIDR, address blocks, IPv6 motivation.  
- **Forwarding & Routing**: Router forwarding tables, longest-prefix match.  
- **Routing Protocols (Concepts)**: Distance vector (RIP), link state (OSPF), path vector (BGP), intra-AS vs inter-AS.  
- **NAT (Network Address Translation)**: Private vs public IP, NAT table, impact on end-to-end connectivity.  
- **ICMP**: Error reporting and debugging (ping, traceroute).  
- **Focus**: Understand **IP addressing, routing decisions, and control-plane vs data-plane**.

---

### 6. Link Layer
- 📄 [Korean](./2.1-6_링크_계층.md) | 🌐 [English](./2.1-6_Data_Link_Layer.md)  
- **MAC Addresses & ARP**: Mapping IP ↔ MAC, ARP request/reply, ARP tables.  
- **Switches**: Frame forwarding, MAC learning, filtering, broadcast domains.  
- **Error Detection**: Parity bits, checksums, CRC.  
- **Ethernet**: Frame format, CSMA/CD history, full-duplex switching, VLAN basics.  
- **Focus**: How **local networks** deliver frames and how switches differ from routers.

---

### 7. Wireless & Mobile Networks
- 📄 [Korean](./2.1-7_무선_및_이동_네트워크.md) | 🌐 [English](./2.1-7_Wireless_and_Mobile_Networks.md)  
- **Wireless Links**: Signal attenuation, interference, SNR, bit error rate.  
- **Wi-Fi (802.11)**: AP, SSID, association, CSMA/CA, RTS/CTS, basic rate adaptation.  
- **Mobility**: Handover/roaming between APs or cells, maintaining sessions while moving.  
- **Cellular Networks (4G/5G)**: Cells, base stations (eNodeB/gNodeB), core network, separation of control plane vs data plane.  
- **Security Overview**: WPA2/WPA3 for Wi-Fi, SIM/IMSI & home subscriber database for cellular.  
- **Focus**: Characteristics of **wireless media and mobility** compared to wired links.

---

### 8. Network Security
- 📄 [Korean](./2.1-8_컴퓨터_네트워크_보안.md) | 🌐 [English](./2.1-8_Computer_Network_Security.md)  
- **Security Goals & Threat Model**: Confidentiality, integrity, authentication, operational security; attacker capabilities (sniffing, tampering, injection, deletion).  
- **Cryptography Basics**: Plaintext/ciphertext/key, symmetric vs public-key crypto, RSA, hybrid encryption (session keys).  
- **Message Integrity & Authentication**: Cryptographic hash functions, MAC/HMAC, digital signatures, PKI and certificates.  
- **Endpoint Authentication**: Challenge–response with nonces, password-based schemes, replay-attack resistance.  
- **Secure Email**: “Sign then encrypt” pattern, PGP, web of trust.  
- **TLS over TCP**: Handshake (server auth + key agreement), key derivation, record layer (sequence numbers + HMAC + encryption).  
- **Network-Layer Security**: IPsec (AH vs ESP), tunnel mode VPNs, SA/SAD/SPD, IKE for key management.  
- **Wireless & Cellular Security**: WPA2/EAP-based Wi-Fi authentication; 4G/5G AKA using K(IMSI) and HSS for mutual authentication and key derivation.  
- **Operational Security**: Firewalls (packet filters, stateful inspection, proxies), IDS/IPS (signature-based vs anomaly-based).  
- **Focus**: How modern networks achieve **secure communication end-to-end**, from crypto primitives up to TLS, VPNs, and operational defenses.

---
