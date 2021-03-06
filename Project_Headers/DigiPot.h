/*
 * DigiPot.h
 *
 *  Created on: Mar 4, 2017
 *      Author: manuel
 */

#ifndef DIGIPOT_H_
#define DIGIPOT_H_


/*************************************************************************************************/
/*********************                 Includes                **********************/
/*************************************************************************************************/
#include "derivative.h" /* include peripheral declarations */
#include "types.h"
#include "SPI.h"

/*************************************************************************************************/
/*********************                 Defines                    **********************/
/*************************************************************************************************/
#define DIGIPOT_BASE_RESISTANCE 100000
#define DIGIPOT_RESOLUTION	390
#define RAW	TRUE
#define RBW	FALSE
/*************************************************************************************************/
/*********************                 Typedefs                **********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************            Functions Like Macros              **********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************              Extern Variables              **********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************                  Extern Constants                    **********************/
/*************************************************************************************************/

/*************************************************************************************************/
/*********************              Function Prototypes              **********************/
/*************************************************************************************************/

/*!*-----------------------------------------------------------------------------------------------
* \name     SPI_Init
* \brief    It enables the module, configures it as the Master device, sets the clock configurations
*           and configures the Baud Rate
* \param    void
* \return   void
-------------------------------------------------------------------------------------------------*/
void DigiPot_Init(void);

bool DigiPot_setResistance(bool, u32);
/*************************************************************************************************/


#endif /* DIGIPOT_H_ */
