#Hostfile dla Open MPI

#Master node, parametr 'slots=2' ustawiony, dlatego, ze node jest dwu-procesorowy
localhost slots=2

#Definiujemy slave'y, oraz dozwolona liczbe procesorów do uzycia
cichy@192.168.1.118 slots=2 max_slots=4
slawek@192.168.1.119 slots=8 max_slots=8
