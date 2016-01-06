#Extention files
Often CMSIS files do not contain all the nicessary information needed to generate good chip files for Kvasir. 
Although additions of the commonly missing read and write action on bit fields (e.g. clearOnRead or oneToClear) could potentially be added directly to the CMSIS files, however CMSIS files are also updated outside this project and it seems better to be able to just drop in new ones with no merging.
