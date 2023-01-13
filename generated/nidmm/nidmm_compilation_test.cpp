//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Compilation test for the NI-DMM Metadata
//---------------------------------------------------------------------
#include "nidmm_library.h"

namespace nidmm_grpc {

ViStatus Abort(ViSession vi)
{
  return niDMM_Abort(vi);
}

ViStatus CheckAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue)
{
  return niDMM_CheckAttributeViBoolean(vi, channelName, attributeId, attributeValue);
}

ViStatus CheckAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue)
{
  return niDMM_CheckAttributeViInt32(vi, channelName, attributeId, attributeValue);
}

ViStatus CheckAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue)
{
  return niDMM_CheckAttributeViReal64(vi, channelName, attributeId, attributeValue);
}

ViStatus CheckAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue)
{
  return niDMM_CheckAttributeViSession(vi, channelName, attributeId, attributeValue);
}

ViStatus CheckAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViString attributeValue)
{
  return niDMM_CheckAttributeViString(vi, channelName, attributeId, attributeValue);
}

ViStatus ClearError(ViSession vi)
{
  return niDMM_ClearError(vi);
}

ViStatus ClearInterchangeWarnings(ViSession vi)
{
  return niDMM_ClearInterchangeWarnings(vi);
}

ViStatus Close(ViSession vi)
{
  return niDMM_close(vi);
}

ViStatus ConfigureACBandwidth(ViSession vi, ViReal64 acMinimumFrequencyHz, ViReal64 acMaximumFrequencyHz)
{
  return niDMM_ConfigureACBandwidth(vi, acMinimumFrequencyHz, acMaximumFrequencyHz);
}

ViStatus ConfigureADCCalibration(ViSession vi, ViInt32 adcCalibration)
{
  return niDMM_ConfigureADCCalibration(vi, adcCalibration);
}

ViStatus ConfigureAutoZeroMode(ViSession vi, ViInt32 autoZeroMode)
{
  return niDMM_ConfigureAutoZeroMode(vi, autoZeroMode);
}

ViStatus ConfigureCableCompType(ViSession vi, ViInt32 cableCompType)
{
  return niDMM_ConfigureCableCompType(vi, cableCompType);
}

ViStatus ConfigureCurrentSource(ViSession vi, ViReal64 currentSource)
{
  return niDMM_ConfigureCurrentSource(vi, currentSource);
}

ViStatus ConfigureFixedRefJunction(ViSession vi, ViReal64 fixedReferenceJunction)
{
  return niDMM_ConfigureFixedRefJunction(vi, fixedReferenceJunction);
}

ViStatus ConfigureFrequencyVoltageRange(ViSession vi, ViReal64 voltageRange)
{
  return niDMM_ConfigureFrequencyVoltageRange(vi, voltageRange);
}

ViStatus ConfigureMeasCompleteDest(ViSession vi, ViInt32 measCompleteDestination)
{
  return niDMM_ConfigureMeasCompleteDest(vi, measCompleteDestination);
}

ViStatus ConfigureMeasCompleteSlope(ViSession vi, ViInt32 measCompleteSlope)
{
  return niDMM_ConfigureMeasCompleteSlope(vi, measCompleteSlope);
}

ViStatus ConfigureMeasurementAbsolute(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionAbsolute)
{
  return niDMM_ConfigureMeasurementAbsolute(vi, measurementFunction, range, resolutionAbsolute);
}

ViStatus ConfigureMeasurementDigits(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionDigits)
{
  return niDMM_ConfigureMeasurementDigits(vi, measurementFunction, range, resolutionDigits);
}

ViStatus ConfigureMultiPoint(ViSession vi, ViInt32 triggerCount, ViInt32 sampleCount, ViInt32 sampleTrigger, ViReal64 sampleInterval)
{
  return niDMM_ConfigureMultiPoint(vi, triggerCount, sampleCount, sampleTrigger, sampleInterval);
}

ViStatus ConfigureOffsetCompOhms(ViSession vi, ViInt32 offsetCompOhms)
{
  return niDMM_ConfigureOffsetCompOhms(vi, offsetCompOhms);
}

ViStatus ConfigureOpenCableCompValues(ViSession vi, ViReal64 conductance, ViReal64 susceptance)
{
  return niDMM_ConfigureOpenCableCompValues(vi, conductance, susceptance);
}

ViStatus ConfigurePowerLineFrequency(ViSession vi, ViReal64 powerLineFrequencyHz)
{
  return niDMM_ConfigurePowerLineFrequency(vi, powerLineFrequencyHz);
}

ViStatus ConfigureRTDCustom(ViSession vi, ViReal64 rtdA, ViReal64 rtdB, ViReal64 rtdC)
{
  return niDMM_ConfigureRTDCustom(vi, rtdA, rtdB, rtdC);
}

ViStatus ConfigureRTDType(ViSession vi, ViInt32 rtdType, ViReal64 rtdResistance)
{
  return niDMM_ConfigureRTDType(vi, rtdType, rtdResistance);
}

ViStatus ConfigureSampleTriggerSlope(ViSession vi, ViInt32 sampleTriggerSlope)
{
  return niDMM_ConfigureSampleTriggerSlope(vi, sampleTriggerSlope);
}

ViStatus ConfigureShortCableCompValues(ViSession vi, ViReal64 resistance, ViReal64 reactance)
{
  return niDMM_ConfigureShortCableCompValues(vi, resistance, reactance);
}

ViStatus ConfigureThermistorCustom(ViSession vi, ViReal64 thermistorA, ViReal64 thermistorB, ViReal64 thermistorC)
{
  return niDMM_ConfigureThermistorCustom(vi, thermistorA, thermistorB, thermistorC);
}

ViStatus ConfigureThermistorType(ViSession vi, ViInt32 thermistorType)
{
  return niDMM_ConfigureThermistorType(vi, thermistorType);
}

ViStatus ConfigureThermocouple(ViSession vi, ViInt32 thermocoupleType, ViInt32 referenceJunctionType)
{
  return niDMM_ConfigureThermocouple(vi, thermocoupleType, referenceJunctionType);
}

ViStatus ConfigureTransducerType(ViSession vi, ViInt32 transducerType)
{
  return niDMM_ConfigureTransducerType(vi, transducerType);
}

ViStatus ConfigureTrigger(ViSession vi, ViInt32 triggerSource, ViReal64 triggerDelay)
{
  return niDMM_ConfigureTrigger(vi, triggerSource, triggerDelay);
}

ViStatus ConfigureTriggerSlope(ViSession vi, ViInt32 triggerSlope)
{
  return niDMM_ConfigureTriggerSlope(vi, triggerSlope);
}

ViStatus ConfigureWaveformAcquisition(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 rate, ViInt32 waveformPoints)
{
  return niDMM_ConfigureWaveformAcquisition(vi, measurementFunction, range, rate, waveformPoints);
}

ViStatus ConfigureWaveformCoupling(ViSession vi, ViInt32 waveformCoupling)
{
  return niDMM_ConfigureWaveformCoupling(vi, waveformCoupling);
}

ViStatus Control(ViSession vi, ViInt32 controlAction)
{
  return niDMM_Control(vi, controlAction);
}

ViStatus Disable(ViSession vi)
{
  return niDMM_Disable(vi);
}

ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[])
{
  return niDMM_ExportAttributeConfigurationBuffer(vi, size, configuration);
}

ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath)
{
  return niDMM_ExportAttributeConfigurationFile(vi, filePath);
}

ViStatus Fetch(ViSession vi, ViInt32 maximumTime, ViReal64* reading)
{
  return niDMM_Fetch(vi, maximumTime, reading);
}

ViStatus FetchMultiPoint(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints)
{
  return niDMM_FetchMultiPoint(vi, maximumTime, arraySize, readingArray, actualNumberOfPoints);
}

ViStatus FetchWaveform(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints)
{
  return niDMM_FetchWaveform(vi, maximumTime, arraySize, waveformArray, actualNumberOfPoints);
}

ViStatus GetApertureTimeInfo(ViSession vi, ViReal64* apertureTime, ViInt32* apertureTimeUnits)
{
  return niDMM_GetApertureTimeInfo(vi, apertureTime, apertureTimeUnits);
}

ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue)
{
  return niDMM_GetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue)
{
  return niDMM_GetAttributeViInt32(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue)
{
  return niDMM_GetAttributeViReal64(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue)
{
  return niDMM_GetAttributeViSession(vi, channelName, attributeId, attributeValue);
}

ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[])
{
  return niDMM_GetAttributeViString(vi, channelName, attributeId, bufferSize, attributeValue);
}

ViStatus GetAutoRangeValue(ViSession vi, ViReal64* actualRange)
{
  return niDMM_GetAutoRangeValue(vi, actualRange);
}

ViStatus GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute)
{
  return niDMM_GetCalDateAndTime(vi, calType, month, day, year, hour, minute);
}

ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelString[])
{
  return niDMM_GetChannelName(vi, index, bufferSize, channelString);
}

ViStatus GetDevTemp(ViSession vi, ViString options, ViReal64* temperature)
{
  return niDMM_GetDevTemp(vi, options, temperature);
}

ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[])
{
  return niDMM_GetError(vi, errorCode, bufferSize, description);
}

ViStatus GetErrorMessage(ViSession vi, ViStatus errorCode, ViInt32 bufferSize, ViChar errorMessage[])
{
  return niDMM_GetErrorMessage(vi, errorCode, bufferSize, errorMessage);
}

ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months)
{
  return niDMM_GetExtCalRecommendedInterval(vi, months);
}

ViStatus GetLastCalTemp(ViSession vi, ViInt32 calType, ViReal64* temperature)
{
  return niDMM_GetLastCalTemp(vi, calType, temperature);
}

ViStatus GetMeasurementPeriod(ViSession vi, ViReal64* period)
{
  return niDMM_GetMeasurementPeriod(vi, period);
}

ViStatus GetNextCoercionRecord(ViSession vi, ViInt32 bufferSize, ViChar coercionRecord[])
{
  return niDMM_GetNextCoercionRecord(vi, bufferSize, coercionRecord);
}

ViStatus GetNextInterchangeWarning(ViSession vi, ViInt32 bufferSize, ViChar interchangeWarning[])
{
  return niDMM_GetNextInterchangeWarning(vi, bufferSize, interchangeWarning);
}

ViStatus GetSelfCalSupported(ViSession vi, ViBoolean* selfCalSupported)
{
  return niDMM_GetSelfCalSupported(vi, selfCalSupported);
}

ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[])
{
  return niDMM_ImportAttributeConfigurationBuffer(vi, size, configuration);
}

ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath)
{
  return niDMM_ImportAttributeConfigurationFile(vi, filePath);
}

ViStatus Init(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi)
{
  return niDMM_init(resourceName, idQuery, resetDevice, vi);
}

ViStatus InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViString optionString, ViSession* vi)
{
  return niDMM_InitWithOptions(resourceName, idQuery, resetDevice, optionString, vi);
}

ViStatus Initiate(ViSession vi)
{
  return niDMM_Initiate(vi);
}

ViStatus InvalidateAllAttributes(ViSession vi)
{
  return niDMM_InvalidateAllAttributes(vi);
}

ViStatus IsOverRange(ViSession vi, ViReal64 measurementValue, ViBoolean* isOverRange)
{
  return niDMM_IsOverRange(vi, measurementValue, isOverRange);
}

ViStatus IsUnderRange(ViSession vi, ViReal64 measurementValue, ViBoolean* isUnderRange)
{
  return niDMM_IsUnderRange(vi, measurementValue, isUnderRange);
}

ViStatus PerformOpenCableComp(ViSession vi, ViReal64* conductance, ViReal64* susceptance)
{
  return niDMM_PerformOpenCableComp(vi, conductance, susceptance);
}

ViStatus PerformShortCableComp(ViSession vi, ViReal64* resistance, ViReal64* reactance)
{
  return niDMM_PerformShortCableComp(vi, resistance, reactance);
}

ViStatus Read(ViSession vi, ViInt32 maximumTime, ViReal64* reading)
{
  return niDMM_Read(vi, maximumTime, reading);
}

ViStatus ReadMultiPoint(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints)
{
  return niDMM_ReadMultiPoint(vi, maximumTime, arraySize, readingArray, actualNumberOfPoints);
}

ViStatus ReadStatus(ViSession vi, ViInt32* acquisitionBacklog, ViInt16* acquisitionStatus)
{
  return niDMM_ReadStatus(vi, acquisitionBacklog, acquisitionStatus);
}

ViStatus ReadWaveform(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints)
{
  return niDMM_ReadWaveform(vi, maximumTime, arraySize, waveformArray, actualNumberOfPoints);
}

ViStatus Reset(ViSession vi)
{
  return niDMM_reset(vi);
}

ViStatus ResetInterchangeCheck(ViSession vi)
{
  return niDMM_ResetInterchangeCheck(vi);
}

ViStatus ResetWithDefaults(ViSession vi)
{
  return niDMM_ResetWithDefaults(vi);
}

ViStatus RevisionQuery(ViSession vi, ViChar instrumentDriverRevision[256], ViChar firmwareRevision[256])
{
  return niDMM_revision_query(vi, instrumentDriverRevision, firmwareRevision);
}

ViStatus SelfCal(ViSession vi)
{
  return niDMM_SelfCal(vi);
}

ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256])
{
  return niDMM_self_test(vi, selfTestResult, selfTestMessage);
}

ViStatus SendSoftwareTrigger(ViSession vi)
{
  return niDMM_SendSoftwareTrigger(vi);
}

ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue)
{
  return niDMM_SetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue)
{
  return niDMM_SetAttributeViInt32(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue)
{
  return niDMM_SetAttributeViReal64(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue)
{
  return niDMM_SetAttributeViSession(vi, channelName, attributeId, attributeValue);
}

ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViString attributeValue)
{
  return niDMM_SetAttributeViString(vi, channelName, attributeId, attributeValue);
}

}  // namespace nidmm_grpc