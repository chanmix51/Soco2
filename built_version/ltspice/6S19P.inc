* Generic triode model: 6S19P
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:54 2006
.SUBCKT 6S19P A G K
BGG GG 0 V=V(G,K)+0.10684511
BEP EP 0 V=URAMP(V(A,K))+1e-10
BEG EG 0 V=URAMP(V(G,K))+1e-10
BM1 M1 0 V=(0.32782347*(URAMP(V(EP)-1e-10)+1e-10))**-1.8567866
BM2 M2 0 V=(0.44685593*(URAMP(V(GG)+V(EP)/1.687323)+1e-10))**3.3567866
BP P 0 V=0.0032573245*(URAMP(V(GG)+V(EP)/3.7759889)+1e-10)**1.5
BIK IK 0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0048409525*V(M1)*V(M2)
BIG IG 0 V=0.0016286622*V(EG)**1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK A K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0030048458*V(EP)**1.5)))+1e-10*V(A,K)
BIGK G K I=V(IG)
* CAPS
CGA G A 8p
CGK G K 6.5p
CAK A K 2.5p
.ENDS

