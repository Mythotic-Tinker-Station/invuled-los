#!/bin/bash
# Zelaven: Temporary solution for a build script for linux.
rm ../build.pk3
7za a -tzip ../build.pk3 -r -xr\!*.git -x\!linuxBuildTmp.sh -xr\!*.swp -xr\!.dbs -xr\!*.backup1 -xr\!*.backup2 -xr\!*.backup3 -xr\!*.bak



