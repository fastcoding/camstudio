# camstudio

Added -slice {seconds} to commandline tool
every slice seconds, recording process will start over.
UPDATES: the output filename will be in this format:
{basename}M{monitor number}-{slice number}.avi

precompiled executable added to source tree under bin/

EXAMPLE: <br/>
CamCommandLine.exe -seconds 15 -slice 5 -fps 25 -codec 0 -outfile test.avi<br/>
list of files shall be generated<br/>
testM0.avi<br/>
testM0-1.avi<br/>
testM0-2.avi<br/>
testM0-3.avi<br/>
...
