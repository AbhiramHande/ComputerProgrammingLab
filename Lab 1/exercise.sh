#!/bin/bash

cd ~
mkdir -p BITS/Pilani/P_Dept/CSIS
cd BITS
mkdir -p Hyderabad/H_Dept/Mech
mkdir -p Goa/G_Dept/Phy
cd Pilani/P_Dept
mkdir ECE
cd ~/BITS/Hyderabad/H_Dept
mkdir IE
cd ~/BITS/Goa/G_Dept
mkdir Chem
cd Phy
touch f1.txt
#You can use cat > f1.txt and then use 'Ctrl + D' to exit and write noting in the file
#touch command is used to to create an empty file
cd ~/BITS/Pilani/P_Dept/CSIS
touch f1.txt
cd ../ECE
echo "CS F111: Computer Programming
CS F211: Data Structures and Algorithm
CS F212: Database Systems
CS F213: Object Oriented Programming
CS F214: Logic in Computer Science
CS F215: Digital Design
CS F241: Microprocessor Programming and Interfacing
CS F301: Principles of Programming Languages
CS F342: Computer Architecture
CS F372: Operating Systems" > f2.txt
#You can use cat > f1.txt followed by listing the 10 names then using 'Ctrl + D' to exit and save the file.
cat f2.txt > ~/BITS/Hyderabad/H_Dept/Mech/file4.txt
tail -7 ~/BITS/Hyderabad/H_Dept/Mech/file4.txt
rm -r ~/BITS/Pilani/P_Dept/ECE