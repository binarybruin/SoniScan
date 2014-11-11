//
//  Constants.h
//  SoniScan_2_0
//
//  Created by Hariharan Mohanraj on 12/5/12.
//  Copyright (c) 2012 Hariharan Mohanraj. All rights reserved.
//

#ifndef SoniScan_2_0_Constants_h
#define SoniScan_2_0_Constants_h

// ================================
// Global parameters
// ================================
#ifndef M_PI
#define M_PI  (3.14159265)
#endif

#define DIAGNOSTIC 1

// ===========================
// Portaudio parameters
// ===========================

#define BUFFER_SIZE 4096
#define SAMPLE_RATE 44100
#define PI 3.14159265
typedef float sample;

// =========================
// AudioBlockBase parameters
// =========================

#define MAX_NUM_CHANNELS 10
#define MAX_NUM_SINEGENS 10
#define MAX_NUM_PANNERS  10
#define MAX_NUM_AMPERS   10

// =======================
// File paths
// =======================
#define CSOUND_PATH ""	//"/usr/local/bin/"    //  <---- Change this to the path where you have Csound installed. (usually "/usr/local/bin/")
#define TEST_DATA_PATH "C:\Users\Michelle\Documents\NYU\Fall_2014\Sonification\Michelle\DataFiles"
#define CSOUNDFILES_PATH "C:\Users\Michelle\Documents\NYU\Fall_2014\Sonification\Michelle\CsoundFiles"  //  <---- Change this to the path where you are storing your CSound files for this project
#define OUTPUT_PATH "./Output/"
#define NUMBERS_LOG "numbers_log.csv"
// =======================
// ControlBlock parameters
// =======================


#define TEST_DATA_FILENAME_1 "test_a"
#define TEST_DATA_FILENAME_2 "test_b"
#define TEST_DATA_FILENAME_3 "test_c"
#define TEST_DATA_FILENAME_4 "test_d"
#define DATA_BITDEPTH 15
#define TRIM_THRESHOLD 0.45

// =============================
// SonificationEngine parameters
// =============================

#define NUM_MODES 3
#define NUM_SCANS 3
#define TEMPO 60.0



#define CSOUND_FLAGS "-g -d" // <---- Csound flags
#define MAX_ABSSCOREFILE 1024
#define MAX_SCORELINE_LENGTH 256
#define MAX_NOTE_INDEX 36
#define NUM_INSTR 4
#define NUM_BEATS 12
#define NUM_OUTPUTS 2
#define MODE_ONE_FREQ 440
#define DETUNE_FACTOR 0.1

// =============================
// Brain Lobes parameters
// =============================

#define PERSPSLICE 0
#define FPSLICE 30
#define TOSLICE 68

#define NUM_SLICES 86

// Define coordinate indices
#define AX 0
#define AY 1

#define BX 2
#define BY 3

#define CX 4
#define CY 5

#define DX 6
#define DY 7

#define EX 8
#define EY 9

#define FX 10
#define FY 11

#define GX 12
#define GY 13

#define HX 14
#define HY 15

#define IX 11
#define IY 65

#define JX 32
#define JY 59

#define KX 43
#define KY 70

#define LX 53
#define LY 56

#define MX 0
#define MY 67

#define NX 0
#define NY 1

#define OX 2
#define OY 3

#define PX 4
#define PY 5

#define QX 6
#define QY 7

#define ORTHOGL_MIDLINE 43
#define PERSPEC_MIDLINE 321.5
#endif

