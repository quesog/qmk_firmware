#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

// Double the actual rows (5 for each half)
#define MATRIX_ROWS 5
#define MATRIX_COLS 16
// #define MATRIX_COLS_RIGHT 8

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// Half duplex operations
#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral
#define SERIAL_USART_TX_PIN GP19     // USART TX pin