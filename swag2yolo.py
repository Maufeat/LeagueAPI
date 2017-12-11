import json
import os

#generates info from /Help?format=Full and /v2/swagger.json
def yolo(helpjson,  swagjson):
    requests = {
        request["operationId"] : {
            "method": method, 
            "url": path, 
            "parameters": {
                param["name"]: param for param in request["parameters"]
            } 
        } for path, methods in swagjson["paths"].items() for method, request in methods.items() 
    }
    info = {
        "definitions" :[
            {
                "name": entry["name"], 
                "description": entry["description"], 
                "fields": [
                    {
                        "name": fname, 
                        "description": field["description"], 
                        "type": field["type"], 
                        "optional": field["optional"]
                        # this hackery deduplicates posible fields
                    } for fname, field in { fieldx["name"]: fieldx for fieldx in entry["fields"] }.items()
                ], 
                "values": [ 
                    {
                        "name": value["name"] , 
                        "description": value["description"], 
                        "value": value["value"]
                    } for value in entry["values"]
                ], 
                "isEnum": len(entry["values"]) > 0
            } for entry in helpjson["types"] 
        ], 
        "functions" : [
            {
                "name": function["name"], 
                "description": function["description"], 
                "returns": function["returns"], 
                "method": requests[function["name"]]["method"], 
                "url": requests[function["name"]]["url"], 
                "arguments":  [
                    {
                        "name": arg["name"], 
                        "description" : arg["description"], 
                        "type" : arg["type"],
                        "optional": arg["optional"], 
                        "in": requests[function["name"]]["parameters"][arg["name"]]["in"]
                    } for arg in function["arguments"]
                ]
            } for function in helpjson["functions"] if function["name"] in requests
        ], 
       "events": [
            {
                "name": event["name"],
                "description": event["description"], 
                "type": event["type"]
            } for event in helpjson["events"]
       ]
    }
    return info

# saves json to file
def json_save(info,  filename):
    open(filename,  "w+").write(json.dumps(info, sort_keys=True, indent=2, separators=(',', ': ')))

# loads json from file
def json_load(filename):
    return json.load(open(filename))

# convinience function to generate path
def mkpath(name):
    try:
        os.makedirs(name)
    except:
        True       
