
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <utility>
#define DEBUG false
using namespace std;

/*
Complexidade O(n * d), sendo n o numero de tarefas e d o maior deadline de uma tarefa.
*/
int main(){

    // Cria uma fila de prioridade vazia para armazenar as "tarefas"
    priority_queue<pair<int, int> > tasks;
    int max = -1; // deadline sera semore um numero positivo portanto maior que -1
    string deadline;
    cin >> deadline; // Le a primeira string
    while(deadline != "end"){ // Enquanto a tring entrada não for "end" o programa continua lendo tarefas
        int dl;
        try{   // Verifica se a sting entrada pode ser tranformada num inteiro

            // caso consiga, a tranforma e armazena em dl
            dl = stoi(deadline);
            if(dl > max) max = dl;
        } catch (invalid_argument e){

            // caso não consiga, ignora essa string e espera outra para ser o deadline
            cout << "Argumento Inválido (" << e.what() << "), a string \"" << deadline << "\" foi ignorada."  <<endl;
            cin >> deadline;
            continue;
        } 
        string profit;
        try{ // Verifica se a sting entrada pode ser tranformada num inteiro

            // caso consiga, a tranforma e adiciona o par com profit e dl em tasks 
            cin >> profit;
            tasks.push(make_pair(stoi(profit), dl));
            if(DEBUG) cout << "Tarefa adicionada com deadline: " << deadline << " e lucro: " << profit << "." << endl;
        } catch (invalid_argument e){

            //Caso não consiga, ignora a tarefa atual e começa o procedimento para adicionar outra
            cout << "Argumento Inválido (" << e.what() << ") a inserção da tarefa foi cancelada."  <<endl;
        } 
        cin >> deadline;
    }


    vector<bool> freeDeadlines(max + 1, true);  //cria um vetor com espaço ate o maior deadline iniciado tudo em true dizendo que o periodo esta liberado.
    int sum = 0; // inicia soma com 0
    while(!tasks.empty()){
        const pair<int, int> i = tasks.top(); //verifica cada elemento da pq
        tasks.pop();
        for(int j = i.second; j > 0; j--){  //para cada um deles verifica se tem lugar disponivel(no deadline ou antes) para a tarefa
            if(freeDeadlines[j]){

                // se encontra ela toma esse lugar, não o deixando mais livre e incrementa a soma
                freeDeadlines[j] = false;
                sum += i.first;
                break;
            }
        }
    }

    //apresenta a resposta
    cout << sum << endl;
    return 0;
}
