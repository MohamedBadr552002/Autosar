/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_DoorLockIndication_SWC_.c
 * Generated on: Sun Jul 21 19:31:3 EEST
 ********************************************************************/

#include "string.h"
#include "Rte_DoorLockIndication_SWC.h"
//#include "Rte_DoorSensorAbstraction.h"


My_uint8 Door_Get_state_PP_SR_door_state_DoorState;

const Rte_CDS_DoorLockIndication_SWC Rte_Instance_DoorLockIndication_SWC = {
0
};


const Rte_CDS_DoorLockIndication_SWC * const Rte_Inst_DoorLockIndication_SWC = &Rte_Instance_DoorLockIndication_SWC;


My_uint8 DoorLockIndication_SWC_RP_SR_door_state_DoorState_Buffer;
Std_ReturnType DoorLockIndication_SWC_RP_SR_door_state_DoorState_Buffer_retcode = RTE_E_OK;
Std_ReturnType DoorLockIndication_SWC_RP_CS_ledControl_led_switch_Buffer_retcode = RTE_E_OK;

FunctionPtr_DoorLockIndication_SWC_RP_CS_ledControl_led_switch Rte_Call_DoorLockIndication_SWC_RP_CS_ledControl_led_switch_Delegate = 0;

Std_ReturnType Rte_Read_DoorLockIndication_SWC_RP_SR_door_state_DoorState (My_uint8* DoorState)
{
	*DoorState = Door_Get_state_PP_SR_door_state_DoorState;
	return DoorLockIndication_SWC_RP_SR_door_state_DoorState_Buffer_retcode;
}
Std_ReturnType Rte_Call_DoorLockIndication_SWC_RP_CS_ledControl_led_switch (My_uint8 door_state)
{
	Std_ReturnType __result = DoorLockIndication_SWC_RP_CS_ledControl_led_switch_Buffer_retcode;
	if ( Rte_Call_DoorLockIndication_SWC_RP_CS_ledControl_led_switch_Delegate != 0 ) {
		__result = Rte_Call_DoorLockIndication_SWC_RP_CS_ledControl_led_switch_Delegate(door_state);
	}
	//Invoke led control runnable
	Led_Switch_Set_runnable(door_state);

	return __result;
}
