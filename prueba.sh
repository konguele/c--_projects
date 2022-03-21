#!/bin/bash
TOKEN="5291565375:AAEV1KVA4LY4NcpZ0HgGLHEim4926KC96XM"
ID="857644731"
MENSAJE="Esto es un Mensaje de Prueba"
URL="https://api.telegram.org/bot$TOKEN/sendMessage"

curl -s -X POST $URL -d chat_id=$ID -d text="$MENSAJE