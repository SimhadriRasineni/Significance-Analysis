#include <stdio.h>
#include <math.h>
int main()
{
	float p1,p2,n1,n2,ipa1,ipa2,P,Q,Zcal,Ztab=1.645;
	printf("Assumption p1>p2 (H0)\n");
	printf("Alternative Hypothesis (H1) is p1<p2");
printf("\n***before overhauled enter the data***\n");
printf("enter imperfect articles\n");
scanf("\n%f",&ipa1);
printf("\nimperfect articles is %f",ipa1);
printf("\nenter toal articles\n ");
scanf("%f",&n1);
printf("\nyou entered articles n1= %f",n1);
p1=ipa1/n1;
printf("\nsample proportion p1=%f",p1);
printf("\n\n***enter the data after overhauled the mechine***");
printf("\nenter imperfect articles\n");
scanf("%f",&ipa2);
printf("enter the total articles\n");
scanf("%f",&n2);
printf("sample proportion (p2) is\n");
p2=ipa2/n2;
printf("\nsample proportion p2=%f",p2);
printf("\nthe population proportion (P) is\n");
P=(n1*p1+n2*p2)/(n1+n2);
printf("P=%f",P);
printf("\nthe value of Q is 1-p\n");
Q=1-P;
printf("\nQ=%f",Q);
printf("\nZ stastitic is Zcal\n");
Zcal=p1-p2/sqrt(P*Q*(1/n1+1/n2));
printf("\nZcal value is%f",Zcal);//
Zcal=(Zcal<0)? Zcal*-1:Zcal;
printf("\nNow Zcal becomes %f",Zcal);
if(Ztab>Zcal)
{
	printf("\nNull hypothesis is accepted(H0) and alternative hypothesis is rejected(H1)\n");
}
else
{
	printf("Alternative Hypothesis is accepted(H1) and NULL hypothesis is rejected(H0)\n");
}
printf("\n\n");
float  s=Ztab-Zcal;
printf("the difference between Ztab amd Zcal=%f",s);
return 0;
}

