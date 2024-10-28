# Variáveis
CXX = g++
CXXFLAGS = -c
OBJ = main.o avaliacao.o codigo.o data.o dinheiro.o duracao.o horario.o nome.o senha.o
TARGET = output

# Regra principal para gerar o executável
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Regras para compilar os arquivos .cpp em .o
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

avaliacao.o: avaliacao_v0.cpp avaliacao_v0.hpp
	$(CXX) $(CXXFLAGS) avaliacao_v0.cpp

codigo.o: codigo_v0.cpp codigo_v0.hpp
	$(CXX) $(CXXFLAGS) codigo_v0.cpp

data.o: data_v0.cpp data_v0.hpp
	$(CXX) $(CXXFLAGS) data_v0.cpp

dinheiro.o: dinheiro_v0.cpp dinheiro_v0.hpp
	$(CXX) $(CXXFLAGS) dinheiro_v0.cpp

duracao.o: duracao_v0.cpp duracao_v0.hpp
	$(CXX) $(CXXFLAGS) duracao_v0.cpp

horario.o: horario_v0.cpp horario_v0.hpp
	$(CXX) $(CXXFLAGS) horario_v0.cpp

nome.o: nome_v0.cpp nome_v0.hpp
	$(CXX) $(CXXFLAGS) nome_v0.cpp

senha.o: senha_v0.cpp senha_v0.hpp
	$(CXX) $(CXXFLAGS) senha_v0.cpp

# Regra para limpar os arquivos gerados
clean:
	rm -f *.o $(TARGET)
