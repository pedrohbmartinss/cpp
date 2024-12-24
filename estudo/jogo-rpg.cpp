#include <iostream>
#include <limits> 
#include <cstdlib>
#include <ctime>
using namespace std;

int numero = 0;
int ataque = 0;
int defesa = 0;

struct personagem{
    int ataque;
    int defesa;
    int hp;
};

int skip = 0;

int lancadado(){

    int dado[6] = {1, 2, 3, 4, 5, 6};
    int indicealeatorio = rand() % 6;
    return dado[indicealeatorio];
}

int batalhamacaco(personagem person, personagem macaco, string principal){
    cout << R"(Jake e Lara acordaram em uma floresta desconhecida, sem memoria de como chegaram ali. Depois de andarem um pouco, 
avistaram uma vila habitada por criaturas amigaveis. Ao chegarem, explicaram sua situaçao aos moradores, que sugeriram 
buscar a ajuda do Xama, o protetor da vila e uma criatura muito antiga e sabia.
Ao encontrarem o Xama em sua cabana, ele os recebeu com desconfianca.
Quem sao voces? Por que veio ate aqui? Questionado, observando-os com olhos criticos. )" <<
principal << R"( tentou argumentar.
Nao sabemos como viemos parar aqui, mas precisamos entender o que aconteceu.
O Xama respondeu de forma rispida:
Minhas respostas nao sao dadas gratuitamente. Se voce quer minha ajuda, deve provar que merece minha confianca.
Para tentar convencer o Xama a lhes dar respostas )" << principal << R"( comeca a explicar toda a situacao. Ele conta como tudo começou no 
acampamento de ferias, ate o instante em que todos da turma foram transportados para aquele mundo estranho apos max tocar na 
pedra brilhosa.)" << endl;
    cout << "\n\n";

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";
    
    cout << "Jogue o dado para saber se o xama foi convencido. (numeros acima de 4 convencem o xama.)\n" << endl;
    cout << "                                             Aperte algum numero para lancar o dado" << endl;
    cin >> skip;

    do{
        numero = lancadado();
        cout << "\nO numero que saiu no dado foi: " << numero << endl;
    if (numero > 4){
        cout << "O xama foi convencido\n" << endl;
    } else {
        cout << "O xama nao foi convencido\n" << endl;
        cout << "                                             Aperte algum numero para lancar o dado novamente" << endl;
        cin >> skip;
    }
    } while (numero <=4);

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;

    cout << "Apos ouvir atentamente a historia de Jake e Lara, o xama finalmente baixou sua guarda. Sua expressao, que antes refletia" << endl;cout << "desconfianca, agora era de preocupacao.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << R"(Voces falam de um misterio muito mais antigo do que imaginam, disse o xama, com voz grave. Ha muito tempo, uma criatura maligna conhecida apenas como Tenebrith , tentou tomar o controle do Mundo dos Sonhos, um dominio que conecta todos os universos. O objetivo dela era simples, porem devastador: destruir o cristal do poder e governar a realidade de todos os seres. Para isso, ele cortou o Cristal do Poder, uma fonte primordial de equilibrio, em varios fragmentos e jogou no grande portal (unico meio de viagem para transitar entre universos) e por alguma sorte ou azar do destino, os fragmentos cairam no universo de voces.)" << endl;
    cout << "\n\n";

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "Para conseguirem voltar ao universo de voces, terao que eliminar Tenebrith e entrarem no Grande portal que o mesmo defende." << endl; 
    cout << "Mas existe mais um problema, para chegarem a sala de Tenebrith, devem entrar em um dos pequenos portais no qual sao pertencentes a cada reino deste universo.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "No reino da floresta, o pequeno portal e protegido pelo Rei Macaco e ele nao deixara com que voces usufruam do portal de forma amigavel.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "Jake e Lara apos entenderem e digerirem toda a historia, sem muitas esperanças, sao presenteados pelo xama, que os presenteou com Star, uma pequena criatura amigavel em formato de estrela que os guiara ate o pequeno portal protegido pelo Rei Macaco.\n" << endl;

    cout << "Star deu para Jake e Lara a esperanca que precisavam, estavam mais certos do que nunca. A missao era clara. Sabiam que enfrentariam desafios ameacadores, e o medo, embora presente, nao era mais um obstaculo. A unica opcao era seguir em frente, juntos.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "E assim, Jake e Lara partiram por dias em uma grande jornada guiados por Star, agora, companheira da dupla.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "Conforme iam se aproximando do objetivo, o ambiente ao redor se tornava cada vez mais misterioso e denso. O som dos passaros e das criaturas que habitavam o lugar logo foi substituido por uma atmosfera de silencio e o vento carregava um aroma peculiar, como se algo mais estivesse aguardando por eles.\n" << endl;

    cout << "Jake e Lara tinham uma certeza: o portal estava perto. Seus passos os conduziram por uma trilha estreita, coberta de raizes, ate que finalmente, avistaram o portal. Um portal pequeno, na base de uma linda arvore com folhas douradas, mas claramente marcado por uma energia intensa.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "Quando se aproximaram, de repente, o som de galhos quebrando e passos pesados ​​os alertaram. Surgiu diante deles uma figura imponente, com o corpo de um macaco colossal, usando partes de armaduras douradas. Seus olhos brilhavam com uma intensidade sobrenatural, e seu olhar, embora aparentemente calmo, exibia uma confianca ameacadora." << endl;

    cout << "O Macaco Rei estava ali, guardando o portal com uma presenca que quase fazia o chao tremer. Um ser dotado de uma forca incomparavel. Sabia que qualquer um que desejasse atravessar seu dominio teria que enfrenta-lo.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "Jake, sempre o mais impulsivo, foi o primeiro a tentar uma abordagem mais consistente. Nos nao viemos aqui para causar problemas, disse ele, tentando manter a calma. Precisamos passar por este portal. O mundo dos sonhos esta em perigo, e temos que reunir os fragmentos do cristal para restaurar o equilibrio." << endl;

    cout << "O Macaco Rei olhou para Jake com um sorriso sarcastico, suas mandibulas se movendo de maneira calculada. Eu sou o guardião deste portal e sudito de Tenebrith, jovem humano, O Macaco Rei inspirou-os por um longo momento. Seu olhar parecia penetrante, quase como se estivesse avaliando a verdadeira intencao dos dois aventureiros. Por fim, ele falou com um tom mais grave: Se quiserem passar, terao que me derrotar!\n" << endl;

    cout << "A batalha contra o Rei Macaco comeca!" << endl;
    cout << "---------------------------------------Regras da batalha-----------------------------------" << endl;
    cout << "Para saber a quantidade de dano/defesa, somamos o numero do dado com o status do personagem\n" << endl;

    do{
    
        cout << "                                             Aperte 1 para atacar" << endl;
        cin >> skip;

        ataque = lancadado();

        cout << principal << " atinge rei macaco causando " << (ataque+person.ataque) << " de dano." << endl;
        cout << "HP Rei Macaco: " << (macaco.hp -= (ataque+person.ataque)) << endl;
        if (macaco.hp <= 0){
            cout << principal << " vence a batalha" << endl;
            break;
        }


        cout << "                                             Aperte 1 para defender" << endl;
        cin >> skip;

        ataque = lancadado();
        defesa = lancadado();

        if (ataque > defesa+person.defesa){
            cout << "Rei Macaco atinge " << principal << " causando " << (ataque+macaco.ataque) << " de dano." << endl;
            cout << "HP " << principal <<": "<< (person.hp -=(ataque+macaco.ataque)) << endl;
            if (person.hp <= 0){
            cout << "Voce foi derretado por Rei Macaco" << endl;
            cout << "GAME OVER" << endl;
            exit(0);
            }
        } else if (defesa >= ataque) {
            cout << "Rei Macaco ataca " << principal << "." << endl;
            cout << principal << " se defende." << endl;
            cout << "HP " << principal <<": " << person.hp << endl;
        } 
  
    } while (person.hp > 0 && macaco.hp > 0);

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    return 0;
} 

int batalhatenebrith(personagem person, personagem tenebrith, string principal){
    char especial;

    cout << "Apos uma batalha intensa, Jake e Lara conseguem derrotar o Rei Macaco, sentindo o peso da vitoria e o alivio de terem superado o maior obstaculos de sua jornada. Com o portal agora acessivel. Mesmo com o cansaco da batalha, uma chama de coragem acende nos coracoes dos dois. Eles trocam um olhar determinado e, sem hesitar, entram no portal.\n" << endl; 

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "Quando a luz do portal finalmente se dissipa, eles se encontram diante de um vasto saguao de um castelo sombrio.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "No centro do saguao, uma figura monstruosa se ergue das sombras. Tenebrith, o ser maligno que ameaca o Mundo dos Sonhos, observa a dupla com um olhar penetrante. Seus olhos brilham com uma intensidade de furia. Ele estava ciente de todos os que ousaram desafiar seu dominio, mas nunca, em toda a sua existencia, alguem havia chegado ate aqui. Nunca ninguem ousou pisar em seu castelo. A afronta de Jake e Lara o enfurece, e uma aura de raiva comeca a envolver o ambiente, deixando o ar pesado e ameacador." << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "Como ousam chegar ate aqui?, sua voz ecoa pelo saguao, carregada de desprezo. Ninguem jamais me desafiou assim! Preparem-se para pagar com suas vidas!" << endl;

    cout << "Antes que Jake e Lara possam reagir, Tenebrith avanca com uma velocidade assustadora para cima deles!\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    cout << "A batalha final Comeca!" << endl;

    cout << "---------------------------------------Regras da batalha-----------------------------------" << endl;
    cout << "Para saber a quantidade de dano/defesa, somamos o numero do dado com o status do personagem\n" << endl;

    cout << "Deseja usar o especial para obter vantagem na luta?" << endl;
    cout << "Digite S para usar e N para nao usar" << endl;
    cin >> especial;

    especial = toupper(especial);

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    cout << "\n";

    if (especial == 'S') {

        if (principal == "Lara"){
            cout << "Ataque tenebrith 3 vezes antes dele." << endl;
            cout << "Lara utiliza um tiro de 3 flechas." << endl;
            ataque = lancadado();

            cout << principal << " atinge Tenebrith causando " << (ataque+person.ataque) << " de dano com a primeira flecha." << endl;
            cout << "HP Tenebrith: " << (tenebrith.hp -= (ataque+person.ataque)) << endl;

            ataque = lancadado();

            cout << principal << " atinge Tenebrith causando " << (ataque+person.ataque) << " de dano com a segunda flecha." << endl;
            cout << "HP Tenebrith: " << (tenebrith.hp -= (ataque+person.ataque)) << endl;

            ataque = lancadado();

            cout << principal << " atinge Tenebrith causando " << (ataque+person.ataque) << " de dano com a terceira flecha." << endl;
            cout << "HP Tenebrith: " << (tenebrith.hp -= (ataque+person.ataque)) << endl;
        } else {
            cout << "Retire 30 porcento da vida de seu oponente" << endl;
            cout << "Jake utiliza seu golpe rapido de ninja e atinge tenebrith varias vezes, causando " << (tenebrith.hp*0.3) << " de dano." << endl;
            cout << "HP Tenebrith: " << (tenebrith.hp -= (tenebrith.hp*0.3)) << endl;
        }
    }


    do{
    
        cout << "                                             Aperte 1 para atacar" << endl;
        cin >> skip;



        ataque = lancadado();

        cout << principal << " atinge Tenebrith causando " << (ataque+person.ataque) << " de dano." << endl;
        cout << "HP Tenebrith: " << (tenebrith.hp -= (ataque+person.ataque)) << endl;
        if (tenebrith.hp <= 0){
            cout << principal << " vence a batalha!" << endl;
            break;
        }


        cout << "                                             Aperte 1 para defender" << endl;
        cin >> skip;

        ataque = lancadado();
        defesa = lancadado();

        if (ataque > defesa+person.defesa){
            cout << "Tenebrith atinge " << principal << " causando " << (ataque+tenebrith.ataque) << " de dano." << endl;
            cout << "HP " << principal <<": " << (person.hp -=(ataque+tenebrith.ataque)) << endl;
            if (person.hp <= 0){
            cout << "Voce foi derretado por Tenebrith" << endl;
            cout << "GAME OVER" << endl;
            return 0;
            }
        } else if (defesa >= ataque) {
            cout << "Tenebrith ataca " << principal << "." << endl;
            cout << principal << " se defende." << endl;
            cout << "HP " << principal <<": " << person.hp << endl;
        } 
  
    } while (person.hp > 0 && tenebrith.hp > 0);

    cout << "                                             Aperte 1 para atacar" << endl;
        cin >> skip;

    cout << "Após uma batalha épica contra Tenebrith, Jake e Lara finalmente conseguem derrotar o inimigo e alcançar o Grande Portal. O caminho para a liberdade e o retorno ao seu universo está aberto. enfim, a dupla entra no portal e voltam para o universo de onde vieram.\n" << endl;

    cout << "Apesar de felizes com volta para casa, eles sabem que em um próximo capitulo tem uma grande missão pela frente, encontrar o restante do grupo.\n" << endl;

    cout << "                                             Aperte 1 para atacar" << endl;
        cin >> skip;

    cout << "----------------------------------FIM--------------------------------------------" << endl;
    return 0;
} 


int main() {
    int start = 123456789;
    int opcao;
    srand(static_cast<unsigned>(time(0)));

    do {
        cout << "Aperte qualquer numero para comecar: ";
        cin >> start;

    
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Entrada invalida, digite um numero." << endl;
            start = 123456789;
        }
    } while (start == 123456789);

    cout << "Prologo" << endl;
    cout << "O mundo dos sonhos" << endl;

    cout << "Cinco amigos de longa data, Jake, Lara, Theo, Emily e Max, decidiram fazer um acampamento de férias nas montanhas.  \n"
    << "Enquanto exploravam uma caverna misteriosa que encontraram durante uma de suas caminhadas, eles descobriram um cristal \n"
    << "brilhante, guardado por runas antigas que pareciam pulsar com uma energia desconhecida.\n" << endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    
    cout << "\nSem saber o que estavam fazendo, Max, o mais curioso do grupo, tocou o cristal. Em um instante, o mundo ao redor\n" 
    << "deles se distorceu e eles foram engolidos por uma luz cegante, sendo teletransportados para um novo universo. O Mundo dos Sonhos.\n"
    << endl;
    
    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;
    
    cout << "\nAo acordarem, perceberam que alem de estarem em corpos diferentes, Durante o teleporte, foram separados.\n" 
    << "Jake e Lara acordaram juntos em uma floresta, Theo e Emily acordaram em uma cidade abandonada e Max em um santuário grego.\n"<< endl;

    cout << "                                             Aperte 1 para continuar" << endl;
    cin >> skip;

    cout << "\nJake se tornou um Ninja assassino, Lara uma Arqueira, Theo um Bárbaro, Emily uma Feiticeira e Max um dragão.\n" << endl;
    cout << "----------------------------------------Status de Personagem--------------------------------------------------------" << endl;
    cout << "Jake - Ninja Assassino            | Lara - Arqueira                   | Theo - Bárbaro                     |" << endl;
    cout << "Ataque: +2                        | Ataque: +2                        | Ataque: +1                          |" << endl;
    cout << "Defesa:0                          | Defesa:0                          | Defesa:+1                           |" << endl;
    cout << "HP: 15                            | HP: 15                            | HP: 25                              |" << endl;
    cout << "Especial: Retira 30 por cento de  | Especial: Tripla flecha, pode     | Especial: Quando ativa sua fúria,  |" << endl;
    cout << "vida de seu oponente.             | lançar o dado 2 vezes para atacar| regenera 7 unidades de HP.          |" << endl;
    cout << "(cortes rapidos).                 |                                   |\n" << endl;

    cout << "Emily - Feiticeira                | Max - Dragão" << endl;
    cout << "Ataque: +1                        | Ataque:+2" << endl;
    cout << "Defesa: +1                        |Defesa:+1" << endl;
    cout << "HP:18                             | HP: 20" << endl;
    cout << "Especial: Enfeitiça seu          | Especial: Bafo do dragão. A cada" << endl;
    cout << "oponente e o mesmo fica 2         | rodada o oponente perde 3 de HP." << endl;
    cout << "rodadas imobilizado.              |\n" << endl;

   

    do{
        cout << "----------Selecao de personagem----------" << endl;
        cout << "Escolha um numero para definir um personagem:" << endl;
        cout << "1 - Jake" << endl;
        cout << "2 - Lara" << endl;
        cout << "3 - Theo" << endl;
        cout << "4 - Emily" << endl;
        cout << "5 - Max" << endl;
        cout << "OBS:Dependendo do personagem escolhido, a historia da aventura e diferente." << endl;
        cin >> opcao;
        cout << "\n";

        switch (opcao) {
        case 1:
            cout << "Voce selecionou Jake, o Ninja Assassino!\n" << endl;
            break;
        case 2:
            cout << "Voce Selecionou Lara, a Arqueira!\n" << endl;
            break;
        case 3:
            cout << "Voce selecionou Theo!" << endl;
            break;
        case 4:
            cout << "Voce selecionou Emily!" << endl;
            break;
        case 5:
            cout << "Voce selecionou Max!" << endl;
            break;
        default:
            cout << "Escolha um personagem existente." << endl;
            break;
        }
    }  while (opcao < 1 || opcao > 5);

    if (opcao == 1){
        cout << "Vamos comecar a historia!\n" << endl;
        cout << "                                             Aperte 1 para continuar" << endl;
        cin >> skip;
        cout << "\n";

        string principal = "Jake";

        personagem macaco;
        macaco.ataque = 3;
        macaco.defesa = 3;
        macaco.hp = 25; 

        personagem person;
        person.ataque = 2;
        person.defesa = 0;
        person.hp = 15;

        batalhamacaco(person, macaco, principal);

        personagem tenebrith;
        tenebrith.ataque = 3;
        tenebrith.defesa = 3;
        tenebrith.hp = 60;

        batalhatenebrith(person, tenebrith, principal);

    } else if (opcao == 2){
        cout << "Vamos comecar a historia!\n" << endl;
        cout << "                                             Aperte 1 para continuar" << endl;
        cin >> skip;
        cout << "\n";

        string principal = "Lara";
        personagem macaco;
        macaco.ataque = 3;
        macaco.defesa = 3;
        macaco.hp = 25; 

        personagem person;
        person.ataque = 2;
        person.defesa = 0;
        person.hp = 15;

        batalhamacaco(person, macaco, principal);

        personagem tenebrith;
        tenebrith.ataque = 3;
        tenebrith.defesa = 3;
        tenebrith.hp = 60;

        batalhatenebrith(person, tenebrith, principal);

    }

    return 0;
}