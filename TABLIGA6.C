#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int D20 ();

int main (void)
{
int i, j, k, l, m, nps, ncs, nrs, nlsr, cont, aux, aux2, raux;
char p[9][20];
char a[20][60];
char a2[20][60];
char a3[20][60];
char a4[20][60];
char a5[20][60];
char a6[20][60];
char a7[20][60];
char a8[20][60];
char a9[20][60];
char a10[20][60];
char a11[20][60];
char a12[20][60];
char a13[20][60];
char a14[20][60];
char a15[20][60];
char a16[20][60];
char a17[20][60];
char a18[20][60];
char a19[20][60];
int rd20[9];
static int r[20], r2[20], r3[20], r4[20], r5[20], r6[20], r7[20], r8[20], r9[20], r10[20], r11[20], r12[20], r13[20], r14[20], r15[20], r16[20], r17[20], r18[20], r19[20];
clrscr();
printf ("\nEntre com o n£mero de jogadores: ");
scanf ("%d", &nps);
for (cont=0; cont<nps; cont++){
  printf ("\nEntre com o nome do jogador: ");
  scanf ("%s", &p[cont]);
  }
randomize();
for (cont=0; cont<nps; cont++){
  printf ("\nO jogador ");
  printf ("%s", p[cont]);
  printf (" tirou ");
  rd20[cont] = D20();
  printf ("%d", rd20[cont]);
  }
printf ("\nDigite o n£mero de personagens: ");
scanf ("%d", &ncs);
nrs = (ncs - 1);
nlsr = (ncs/2);
for (cont=0; cont<ncs; cont++){
  printf ("\nEntre com o nome do jogador e do personagem (sem espa‡os): ");
  scanf ("%s", &a[cont]);
  }
for (cont=0; cont<nrs; cont++){
  printf ("\nRodada ");
  printf ("%d", (cont+1));
  i = 0;
  j = 0;
  k = 1;
  if (cont==0){
    while (i<nlsr){
      printf ("\n%s", a[j]);
      printf (" x ");
      printf ("%s", a[k]);
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r[j]=1;
	}else{
	r[k]=1;
	}
      i++;
      j=(j+2);
      k=(k+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a[m]);
	printf (" fez ");
	printf ("%d", r[m]);
	printf (" pt(s)");
	}
    }
  if (cont==1){
    aux=(ncs)-1;
    printf ("\n%s", a[aux]);
    strcpy (a2[0],a[aux]);
    r2[0]=r[aux];
    printf (" x ");
    printf ("%s", a[0]);
    strcpy (a2[1],a[0]);
    r2[1]=r[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r2[0]++;
      }else{
      r2[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a[j]);
      strcpy (a2[k],a[j]);
      r2[k]=r[j];
      printf (" x ");
      printf ("%s", a[k]);
      strcpy (a2[l],a[k]);
      r2[l]=r[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r2[k]++;
	}else{
	r2[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a2[m]);
	printf (" fez ");
	printf ("%d", r2[m]);
	printf (" pt(s)");
	}
    }
  if (cont==2){
    printf("\n%s", a2[3]);
    strcpy (a3[0],a2[3]);
    r3[0]=r2[3];
    printf (" x ");
    printf ("%s", a2[1]);
    strcpy (a3[1], a2[1]);
    r3[1]=r2[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r3[0]++;
      }else{
      r3[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a2[j]);
      strcpy (a3[l],a2[j]);
      r3[l]=r2[j];
      printf (" x ");
      printf ("%s", a2[l]);
      strcpy (a3[k], a2[l]);
      r3[k]=r2[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r3[l]++;
	}else{
	r3[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a2[aux]);
    strcpy (a3[aux], a2[aux]);
    r3[aux]=r2[aux];
    printf (" x ");
    printf ("%s", a2[0]);
    strcpy (a3[aux2], a2[0]);
    r3[aux2]=r2[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r3[aux]++;
      }else{
      r3[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a3[m]);
	printf (" fez ");
	printf ("%d", r3[m]);
	printf (" pt(s)");
	}
    }
 if (cont==3){
    aux=(ncs)-1;
    printf ("\n%s", a3[aux]);
    strcpy (a4[0],a3[aux]);
    r4[0]=r3[aux];
    printf (" x ");
    printf ("%s", a3[0]);
    strcpy (a4[1],a3[0]);
    r4[1]=r3[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r4[0]++;
      }else{
      r4[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a3[j]);
      strcpy (a4[k],a3[j]);
      r4[k]=r3[j];
      printf (" x ");
      printf ("%s", a3[k]);
      strcpy (a4[l],a3[k]);
      r4[l]=r3[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r4[k]++;
	}else{
	r4[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a4[m]);
	printf (" fez ");
	printf ("%d", r4[m]);
	printf (" pt(s)");
	}
    }
  if (cont==4){
    printf("\n%s", a4[3]);
    strcpy (a5[0],a4[3]);
    r5[0]=r4[3];
    printf (" x ");
    printf ("%s", a4[1]);
    strcpy (a5[1], a4[1]);
    r5[1]=r4[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r5[0]++;
      }else{
      r5[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a4[j]);
      strcpy (a5[l],a4[j]);
      r5[l]=r4[j];
      printf (" x ");
      printf ("%s", a4[l]);
      strcpy (a5[k], a4[l]);
      r5[k]=r4[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r5[l]++;
	}else{
	r5[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a4[aux]);
    strcpy (a5[aux], a4[aux]);
    r5[aux]=r4[aux];
    printf (" x ");
    printf ("%s", a4[0]);
    strcpy (a5[aux2], a4[0]);
    r5[aux2]=r4[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r5[aux]++;
      }else{
      r5[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a5[m]);
	printf (" fez ");
	printf ("%d", r5[m]);
	printf (" pt(s)");
	}
    }
 if (cont==5){
    aux=(ncs)-1;
    printf ("\n%s", a5[aux]);
    strcpy (a6[0],a5[aux]);
    r6[0]=r5[aux];
    printf (" x ");
    printf ("%s", a5[0]);
    strcpy (a6[1],a5[0]);
    r6[1]=r5[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r6[0]++;
      }else{
      r6[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a5[j]);
      strcpy (a6[k],a5[j]);
      r6[k]=r5[j];
      printf (" x ");
      printf ("%s", a5[k]);
      strcpy (a6[l],a5[k]);
      r6[l]=r5[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r6[k]++;
	}else{
	r6[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a6[m]);
	printf (" fez ");
	printf ("%d", r6[m]);
	printf (" pt(s)");
	}
    }
  if (cont==6){
    printf("\n%s", a6[3]);
    strcpy (a7[0],a6[3]);
    r7[0]=r6[3];
    printf (" x ");
    printf ("%s", a6[1]);
    strcpy (a7[1], a6[1]);
    r7[1]=r6[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r7[0]++;
      }else{
      r7[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a6[j]);
      strcpy (a7[l],a6[j]);
      r7[l]=r6[j];
      printf (" x ");
      printf ("%s", a6[l]);
      strcpy (a7[k], a6[l]);
      r7[k]=r6[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r7[l]++;
	}else{
	r7[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a6[aux]);
    strcpy (a7[aux], a6[aux]);
    r7[aux]=r6[aux];
    printf (" x ");
    printf ("%s", a6[0]);
    strcpy (a7[aux2], a6[0]);
    r7[aux2]=r6[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r7[aux]++;
      }else{
      r7[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a7[m]);
	printf (" fez ");
	printf ("%d", r7[m]);
	printf (" pt(s)");
	}
    }
 if (cont==7){
    aux=(ncs)-1;
    printf ("\n%s", a7[aux]);
    strcpy (a8[0],a7[aux]);
    r8[0]=r7[aux];
    printf (" x ");
    printf ("%s", a7[0]);
    strcpy (a8[1],a7[0]);
    r8[1]=r7[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r8[0]++;
      }else{
      r8[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a7[j]);
      strcpy (a8[k],a7[j]);
      r8[k]=r7[j];
      printf (" x ");
      printf ("%s", a7[k]);
      strcpy (a8[l],a7[k]);
      r8[l]=r7[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r8[k]++;
	}else{
	r8[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a8[m]);
	printf (" fez ");
	printf ("%d", r8[m]);
	printf (" pt(s)");
	}
    }
  if (cont==8){
    printf("\n%s", a8[3]);
    strcpy (a9[0],a8[3]);
    r9[0]=r8[3];
    printf (" x ");
    printf ("%s", a8[1]);
    strcpy (a9[1], a8[1]);
    r9[1]=r8[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r9[0]++;
      }else{
      r9[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a8[j]);
      strcpy (a9[l],a8[j]);
      r9[l]=r8[j];
      printf (" x ");
      printf ("%s", a8[l]);
      strcpy (a9[k], a8[l]);
      r9[k]=r8[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r9[l]++;
	}else{
	r9[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a8[aux]);
    strcpy (a9[aux], a8[aux]);
    r9[aux]=r8[aux];
    printf (" x ");
    printf ("%s", a8[0]);
    strcpy (a9[aux2], a8[0]);
    r9[aux2]=r8[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r9[aux]++;
      }else{
      r9[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a9[m]);
	printf (" fez ");
	printf ("%d", r9[m]);
	printf (" pt(s)");
	}
    }
 if (cont==9){
    aux=(ncs)-1;
    printf ("\n%s", a9[aux]);
    strcpy (a10[0],a9[aux]);
    r10[0]=r9[aux];
    printf (" x ");
    printf ("%s", a9[0]);
    strcpy (a10[1],a9[0]);
    r10[1]=r9[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r10[0]++;
      }else{
      r10[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a9[j]);
      strcpy (a10[k],a9[j]);
      r10[k]=r9[j];
      printf (" x ");
      printf ("%s", a9[k]);
      strcpy (a10[l],a9[k]);
      r10[l]=r9[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r10[k]++;
	}else{
	r10[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a10[m]);
	printf (" fez ");
	printf ("%d", r10[m]);
	printf (" pt(s)");
	}
    }
  if (cont==10){
    printf("\n%s", a10[3]);
    strcpy (a11[0],a10[3]);
    r11[0]=r10[3];
    printf (" x ");
    printf ("%s", a10[1]);
    strcpy (a11[1], a10[1]);
    r11[1]=r10[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r11[0]++;
      }else{
      r11[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a10[j]);
      strcpy (a11[l],a10[j]);
      r11[l]=r10[j];
      printf (" x ");
      printf ("%s", a10[l]);
      strcpy (a11[k], a10[l]);
      r11[k]=r10[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r11[l]++;
	}else{
	r11[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a10[aux]);
    strcpy (a11[aux], a10[aux]);
    r11[aux]=r10[aux];
    printf (" x ");
    printf ("%s", a10[0]);
    strcpy (a11[aux2], a10[0]);
    r11[aux2]=r10[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r11[aux]++;
      }else{
      r11[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a11[m]);
	printf (" fez ");
	printf ("%d", r11[m]);
	printf (" pt(s)");
	}
    }
 if (cont==11){
    aux=(ncs)-1;
    printf ("\n%s", a11[aux]);
    strcpy (a12[0],a11[aux]);
    r12[0]=r11[aux];
    printf (" x ");
    printf ("%s", a11[0]);
    strcpy (a12[1],a11[0]);
    r12[1]=r11[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r12[0]++;
      }else{
      r12[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a11[j]);
      strcpy (a12[k],a11[j]);
      r12[k]=r11[j];
      printf (" x ");
      printf ("%s", a11[k]);
      strcpy (a12[l],a11[k]);
      r12[l]=r11[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r12[k]++;
	}else{
	r12[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a12[m]);
	printf (" fez ");
	printf ("%d", r12[m]);
	printf (" pt(s)");
	}
    }
  if (cont==12){
    printf("\n%s", a12[3]);
    strcpy (a13[0],a12[3]);
    r13[0]=r12[3];
    printf (" x ");
    printf ("%s", a12[1]);
    strcpy (a13[1], a12[1]);
    r13[1]=r12[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r13[0]++;
      }else{
      r13[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a12[j]);
      strcpy (a13[l],a12[j]);
      r13[l]=r12[j];
      printf (" x ");
      printf ("%s", a12[l]);
      strcpy (a13[k], a12[l]);
      r13[k]=r12[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r13[l]++;
	}else{
	r13[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a12[aux]);
    strcpy (a13[aux], a12[aux]);
    r13[aux]=r12[aux];
    printf (" x ");
    printf ("%s", a12[0]);
    strcpy (a13[aux2], a12[0]);
    r13[aux2]=r12[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r13[aux]++;
      }else{
      r13[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a13[m]);
	printf (" fez ");
	printf ("%d", r13[m]);
	printf (" pt(s)");
	}
    }
 if (cont==13){
    aux=(ncs)-1;
    printf ("\n%s", a13[aux]);
    strcpy (a14[0],a13[aux]);
    r14[0]=r13[aux];
    printf (" x ");
    printf ("%s", a13[0]);
    strcpy (a14[1],a13[0]);
    r14[1]=r13[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r14[0]++;
      }else{
      r14[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a13[j]);
      strcpy (a14[k],a13[j]);
      r14[k]=r13[j];
      printf (" x ");
      printf ("%s", a13[k]);
      strcpy (a14[l],a13[k]);
      r14[l]=r13[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r14[k]++;
	}else{
	r14[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a14[m]);
	printf (" fez ");
	printf ("%d", r14[m]);
	printf (" pt(s)");
	}
    }
  if (cont==14){
    printf("\n%s", a14[3]);
    strcpy (a15[0],a14[3]);
    r15[0]=r14[3];
    printf (" x ");
    printf ("%s", a14[1]);
    strcpy (a15[1], a14[1]);
    r15[1]=r14[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r15[0]++;
      }else{
      r15[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a14[j]);
      strcpy (a15[l],a14[j]);
      r15[l]=r14[j];
      printf (" x ");
      printf ("%s", a14[l]);
      strcpy (a15[k], a14[l]);
      r15[k]=r14[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r15[l]++;
	}else{
	r15[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a14[aux]);
    strcpy (a15[aux], a14[aux]);
    r15[aux]=r14[aux];
    printf (" x ");
    printf ("%s", a14[0]);
    strcpy (a15[aux2], a14[0]);
    r15[aux2]=r14[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r15[aux]++;
      }else{
      r15[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a15[m]);
	printf (" fez ");
	printf ("%d", r15[m]);
	printf (" pt(s)");
	}
    }
 if (cont==15){
    aux=(ncs)-1;
    printf ("\n%s", a15[aux]);
    strcpy (a16[0],a15[aux]);
    r16[0]=r15[aux];
    printf (" x ");
    printf ("%s", a15[0]);
    strcpy (a16[1],a15[0]);
    r16[1]=r15[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r16[0]++;
      }else{
      r16[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a15[j]);
      strcpy (a16[k],a15[j]);
      r16[k]=r15[j];
      printf (" x ");
      printf ("%s", a15[k]);
      strcpy (a16[l],a15[k]);
      r16[l]=r15[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r16[k]++;
	}else{
	r16[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a16[m]);
	printf (" fez ");
	printf ("%d", r16[m]);
	printf (" pt(s)");
	}
    }
  if (cont==16){
    printf("\n%s", a16[3]);
    strcpy (a17[0],a16[3]);
    r17[0]=r16[3];
    printf (" x ");
    printf ("%s", a16[1]);
    strcpy (a17[1], a16[1]);
    r17[1]=r16[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r17[0]++;
      }else{
      r17[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a16[j]);
      strcpy (a17[l],a16[j]);
      r17[l]=r16[j];
      printf (" x ");
      printf ("%s", a16[l]);
      strcpy (a17[k], a16[l]);
      r17[k]=r16[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r17[l]++;
	}else{
	r17[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a16[aux]);
    strcpy (a17[aux], a16[aux]);
    r17[aux]=r16[aux];
    printf (" x ");
    printf ("%s", a16[0]);
    strcpy (a17[aux2], a16[0]);
    r17[aux2]=r16[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r17[aux]++;
      }else{
      r17[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a17[m]);
	printf (" fez ");
	printf ("%d", r17[m]);
	printf (" pt(s)");
	}
    }
 if (cont==17){
    aux=(ncs)-1;
    printf ("\n%s", a17[aux]);
    strcpy (a18[0],a17[aux]);
    r18[0]=r17[aux];
    printf (" x ");
    printf ("%s", a17[0]);
    strcpy (a18[1],a17[0]);
    r18[1]=r17[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r18[0]++;
      }else{
      r18[1]++;
      }
    j=1;
    k=2;
    l=3;
    while (i<(nlsr-1)){
      printf ("\n%s", a17[j]);
      strcpy (a18[k],a17[j]);
      r18[k]=r17[j];
      printf (" x ");
      printf ("%s", a17[k]);
      strcpy (a18[l],a17[k]);
      r18[l]=r17[k];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r18[k]++;
	}else{
	r18[l]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
      printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a18[m]);
	printf (" fez ");
	printf ("%d", r18[m]);
	printf (" pt(s)");
	}
    }
  if (cont==18){
    printf("\n%s", a18[3]);
    strcpy (a19[0],a18[3]);
    r19[0]=r18[3];
    printf (" x ");
    printf ("%s", a18[1]);
    strcpy (a19[1], a18[1]);
    r19[1]=r18[1];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r19[0]++;
      }else{
      r19[1]++;
      }
    j=5;
    k=3;
    l=2;
    while (i<(nlsr-2)){
      printf ("\n%s", a18[j]);
      strcpy (a19[l],a18[j]);
      r19[l]=r18[j];
      printf (" x ");
      printf ("%s", a18[l]);
      strcpy (a19[k], a18[l]);
      r19[k]=r18[l];
      printf ("\nO vencedor ‚ (digite 1 ou 2): ");
      scanf ("%d", &raux);
      if (raux==1){
	r19[l]++;
	}else{
	r19[k]++;
	}
      i++;
      j=(j+2);
      k=(k+2);
      l=(l+2);
      }
    aux = (ncs)-2;
    aux2 = (ncs)-1;
    printf ("\n%s", a18[aux]);
    strcpy (a17[aux], a18[aux]);
    r19[aux]=r18[aux];
    printf (" x ");
    printf ("%s", a18[0]);
    strcpy (a17[aux2], a18[0]);
    r19[aux2]=r18[0];
    printf ("\nO vencedor ‚ (digite 1 ou 2): ");
    scanf ("%d", &raux);
    if (raux==1){
      r19[aux]++;
      }else{
      r19[aux2]++;
      }
    printf ("\nPontua‡Æo atual:");
      for (m=0; m<ncs; m++){
	printf ("\n%s", a19[m]);
	printf (" fez ");
	printf ("%d", r19[m]);
	printf (" pt(s)");
	}
    }

}
return 0;
}

int D20 ()
{
int x = random (20);
return (x)+1;
}
