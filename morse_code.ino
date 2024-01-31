// Define the pin for the LED
const int ledPin = 1; // Assuming pin G1 corresponds to pin 1 on the Arduino

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Input text to convert to Morse code  
  String inputText = "SOS"; // Replace "YOUR_INPUT_HERE" with your desired input text
  // Convert input text to Morse code and blink LED accordingly
  blinkMorseCode(inputText);
}

// Function to blink Morse code
void blinkMorseCode(String text) {
  for (int i = 0; i < text.length(); i++) {
    char c = text.charAt(i);
    switch (c) {
      case 'A': case 'a':
        blinkDot(); blinkDash(); break;
      case 'B': case 'b':
        blinkDash(); blinkDot(); blinkDot(); blinkDot(); break;
      case 'C': case 'c':
        blinkDash(); blinkDot(); blinkDash(); blinkDot(); break;
      case 'D': case 'd':
        blinkDash(); blinkDot(); blinkDot(); break;
      case 'E': case 'e':
        blinkDot(); break;
      case 'F': case 'f':
        blinkDot(); blinkDot(); blinkDash(); blinkDot(); break;
      case 'G': case 'g':
        blinkDash(); blinkDash(); blinkDot(); break;
      case 'H': case 'h':
        blinkDot(); blinkDot(); blinkDot(); blinkDot(); break;
      case 'I': case 'i':
        blinkDot(); blinkDot(); break;
      case 'J': case 'j':
        blinkDot(); blinkDash(); blinkDash(); blinkDash(); break;
      case 'K': case 'k':
        blinkDash(); blinkDot(); blinkDash(); break;
      case 'L': case 'l':
        blinkDot(); blinkDash(); blinkDot(); blinkDot(); break;
      case 'M': case 'm':
        blinkDash(); blinkDash(); break;
      case 'N': case 'n':
        blinkDash(); blinkDot(); break;
      case 'O': case 'o':
        blinkDash(); blinkDash(); blinkDash(); break;
      case 'P': case 'p':
        blinkDot(); blinkDash(); blinkDash(); blinkDot(); break;
      case 'Q': case 'q':
        blinkDash(); blinkDash(); blinkDot(); blinkDash(); break;
      case 'R': case 'r':
        blinkDot(); blinkDash(); blinkDot(); break;
      case 'S': case 's':
        blinkDot(); blinkDot(); blinkDot(); break;
      case 'T': case 't':
        blinkDash(); break;
      case 'U': case 'u':
        blinkDot(); blinkDot(); blinkDash(); break;
      case 'V': case 'v':
        blinkDot(); blinkDot(); blinkDot(); blinkDash(); break;
      case 'W': case 'w':
        blinkDot(); blinkDash(); blinkDash(); break;
      case 'X': case 'x':
        blinkDash(); blinkDot(); blinkDot(); blinkDash(); break;
      case 'Y': case 'y':
        blinkDash(); blinkDot(); blinkDash(); blinkDash(); break;
      case 'Z': case 'z':
        blinkDash(); blinkDash(); blinkDot(); blinkDot(); break;
      case '0':
        blinkDash(); blinkDash(); blinkDash(); blinkDash(); blinkDash(); break;
      case '1':
        blinkDot(); blinkDash(); blinkDash(); blinkDash(); blinkDash(); break;
      case '2':
        blinkDot(); blinkDot(); blinkDash(); blinkDash(); blinkDash(); break;
      case '3':
        blinkDot(); blinkDot(); blinkDot(); blinkDash(); blinkDash(); break;
      case '4':
        blinkDot(); blinkDot(); blinkDot(); blinkDot(); blinkDash(); break;
      case '5':
        blinkDot(); blinkDot(); blinkDot(); blinkDot(); blinkDot(); break;
      case '6':
        blinkDash(); blinkDot(); blinkDot(); blinkDot(); blinkDot(); break;
      case '7':
        blinkDash(); blinkDash(); blinkDot(); blinkDot(); blinkDot(); break;
      case '8':
        blinkDash(); blinkDash(); blinkDash(); blinkDot(); blinkDot(); break;
      case '9':
        blinkDash(); blinkDash(); blinkDash(); blinkDash(); blinkDot(); break;
      default:
        // For any other character, pause for a longer time as a space
        delay(3000);
        break;
    }
    // Pause between letters
    delay(1000);
  }
}

// Function to blink a dot (short blink)
void blinkDot() {
  digitalWrite(ledPin, HIGH);
  delay(250);
  digitalWrite(ledPin, LOW);
  delay(250);
}

// Function to blink a dash (long blink)
void blinkDash() {
  digitalWrite(ledPin, HIGH);
  delay(750);
  digitalWrite(ledPin, LOW);
  delay(250);
}
