#define ADC_CHANNELS                    3
#define ADC_OVERSAMPLING                4
/* #define ADC_VALUE_RANGE                 (1024*ADC_OVERSAMPLING) */
#define ADC_VALUE_RANGE                 4095
#define CLOCKMULTIPLIER_DEADBAND_THRESHOLD  (ADC_VALUE_RANGE/32/4)

#define DURCV_ADC_CHANNEL              1
#define MULCV_ADC_CHANNEL              0
#define REPCV_ADC_CHANNEL              2

/* swapped dur and mul so that order from top is:
   Modulate (pulse width modulation)
   Multiply
   Repeat
*/

/* pin mappings  */
#define CLOCKMULTIPLIER_DURIN_DDR            DDRD
#define CLOCKMULTIPLIER_DURIN_PORT           PORTD
#define CLOCKMULTIPLIER_DURIN_PINS           PIND
#define CLOCKMULTIPLIER_DURIN_PIN            PORTD2
#define CLOCKMULTIPLIER_DURIN_INT            INT0_vect /* INT0: PD2 interrupt */

#define CLOCKMULTIPLIER_MULIN_DDR            DDRD
#define CLOCKMULTIPLIER_MULIN_PORT           PORTD
#define CLOCKMULTIPLIER_MULIN_PINS           PIND
#define CLOCKMULTIPLIER_MULIN_PIN            PORTD3
#define CLOCKMULTIPLIER_MULIN_INT            INT1_vect /* INT1: PD3 interrupt */

#define CLOCKMULTIPLIER_REPIN_DDR            DDRD
#define CLOCKMULTIPLIER_REPIN_PORT           PORTD
#define CLOCKMULTIPLIER_REPIN_PINS           PIND
#define CLOCKMULTIPLIER_REPIN_PIN            PORTD4

#define CLOCKMULTIPLIER_DUROUT_DDR           DDRB
#define CLOCKMULTIPLIER_DUROUT_PORT          PORTB
#define CLOCKMULTIPLIER_DUROUT_PINS          PINB
#define CLOCKMULTIPLIER_DUROUT_PIN           PORTB0

#define CLOCKMULTIPLIER_MULOUT_DDR           DDRB
#define CLOCKMULTIPLIER_MULOUT_PORT          PORTB
#define CLOCKMULTIPLIER_MULOUT_PINS          PINB
#define CLOCKMULTIPLIER_MULOUT_PIN           PORTB1

#define CLOCKMULTIPLIER_REPOUT_DDR           DDRB
#define CLOCKMULTIPLIER_REPOUT_PORT          PORTB
#define CLOCKMULTIPLIER_REPOUT_PINS          PINB
#define CLOCKMULTIPLIER_REPOUT_PIN           PORTB2

#define CLOCKMULTIPLIER_LED1_DDR            DDRD
#define CLOCKMULTIPLIER_LED1_PORT           PORTD
#define CLOCKMULTIPLIER_LED1_PINS           PIND
#define CLOCKMULTIPLIER_LED1_PIN            PORTD6

#define CLOCKMULTIPLIER_LED2_DDR            DDRD
#define CLOCKMULTIPLIER_LED2_PORT           PORTD
#define CLOCKMULTIPLIER_LED2_PINS           PIND
#define CLOCKMULTIPLIER_LED2_PIN            PORTD7



