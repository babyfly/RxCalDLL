#include "extcode.h"
#pragma pack(push)
#pragma pack(1)

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * RxCALON
 */
void __stdcall RxCALON(double ExternalAtt, double FreqHz, double RxPwr, 
	int32_t PacketNumber, char VISAName[], char WaveformNameWithType[], 
	uint32_t PhyPort);
/*!
 * RxCALOFF
 */
void __stdcall RxCALOFF(char VISAResourceName[]);

MgErr __cdecl LVDLLStatus(char *errStr, int errStrLen, void *module);

#ifdef __cplusplus
} // extern "C"
#endif

#pragma pack(pop)

