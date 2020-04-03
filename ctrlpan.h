/* --COPYRIGHT--
 * Copyright (c) 2020, New United Group
 * All rights reserved.
 * --/COPYRIGHT--*/

#ifndef _CTRLPAN_H_
#define _CTRLPAN_H_



// **************************************************************************
// the includes



//!
//! \defgroup CRTLPAN

//!
//! \ingroup CRTLPAN
//@{

#ifdef __cplusplus
extern "C" {
#endif

// **************************************************************************
// the defines



//! \brief Defines the transmitted data address
//!
#define CRTLPAN_TX_DATA_ADDRESS			(0x01)

//! \brief Defines the transmitted data length
//!
#define CRTLPAN_TX_DATA_LENGTH			(10)

//! \brief Defines the transmitted function code
//!
#define CRTLPAN_TX_DATA_ADDRESS			(0x02)

//! \brief Defines the received data address
//!
#define CRTLPAN_RX_DATA_ADDRESS			(0x02)

//! \brief Defines the received data length
//!
#define CRTLPAN_RX_DATA_LENGTH			(11)

//! \brief Defines the received function code
//!
#define CRTLPAN_RX_DATA_ADDRESS			(0x01)

//! \brief

// **************************************************************************
// the typedefs

//! \brief Defines the CTRLPAN object
//!
typedef struct _CTRLPAN_Obj_
{
	SCI_Handle		sciHandle;
	uint16_t 		RxSta;
	uint16_t 		TxBuf[CRTLPAN_RX_DATA_LENGTH];
	uint16_t 		RxBuf[CRTLPAN_RX_DATA_LENGTH];
	float			RealtimeForce;
	float			PullForce;
	float			RollbackForce;
	uint16_t		SubDevSta;
	bool			RxTimeOut;
	bool			enableTimeOut;
} CTRLPAN_Obj;

//! \brief Defines the CTRLPAN handle
//!
typedef struct _CTRLPAN_Obj_ *CTRLPAN_Handle;

// **************************************************************************
// the globals


// **************************************************************************
// the function prototypes



#ifdef __cplusplus
}
#endif // extern "C"

//@}  // ingroup

#endif // end of _CTRLPAN_H_ definition
