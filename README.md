# camstudio

Added -slice <seconds> to commandline tool
every slice seconds, recording process will start over.
UPDATES: the output filename will be in this format:
<basename>M<monitor number>-<slice number>.avi

EXAMPLE: 
CamCommandLine.exe -seconds 15 -slice 5 -fps 25 -codec 0 -outfile test.avi
list of files shall be generated
testM0.avi
testM0-1.avi
testM0-2.avi
testM0-3.avi
...
