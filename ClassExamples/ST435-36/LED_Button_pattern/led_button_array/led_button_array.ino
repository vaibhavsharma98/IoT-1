//int LED1 = 6,LED2 = 9,LED3 = 10,LED4 = 11 ; 
int LED[4]= {6,9,10,11};
// method prototype
void pattern3() ; 

void setup() {
  for( int cnt=0 ; cnt<4; cnt++){
    pinMode (LED[cnt], OUTPUT);  
  }
//  pinMode (LED1, OUTPUT);pinMode (LED2, OUTPUT);
//  pinMode (LED3, OUTPUT);pinMode (LED4, OUTPUT);
}
int flag =1, count =0; 
void loop() {
   if (flag==1){ pat1();count++ ; }
   if (count>5) flag=0; 
}
void pat1(){
    for (int cnt=0; cnt<4; cnt++){
      digitalWrite(LED[cnt], HIGH);
    }
    delay(400);
    for (int cnt=0; cnt<4; cnt++){
      digitalWrite(LED[cnt], LOW);
    }
    delay(400);
}


////  for (int cnt=0; cnt<5; cnt++){
////      // pattern 1 all ON -> all OFF
////    digitalWrite(LED1, HIGH);digitalWrite(LED2, HIGH);
////    digitalWrite(LED3, HIGH);digitalWrite(LED4, HIGH);
////    delay(1000);
////    digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);
////    digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);
////    delay(1000);
////  }
////
////   for (int cnt=0; cnt<5; cnt++){
////  // pattern 2 alternate ON/OFF
////      digitalWrite(LED1, HIGH);digitalWrite(LED2, LOW);
////      digitalWrite(LED3, HIGH);digitalWrite(LED4, LOW);
////      delay(1000);
////      digitalWrite(LED1, LOW);digitalWrite(LED2, HIGH);
////      digitalWrite(LED3, LOW);digitalWrite(LED4, HIGH);
////      delay(1000);
////   }
//   for (int cnt=0; cnt<5; cnt++){
//      pattern3b();
//   }    
//}
//void pattern3(){
//  // pattern 3 LED ON in a running sequence 
//      digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);
//      digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);
//      delay(1000);
//     digitalWrite(LED1, HIGH);digitalWrite(LED2, LOW);
//      digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);
//      delay(1000);
//      digitalWrite(LED1, LOW);digitalWrite(LED2, HIGH);
//      digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);
//      delay(1000);
//      digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);
//      digitalWrite(LED3, HIGH);digitalWrite(LED4, LOW);
//      delay(1000);
//      digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);
//      digitalWrite(LED3, LOW);digitalWrite(LED4, HIGH);
//      delay(1000);
//}
//void pattern3a(){
//  // pattern 3 LED ON in a running sequence 
//      digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);
//      digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);
//      delay(400);
//     digitalWrite(LED1, HIGH);
////     digitalWrite(LED2, LOW);
////      digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);
//      delay(400);
//      digitalWrite(LED1, LOW);digitalWrite(LED2, HIGH);
////      digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);
//      delay(400);
////      digitalWrite(LED1, LOW);
//      digitalWrite(LED2, LOW);
//      digitalWrite(LED3, HIGH);
////      digitalWrite(LED4, LOW);
//      delay(400);
////      digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);
//      digitalWrite(LED3, LOW);digitalWrite(LED4, HIGH);
//      delay(400);
//}
//void pattern3b(){
//  // pattern 3 LED ON in a running sequence 
//      digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);
//      digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);
//      delay(400);
//      digitalWrite(LED1, HIGH);
//      delay(400);
//      digitalWrite(LED1, LOW);digitalWrite(LED2, HIGH);
//      delay(400);
//      digitalWrite(LED2, LOW);digitalWrite(LED3, HIGH);
//      delay(400);
//      digitalWrite(LED3, LOW);digitalWrite(LED4, HIGH);
//      delay(400);
//}
