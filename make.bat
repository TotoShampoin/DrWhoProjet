@echo off
pictconv -o6 data\william_pic.png tmp\william.raw
bin2txt -f1 tmp\william.raw src\data\william.h william_pic

cl65 -tatmos src\drwho.c -o drwho.tap