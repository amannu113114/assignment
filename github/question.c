# include <stdio.h>
int main (void)
{
int hardness, tensile ;
float carbon ;
printf ("hardeness, carbon, tensile\n");
printf ("GIVE THE VALUE OF ABOVE.\n");
scanf ("%d",&hardness,&carbon,&tensile);
scanf ("%d",&carbon);
scanf ("%d",&tensile);


if (hardness > 50 && carbon <0.7 && tensile > 5000)
{
printf ("grade 10\n");
}
else if (hardness > 50 || carbon <0.7 || tensile > 5000)
{
	if (hardness > 50 && carbon <0.7){
	printf ("grade 9\n");
	}
	else if (carbon <0.7 && tensile > 5000){
	printf ("grade 8\n");
	}
	else if (hardness > 50 && tensile > 5000) {
	printf ("grade 7\n");
	}
	else{
	printf ("grade 6\n");
	}
}
else{
printf ("grade 5\n");
}

}
