from playsound import playsound
import threading
import time
selfie= '''

##########################O###OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#####O#######################OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#####O#########################OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
###################OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#############OOO#OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
######O#####################OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#######O################OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#######O################OOOO#OOOOOOOOO#OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#######O##################OOOOOOOOOOOOo**°*ooOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#######OO################OOOOO#OOo***°°°°.°°°*oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#######OO###############OOO#OOOo*°°*°°°...°°°°°°°*OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
########OO##########O###OOOOOo***°*°°......°.°°.°°°oOOOOOOOOOOOOOOOOOOOOOOOOOOOO
########OO##########O###OOOO*°*°.°°........ ...°°°°°°OOOOOOOOOOOOOOOOOOOOOOOOOOO
#########O########OOOOOOOOO*°.°.................°°°°°°OOOOOOOOOOOOOOOOOOOOOOOOOO
#########OO#########OOOOOOo°.°°......°°....°.......°*°*OOOOOOOOOOOOOOOOOOOOOOOOO
#########OO#########OOOOOO*..°....*********°°°°... ..°°oOOOOOOOOOOOOOOOOOOOOOOOO
#########OOO#OOOOOOOOOOOOO*.°...°oooooooOOOoooo*°..  ..°oOOOOOOOOOOOOOOOOOOOOOOO
OOOOOOOOOOOO###OOOOOOOOOOo°°°..°oooooOOOOOOOOoooo°.     °OOOOOOOOOOOOOOOOOOOOOOO
OOOOOOOOOOOO##########OOOo°°..°*oooooOOOOOOOOOOOOo*.    .oOOOOOOOOOOOOOOOOOOOOOO
OOOOOOOOOOOOO########OOOOOo°..*OOooooOOOOOOOOOOOOOOo.    *OOOOOOOOOOOOOOOOOOOOOO
OOOOOOOOOOOOO#####OO#OOOOOo°°°oOOooooOOOOOOOOOOOOOOo*.   .OOOOOOOOOOOOOOOOOOOOOO
OOOOOOOOOOOOOO###OOOOOOOOo°*°*oOOooooOOOOOOOOOOOOOoo**.  .oOOOOOOOOoOOOOOOOOOOOO
OOOOOOOOOOOOOOOOOOOOOOOOO*°°°*oOOoooOOOOOOOOOOOOOOoo**.  .oOOOOOOOOoOOOOOOOOOOO#
OOOOOOOOOOOOOOOOOOOOOOOOO*°°°°oOOOOOOOOOOOOOOOOOOOo**°.  .OOOOOOOOooOOOOoooooooO
OOOOOOOOOOOOOOOOOOOOOOOOO*.°°°O#o*ooOOOOOOOOOOOOOOo**°.. .OOOOOOOOoOOOOOOOOOOOoO
OOOOOOOOOOOOOOOOOOOOOOOO#o°°°*Oo°°°.°°ooOOOOOOooo****°.. .OOOOOOOOoOOOOOOOOOOOoo
OOOOOOOOOOOOOOOOOOOOOOOOOO°..*#o***°°.°*oooo*°.....°*°.. *OOOOOOOOOOOOOOOOOOOooo
OOOOOOOOOOOOOOOOOOOOOOOOOO*.**oo*******°*o****°°°°°°°°...OOOOOOOOOOOOOOOOOOOOOOo
#######O#OOOOOOOOOOOOOOOO#ooo°oo**°******°°ooo*°°°°°°.°.*OOOOOOOOOOOOOOOOOOOOOOO
OOOOOOOOOOOOOOOOOOOOOOOOOOo*°*oo**********°****°°°.°*.°°oOOOOOOOOoOOOOOOOOOOOooO
OOOOOOOOOOOOOOOOOOOOOOOOO°oooOoooo******o#o°°**°°°°°*° °OOOOOOOOooOOOOOOOOoooooO
OOOOOOOOOOOOOOOOOOOOOOOOooOooO*Oooooooo*O#O°****°°***..*oOOOOOOOOOOOOOOOOOOOooOO
OOOOOOOOOOOOOOOOOOOOOOOOoOoooOooOOOOoOoo###**ooooOo*°°°°°OOOOOOOOOOOOOOOOOOOOO##
OOOOOOOOOOOOOOOOOOOOOOOOoO*ooOOooOOOOooO###O°oooOO****°°°oOooOoooOOOOOOOoOOooOO#
OOOOOOOOOOOOOOOOOOOOOOOOOoOooOOOOOOOOoOOOOOooooOOo***°°**oOOOOoooooooooooooooOOO
OOOOOOOOOOOOOOOOOOOOOOOOooOo*OOOOOOOOOo°oo*°ooOOooo**°°****oo***********o*****°*
**oo************o*******ooOo*OOooOOOOO****°°*OOOoo***.°**°°**°°°°°°°°°°°**°°°°°°
**oo************o*******oOOo*ooooOOOOOo**°°°oOOooo**°°*o*°***°*****°°°°°**°°°°°°
**oo************o********oo**ooooooooo***°°°*Oooo**°.°***°°*******°°°°°°**°°°°°°
***o************o************oooOOo***oooo**°*****°°.*oo*°°************°**°***°°
ooooooooooooooooOoooooooooooo*oooo*°°*****°°°°°***°.*ooOoooOOooooooooooooOoooooo
##########################O#O***oo*ooOOOOo*°°.°**°°.OOOOOOOOOOOOOOOOOOOOOOOOOOOO
OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*°*oo*oooooooo*°*°**°.°OOOOOOOOOOOOOOOOOOOOOOOOOOOO
OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*°°***o**°°°°°°**°°°..*OOOOOOOOOOOOOOOOOOOOOOOOoooo
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO°°°°**oo*°°°°°**°....oOOOOOOOOOOOOOOOOOOOOOOOOoooo
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo°.°°°ooooo**°°°.....OOOOOOOOOOOOOOOOOOOOOOOoooooo
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo*°.°°°*****°°°.....°OOOOOOOOOOOOOOOOOOOOOOOoooooo
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo**°..°°°°°°°.. ....*OOOOOOOOOOOOOOOOOoooooooooooo
OOOOOOOOOOOOOOOOOOOoOOOOOOOOOOo***°..............°*OOOOOOOOOOOOOOOOOOoOOoooooooo
OOOOOOOOOOOOOOOOOOOoOOOOOOOOOOo***°°°...........°°oOOOOOOOOOOOOOOOOOOOoooooooooo
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOoo****°°°........°°°oOOOOOOOOOoOOOOOOOoooooooooooo
OOOOOOOOOOOOOOOOOOOOoOOOOOOOOOOo****°°°°°°...°°°°°oOOOOOOOOooOOOOOOOoooOoooooooo
OOOOOOOOOOOOOOOOOOOOoOOOOOOOOOOoo***°°°°°°°°°°°°°*oOOOOOOOOooOOOOOooOOoooooooooo
OOOOOOOOOOOOOOOOOOOOOoOOOOOOO#Ooo*****°°°°°°°°°°°*OOoOOOOOooOOOOOOOooOoooooooooo
OOOOOOOOOOOOOOOOOOOOOoOOOOOoOOooo******°°°°°°°*°°**OOOooOOooOOOoOOOooOoooooooooo
OOOOOOOOOOOOOOOOOOOOOOOoOoo*OOooo*********°*********oOOOOoooOOOOOooooooooooooooo
OOOOOOOOOOOOOOOOOOOoooooo***OOoo*******************°**ooOOOOOOOOOOOOOOOOOOOoOOoo
OOOOOOOOOOOOOOOOOooooooo****oOooo****************o*°°*****oooOOOOOOOOOOOOOOOOOOO
OOOOOOOOOO#####OOOOOOOOooo**oOooo***o**********ooo°°*****°°°°*ooOOOOOOOOOOOOOOOO
OOOOOOOOOOOo**ooo*o*oo*oooo*°oOooo*oooooooo***ooOo°*oooooo****ooOOOOOOOOOOOOOOOO
OOOOOOOOOo*°°°°°°°°°°°°°°**°°°*OOoooooooooooooOo*°°********o*****°°*ooOOOOOOOOOO
######Ooo******°°°****°°°**°°°°*oOooooooooOoOOo°°°°°°°°°°°°°°°°°°°°°°°****OOOOOO
####Ooo**********************°°.°oOOOOOOOOOOo*.°°°**********°°°°°°°********OOOOO
####o**°°°°°°°°°***************°..°ooOOOOo*°.°°**********oooo*********ooo*°oOOOO
###Oo°°°°°°°°°°°°°°°°°°°°°°°°°**°°...°°°...°°*°**********o*oo************°*ooOOO
###oo*°**°°°°°°°°°°°°°°°°°°°°°°°***°°°°°°°°°°°°°°°°°°°°°°*****°°°°°°°°°°°°***oOO
##ooo**********°°*****°°°°°°°°°°°°°°°°°°°°.°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°****°OO
#o°°**°***************************°°°°°°°°°°°°°°°°°°°°°°*°°°°°*****°°°°°°**°°°oO
#*°°°°°*°°°°°*************************************************o********°°°°°°°*O
O*°°°°.°°°°°°°°°°°°°°°°°°°************°°****************ooooo**********°*°.°°°*o
o***°..°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°****************************°°°...°**o
*****°.°°*°°°°°**°°**°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°....°°**°
°°***°°°.*******o***********°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°....°°°°°°
°°°°*°°*.*********************************************************°°°°...°°°°.°°
°°°°°°°*°°°°°°*****************************************o*************°.°°°°....°
*°°°°.°°°°°°°°°°°°°°°°°°°°°°°°°°°************************************°°°°°.....°
****°..°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°.....°°
****°°...°°°°°********°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°..°°°°....°°°°
°°°*°°°°.°*****oo********************°°°°°°°°°°°°°°°°°°°°°°°°°°°°°........°°°°°°
°°.°°°°°..************************************°***************°°°°........°°°°..




'''