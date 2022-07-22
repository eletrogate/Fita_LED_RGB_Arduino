/* ===== Controlando fita de LED RGB com o Arduino ===== 
   
   Autor: Eletrogate 
   Data: 01/09/2021
   
   ===================================================== */ 

//nomeando os pinos PWM do arduino conforme as cores do padrão RGB
   #define R 11
   #define G 10
   #define B 9

//variáveis de controle para cada cor do padrão RGB
   int vermelho, verde, azul;

void setup() {
//setando os pinos PWM do Arduino como saída
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT); 
}

void loop(){
//liga os leds formando a cor branca por 1s
  analogWrite(R, 255);
  analogWrite(G, 255);
  analogWrite(B, 255);
  delay(100);

//desliga todas as cores por 1s
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 0);
  delay(100);

//reinicia o processo
}