sudo iptables -F
sudo iptables -X

sudo iptables -A OUTPUT -d 172.18.1.0/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.1.129/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.2.0/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.2.129/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.3.0/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.3.129/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.4.0/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.16.0/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.17.0/25 -j ACCEPT
sudo iptables -A OUTPUT -d 172.18.18.0/25 -j ACCEPT
sudo iptables -A OUTPUT -j REJECT
