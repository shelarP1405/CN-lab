#include<stdio.h>
#include<string.h>
#define n strlen(gen_poly)
char dataword[28];
char checkvalue[28];
char gen_poly[28];
int d_length,i,j;
void xoring(){
for(j=1;j<n;j++){
checkvalue[j] = ((checkvalue[j] == gen_poly[j])?'0':'1');
}
}
void crc(){
for(i=0;i<n;i++){
checkvalue[i] = dataword[i];
}
do{
if(checkvalue[0]=='1'){
xoring();
}
for(j=0;j<n-1;j++){
checkvalue[j] = checkvalue[j+1];
}
checkvalue[j] = dataword[j+1];
}while(i<=d_length+n-1);
}

int main()
{
printf("\nEnter dataword to be transmitted : ");
scanf("%s",dataword);
printf("\nEnter generating polynomial : ");
scanf("%s",gen_poly);
d_length = strlen(dataword);
for(i=d_length;i<d_length+n-1;i++){
dataword[i] = '0';
}
printf("\ndataword added with zeroes : %s",dataword);
crc();
for(i=d_length;i<d_length+n-1;i++){
dataword[i] = checkvalue[i-d_length];
}
// receiver
printf("\n Enter the received dataword:");
scanf("%s",dataword);
printf("dataword:%s\n",dataword);

crc();

for(i=0 ;(i<n-1) && (checkvalue[i]!='1'); i++){
if(i<n-1){
printf("Error detected!");
}
else{
printf("No error detected!");
}
}

return 0;
}
