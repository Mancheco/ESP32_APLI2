

//               sa, sb, sc, sd, se, sf, sg  SEGMENTOS DISPLAY
int segDisp[] = { 32, 33, 25, 26, 27, 14, 12 };
int numero, segmento;

byte segConf[10][7] = {

  //  a  b  c  d  e  f  g
  { 1, 1, 1, 1, 1, 1, 0 },  // 0
  { 0, 1, 1, 0, 0, 0, 0 },  // 1
  { 1, 1, 0, 1, 1, 0, 1 },  // 2
  { 1, 1, 1, 1, 0, 0, 1 },  // 3
  { 0, 1, 1, 0, 0, 1, 1 },  // 4
  { 1, 0, 1, 1, 0, 1, 1 },  // 5
  { 1, 0, 1, 1, 1, 1, 1 },  // 6
  { 1, 1, 1, 0, 0, 0, 0 },  // 7
  { 1, 1, 1, 1, 1, 1, 1 },  // 8
  { 1, 1, 1, 1, 0, 1, 1 }   // 9

};

void setup() {

  for (int i = 0; i < 8; i++) {

    pinMode(segDisp[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i <= 9; i++) {

    for (int j = 0; j < 7; j++) {

      digitalWrite(segDisp[j], segConf[i][j]);

    }

    delay(500);

  }
}
