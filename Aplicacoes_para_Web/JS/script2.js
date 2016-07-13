var cont,i=0,res=0;
var sum=0;
for(cont=3;cont<=10;cont+2){
	res = 0;
	for(i=1;i<=cont;i++){
		if(cont%i==0){
			res++;
		}
	}
	if(res==2){
		sum = cont+sum;
		document.write(cont + "<br>");
	}
}

alert(sum);

