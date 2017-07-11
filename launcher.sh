cd /
cd /home/pi
pdftotext sample.pdf
espeak -f mysample.txt -s100 -g15 --stdout | aplay -D default
sudo python2 test.py
cd /
