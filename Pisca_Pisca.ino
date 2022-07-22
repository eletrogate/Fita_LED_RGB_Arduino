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
//Acende apenas a cor VERMELHA e aguarda 1s
  analogWrite(G, 0);
  analogWrite(B, 0);
  analogWrite(R, 255);
  delay(1000);

//Acende apenas a cor VERDE e aguarda 1s
  analogWrite(R, 0);
  analogWrite(G, 255);
  delay(1000);

//Acende apenas a cor AZUL e aguarda 1s
  analogWrite(G, 0);
  analogWrite(B, 255);
  delay(1000);

//Acende todas as cores no máximo formando a luz branca e aguarda 1s
  analogWrite(R, 255);
  analogWrite(G, 255);
  analogWrite(B, 255);
  delay(1000);

//reinicia o processo
}