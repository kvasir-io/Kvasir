#Extention files
Often CMSIS files do not contain all the nicessary information needed to generate good chip files for Kvasir. 
Although additions of the commonly missing read and write action on bit fields (e.g. clearOnRead or oneToClear) could potentially be added directly to the CMSIS files, CMSIS files are also updated outside this project and it seems better to be able to just drop in new ones with no merging. There are also other ententions like extra data for GPIO code generation which are not part of CMSIS.
Because of this and the fact that I personally hate XML all data which Kvasir adds to the CMSIS files is contained in JSON format in the corresponding extention files here.
