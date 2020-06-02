""" 
The Converter!!

Instructions: Edit the mapwad path and ConversePath variables to the correct paths and make sure your map wad files are in the
correct path MapWadPath, then run the script
"""
from omg import *
import sys
import io
import os

# The Map Wad files path
MapWadPath = "I:\lexicon-rebuild\pk3\Maps"

# The Boom2UDMF path
Boom2UDMFPath = "I:\Boom2UDMF"

# Get all filenames in the Maps folder and put them in an array
Mapfilelist = os.listdir(MapWadPath)
# Now the logic to Get a WAD file, extract the contents into the Boom2UDMF Input folder then run the script and add the result back into the wad


for wadfile in Mapfilelist:
    if wadfile.endswith('.WAD'):
        print(f'Extracting ' + wadfile)
        
        # Open the wad file and create a WAD object
        openwad = WadIO(openfrom=MapWadPath + "\\" + wadfile)

    else:
        print(wadfile + ' is not a WAD File. Skipping')

    