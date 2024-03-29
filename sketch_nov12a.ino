/*
 * (PROJ03) Metro (and Metro Express) Persistence of Vision Display
 * Desc: POV display for Metro & Metro Express using 7x LEDs and 7x 560ohm Resistors
 *
 * by Brent Rubell for Adafruit Industries. Support Open Source, buy Adafruit!
*/
 
int spacer[8][5] = {
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0}
};
 
int A[8][5] = {
  {0, 1, 1, 1, 0},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 1, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int B[8][5] = {
  {1, 1, 1, 1, 0},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 1, 1, 0},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 1, 1, 0},
  {0, 0, 0, 0, 0}
};
 
int C[8][5] = {
  {0, 1, 1, 1, 0},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 1, 1},
  {0, 1, 1, 1, 0},
  {0, 0, 0, 0, 0}
};
 
int D[8][5] = {
  {1, 1, 1, 0, 0},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 1, 1, 0},
  {0, 0, 0, 0, 0}
};
 
int E[8][5] = {
  {1, 1, 1, 1, 1},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 1, 1, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int F[8][5] = {
  {1, 1, 1, 1, 1},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 1, 1, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {0, 0, 0, 0, 0}
};
 
int G[8][5] = {
  {0, 1, 1, 1, 0},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 0, 1},
  {0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int H[8][5] = {
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 1, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {1, 1, 0, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int I[8][5] = {
  {0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int J[8][5] = {
  {0, 0, 0, 1, 1},
  {0, 0, 0, 1, 1},
  {0, 0, 0, 1, 1},
  {0, 0, 0, 1, 1},
  {1, 0, 0, 1, 1},
  {1, 0, 0, 1, 1},
  {0, 1, 1, 0, 0},
  {0, 0, 0, 0, 0}
};
 
int K[8][5] = {
  {0, 0, 0, 0, 0},
  {1, 0, 0, 1, 0},
  {1, 0, 1, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 0, 1, 0, 0},
  {1, 0, 0, 1, 0},
  {0, 0, 0, 0, 0}
};
 
int L[8][5] = {
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 1, 1, 1},
  {1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int M[8][5] = {
  {1, 0, 0, 0, 1},
  {1, 1, 0, 1, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 1, 0, 1},
  {0, 0, 0, 0, 0}
};
 
int N[8][5] = {
  {1, 0, 0, 0, 1},
  {1, 1, 0, 0, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 0, 1, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {0, 0, 0, 0, 0}
};
 
int O[8][5] = {
  {1, 1, 1, 1, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int P[8][5] = {
  {1, 1, 1, 1, 0},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 1, 1, 1, 0},
  {1, 0, 0, 0, 0},
  {1, 0, 0, 0, 0},
  {1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0}
};
 
int Q[8][5] = {
  {0, 1, 1, 1, 0},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 0, 1, 0},
  {0, 1, 1, 0, 1},
  {0, 0, 0, 0, 0}
};
 
int R[8][5] = {
  {1, 1, 1, 1, 0},
  {1, 0, 0, 1, 0},
  {1, 0, 0, 1, 0},
  {1, 1, 1, 1, 0},
  {1, 1, 0, 0, 0},
  {1, 0, 1, 0, 0},
  {1, 0, 0, 1, 0},
  {0, 0, 0, 0, 0}
};
 
int S[8][5] = {
  {0, 1, 1, 1, 1},
  {0, 1, 0, 0, 1},
  {0, 1, 0, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 0, 1, 0},
  {1, 0, 0, 1, 0},
  {1, 1, 1, 1, 0},
  {0, 0, 0, 0, 0}
};
 
int T[8][5] = {
  {1, 1, 1, 1, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 1, 0, 1},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0}
};
 
int U[8][5] = {
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int V[8][5] = {
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {0, 1, 0, 1, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0}
};
 
int W[8][5] = {
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 1, 0, 1},
  {1, 0, 1, 0, 1},
  {1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0}
};
 
int X[8][5] = {
  {1, 0, 0, 0, 1},
  {0, 1, 0, 1, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 1, 0, 1, 0},
  {1, 0, 0, 0, 1},
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0}
};
 
int Y[8][5] = {
  {0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0},
  {0, 1, 0, 1, 0},
  {0, 1, 0, 1, 0},
  {0, 1, 1, 1, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0}
};
 
 
int Z[8][5] = {
  {0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1},
  {0, 0, 0, 1, 1},
  {0, 0, 1, 1, 0},
  {0, 1, 1, 0, 0},
  {1, 1, 0, 0, 0},
  {1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0}
};
 
 
// LED pins
int LEDPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
 
//  space between the letters
float letterSpacing = 0.5;
 
void setup() {
  // start serialmon.
  Serial.begin(9600);
  // set all leds to output mode
  for (int pin = 0; pin < 8; pin++) {
    pinMode(LEDPins[pin], OUTPUT);
  }
}
 
 
 
void loop() {
  printLetter(M);
  printLetter(spacer);
  printLetter(E);
  printLetter(spacer);
  printLetter(T);
  printLetter(spacer);
  printLetter(R);
  printLetter(spacer);
  printLetter(O);
  printLetter(spacer);
  // delay 2s
  delay(2);
 
}
 
// outputs a letter to the POV Display
void printLetter(int letter[8][5]) {
  //  row of letter array
  for (int j = 0; j < 5; j++)
  {
      Serial.print("\nRow # ");
      Serial.print(j);
      Serial.println(".");
    //  column of letter array
    for (int i = 0; i < 8; i++) {
      // check for 1 within column6
      if (letter[i][j] == 1) {
        Serial.println("1 detected");
        digitalWrite(LEDPins[i], HIGH);
      }
      else {
        Serial.println("0 detected");
        digitalWrite(LEDPins[i], LOW);
      }
    }
    delay(letterSpacing);
  }
 
}
