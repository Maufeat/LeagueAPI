from swag2yolo import *
import http.client
import base64
import json
import ssl
import os
import re

cmdline = os.popen("WMIC PROCESS WHERE name='LeagueClientUx.exe' GET commandline").read()

port = re.search("--app-port=(\d+)", cmdline).group(1)
password = re.search('--remoting-auth-token=([^"]+)', cmdline).group(1)

context = ssl._create_unverified_context()
connection = http.client.HTTPSConnection('localhost', port, context=context)
headers = { 'Authorization' : 'Basic %s' % base64.b64encode("riot:{0}".format(password).encode()).decode("ascii")}

connection.request('GET', '/v2/swagger.json', headers=headers)
response = connection.getresponse()
swagger = json.loads(response.read().decode('utf-8'))

connection.request('GET', '/Help?format=Full', headers=headers)
response = connection.getresponse()
help = json.loads(response.read().decode('utf-8'))

json_save(yolo(help, swagger), "yolo.json")
