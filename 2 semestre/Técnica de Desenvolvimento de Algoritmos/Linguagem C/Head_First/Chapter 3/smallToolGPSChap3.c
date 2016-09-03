/*#include <stdio.h>
int main()
{
  float latitude;
  float longitude;
  char info[80];
  int started = 0;
  puts("data=[");
  while (scanf("%f,%f,%79[^\n]", &latitude, &longitude,info) == 3) {/*the scanf() function returns the number of values it was able to read, in this case, 3*/
  /*if (started)//%79[^\n] is a way of saying "Give me every character up to the end of the line"
      printf(",\n");
    else
      started = 1;
      //VALIDATING THE LATITUDE
      if(( latitude < -90.0 ) || ( latitude > 90.0 )){
        fprintf(stderr,"Invalide latitude: %f\n",latitude);//redirects the error to the Standard Error, so the error goes to the display instead of the file
        return 2;
      }
      //VALIDATING THE LONGITUDE
      if(( longitude < -180.0 ) || ( longitude> 180.0 )){
        fprintf(stderr,"Invalide longitude: %f\n",longitude);
        return 2;
      }

    printf("{latitude: %f, longitude: %f, info: '%s'}",latitude,longitude,info);
  }
  puts("\n]");
  return 0;
}*/
