/*
SMALL TOOL: is a C program that does a task and does it well.
---------------------------------------------------------------

FILTERS: are tools that: read,process and write it out line by line

HEAD: This tool displays the first few lines of a file.

TAIL: This filter displays the lines at the end of a file.

SED: The stream editor lets you do things like search and replace text.

-------------------------------------------------------------------------

COMPILING USING DATAS FROM A FILE AND REDIRECTING THE OUTPUT TO A NEW FILE

-Getting and sending data to files:   executable < datainput.. > destino..
-To display the return status error: \> echo %ERRORLEVEL%
--------------------------------------------------------------------

THE STANDARD ERROR (do not mix your Output with errors anymore :) )
The Standard Error is an output that sends error messages:

fprintf(stdout,"I like turtles"); // it allows you to choose where you want to send the text, in this case it'll go to stdout( Standard Output, vulgo display)

fprintf(stderr,"I like turtles");

fscanf(sdtin,...);

---------------------------------------------------------------------------

REDIRECTING THE stderr: ... > geo2json 2> errors.txt  == '2>' means that it's the 2nd output
------------------------------------------------------------------------------

WORKING WITH SMALL TOOLS TOGETHER:

(bermuda | geo2json) < spooky.csv > output.json
---------------------------------------------------------------------------------

CREATING YOUR OWN DATA STREAMS
-creating
FILE *in_file = fopen("input.txt","r");  == "r" mens 'read mode' (it also has 'a' for append mode)==
FILE *out_file = fopen("output.txt","w");

-using
fprintf(out_file,"Don't wear %s","red");
fscanf(in_file,"%79[^\n]",sentence);

--closing
fclose(in_file);
fclose(out_file);

----------------------------------------------------------------------------------
ARGUMENTS IN MAIN()
int main(int argc, char *argv[]) == argc -> count the number of args; argv-> get each arg into a space, the program name will be the argv[0]
{
    ...
}

-EXECUTING: bermuda mermaid mermaid.csv Elvis elvises.csv the_rest.csv
----------------------------------------------------------------------------------------
LET THE LIBRARY DO THE WORK FOR YOU
If you're writing a command-line tool, you're probably going to need to add command-line-options

-getopt(): returns the next option it finds in the command line
    -use #include <unistd.h>
    -while((ch=getopt(argc, argv, "ae:")) != EOF) == : means that 'e' has an arg
    switch(ch){
        case 'e':
            engine-count:optarg; ==optarg gets the 'e' arg
        ...
    }

    argc -= optind; ==optind stores the number of strings read from the command line to get past from the options
    argv += optind; ==means the adress of argv + optind = argv[0]



*/
