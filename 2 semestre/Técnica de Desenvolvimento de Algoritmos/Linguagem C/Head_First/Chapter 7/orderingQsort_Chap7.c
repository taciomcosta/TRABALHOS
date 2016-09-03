#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare_scores_desc(const void* score_a, const void* score_b)
{
    int a = *(int*)score_a; // converting the void* to an int* data type(int pointer data type)
    int b = *(int*)score_b; //
    return b - a;
}

int compare_names(const void* a, const void* b)
{
    char** sa = (char**)a; //Each item in a string array is a char pointer (char*). When qsort() calls the comparator function, it sends pointers to two elements in the arrays. That means the comparator receives two pointers-to-pointers-to-char. In C notation, each value is a char**.
    char** sb = (char**)b;
    return strcmp(*sa, *sb);
}

int main()
{
  int scores[] = {543,323,32,554,11,3,112};
  int i;
  qsort(scores, 7, sizeof(int), compare_scores_desc);
  puts("These are the scores in order:");
  for (i = 0; i < 7; i++) {
    printf("Score = %i\n", scores[i]);
  }
  char *names[] = {"Karen", "Mark", "Brett", "Molly"};//note: *names[] <=> names[][], the difference is that you don't have to put a limit
  qsort(names, 4, sizeof(char*), compare_names);
  puts("\nThese are the names in order:");
  for (i = 0; i < 4; i++) {
    printf("%s\n", names[i]);
  }
  return 0;

}

