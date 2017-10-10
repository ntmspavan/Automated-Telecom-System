All:te
te:t3_main.o t3_view.o t3_control.o t3_model.o t3_pview.o t3_pmodel.o t3_pcontrol.o t3_cview.o t3_ccontrol.o t3_cmodel.o t3_clview.o t3_clcontrol.o t3_clmodel.o t3_bgview.o t3_bgcontrol.o t3_bgmodel.o
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  t3_main.o t3_view.o t3_control.o t3_model.o t3_pmodel.o t3_pview.o t3_pcontrol.o t3_cview.o t3_ccontrol.o t3_cmodel.o t3_clview.o t3_clcontrol.o t3_clmodel.o t3_bgview.o t3_bgcontrol.o t3_bgmodel.o  -locci -lclntsh -o te
t3_main.o:t3_main.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_main.cpp -locci -lclntsh -o t3_main.o
t3_view.o:t3_view.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_view.cpp -locci -lclntsh -o t3_view.o
t3_control.o:t3_control.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_control.cpp -locci -lclntsh -o t3_control.o
t3_model.o:t3_model.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_model.cpp -locci -lclntsh -o t3_model.o
t3_pview.o:t3_pview.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_pview.cpp -locci -lclntsh -o t3_pview.o
t3_pmodel.o:t3_pmodel.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_pmodel.cpp -locci -lclntsh -o t3_pmodel.o
t3_pcontrol.o:t3_pcontrol.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_pcontrol.cpp -locci -lclntsh -o t3_pcontrol.o
t3_cview.o:t3_cview.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_cview.cpp -locci -lclntsh -o t3_cview.o
t3_ccontrol.o:t3_ccontrol.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_ccontrol.cpp -locci -lclntsh -o t3_ccontrol.o
t3_cmodel.o:t3_cmodel.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_cmodel.cpp -locci -lclntsh -o t3_cmodel.o
t3_clview.o:t3_clview.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_clview.cpp -locci -lclntsh -o t3_clview.o
t3_clcontrol.o:t3_clcontrol.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_clcontrol.cpp -locci -lclntsh -o t3_clcontrol.o
t3_clmodel.o:t3_clmodel.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_clmodel.cpp -locci -lclntsh -o t3_clmodel.o
t3_bgview.o:t3_bgview.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_bgview.cpp -locci -lclntsh -o t3_bgview.o
t3_bgcontrol.o:t3_bgcontrol.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_bgcontrol.cpp -locci -lclntsh -o t3_bgcontrol.o
t3_bgmodel.o:t3_bgmodel.cpp
	g++ -L $(ORACLE_HOME)/lib/ -I $(ORACLE_HOME)/rdbms/public/ -I /home/e833376/  -c t3_bgmodel.cpp -locci -lclntsh -o t3_bgmodel.o
clean:
	rm -rf *.o te

