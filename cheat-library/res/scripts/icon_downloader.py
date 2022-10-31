import requests
import json
import os

# Note: This does not fetch all icons from all the jsons
# Manually configure it to fetch what's only needed
json_file = '../map_undeground_mines.json'
raw_data = open(json_file)
json_data = json.load(raw_data)

hd_folder = '../iconsHD'
file_type = '.png'

if not (os.path.exists(hd_folder)):
    os.makedirs(hd_folder)

# For Json Structures { "main" : {"id":{info}, "id":{info}, "id":{info} } }
mainKey = 'labels'
for id, info in json_data[mainKey].items():
    file_name = info['clear_name']
    if 'icon' in info:
        with open(f"{hd_folder}/{file_name}{file_type}", "wb") as img_file:
            img_file.write(requests.get(info['icon']).content)

# For Json Structures { "main" : [ {info}, {info}, {info} ] }
# mainKey = 'weapon_types'
# for info in json_data[mainKey]:
#     file_name = info['name']
#     if 'icon' in info:
#         with open(f"{hd_folder}/{file_name}{file_type}", "wb") as img_file:
#             img_file.write(requests.get(info['icon']).content)
