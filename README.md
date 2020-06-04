# Invasion Unleashed - Legion of Sin

Invasion Unleashed - Legion of Sin is a zandronum mapset for it's gamemode invasion. This set will contain atleast 32 maps to play on
invasion gamemode (hopefully)

Releases will be automatically uploaded by me, to TSPG. If you build your own copy using the instructions below, please do not upload those builds to TSPG (unless you want your e-knee caps popped tehehehe)

## Building the project

All you need to do is clone the project to a folder and run the ``Compile.bat`` file to compile the wad. Once loaded you can select an option. These options are:

```plaintext
Full Compression (slow):
     1: Compile Everything
     2: Compile Main PK3
     3: Compile Resource PK3 (For map making and contributors)

No Compression (fast):
     4: Compile Everything
     5: Compile Main PK3
     6: Compile Resource PK3 (For map making and contributors)

BCS:
     7: Compile only BCS scripts.
```

In most cases you will only need to select option 2 but if you do not care about compression, you can just select option 5.

>**NOTE:** If you are planning on working on a map for this mapset then you will need to either select option 1 which will also get you the resource pk3 (or select option 3) to use to get the actors and textures used in the pack.

## Submitting a Map

If you would like to submit a map to this project then please follow these instructions.

1. Create a fork of this project in github and ensure you are working in the dev branch.

2. In the ``submissions`` folder create a new folder for your map. (make sure the folder name is the name of your map)

3. When puting your map in the folder, please ensure you are following the pk3 folder structure.

4. Please include a README.md file outlining:
   - Map name
   - How many waves
   - Resources used and credits

5. Commit and push your changes then submit a pull request for us to put your map in.
