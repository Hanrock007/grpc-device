//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-SYNC
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_LIBRARY_WRAPPER_H
#define NISYNC_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <nisync.h>

namespace nisync_grpc {

class NiSyncLibraryInterface {
 public:
  virtual ~NiSyncLibraryInterface() {}

  virtual ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi) = 0;
  virtual ViStatus Close(ViSession vi) = 0;
  virtual ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus Reset(ViSession vi) = 0;
  virtual ViStatus PersistConfig(ViSession vi) = 0;
  virtual ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]) = 0;
  virtual ViStatus RevisionQuery(ViSession vi, ViChar driverRevision[256], ViChar firmwareRevision[256]) = 0;
  virtual ViStatus ConnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge) = 0;
  virtual ViStatus DisconnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal) = 0;
  virtual ViStatus ConnectSWTrigToTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge, ViReal64 delay) = 0;
  virtual ViStatus DisconnectSWTrigFromTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal) = 0;
  virtual ViStatus SendSoftwareTrigger(ViSession vi, ViConstString srcTerminal) = 0;
  virtual ViStatus ConnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal) = 0;
  virtual ViStatus DisconnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal) = 0;
  virtual ViStatus MeasureFrequency(ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViReal64* actualDuration, ViReal64* frequency, ViReal64* error) = 0;
  virtual ViStatus MeasureFrequencyEx(ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViUInt32 decimationCount, ViReal64* actualDuration, ViReal64* frequency, ViReal64* frequencyError) = 0;
  virtual ViStatus Start1588(ViSession vi) = 0;
  virtual ViStatus Stop1588(ViSession vi) = 0;
  virtual ViStatus Start8021AS(ViSession vi) = 0;
  virtual ViStatus Stop8021AS(ViSession vi) = 0;
  virtual ViStatus SetTime(ViSession vi, ViInt32 timeSource, ViUInt32 timeSeconds, ViUInt32 timeNanoseconds, ViUInt16 timeFractionalNanoseconds) = 0;
  virtual ViStatus GetTime(ViSession vi, ViUInt32* timeSeconds, ViUInt32* timeNanoseconds, ViUInt16* timeFractionalNanoseconds) = 0;
  virtual ViStatus ResetFrequency(ViSession vi) = 0;
  virtual ViStatus CreateFutureTimeEvent(ViSession vi, ViConstString terminal, ViInt32 outputLevel, ViUInt32 timeSeconds, ViUInt32 timeNanoseconds, ViUInt16 timeFractionalNanoseconds) = 0;
  virtual ViStatus ClearFutureTimeEvents(ViSession vi, ViConstString terminal) = 0;
  virtual ViStatus EnableTimeStampTrigger(ViSession vi, ViConstString terminal, ViInt32 activeEdge) = 0;
  virtual ViStatus EnableTimeStampTriggerWithDecimation(ViSession vi, ViConstString terminal, ViInt32 activeEdge, ViUInt32 decimationCount) = 0;
  virtual ViStatus ReadTriggerTimeStamp(ViSession vi, ViConstString terminal, ViReal64 timeout, ViUInt32* timeSeconds, ViUInt32* timeNanoseconds, ViUInt16* timeFractionalNanoseconds, ViInt32* detectedEdge) = 0;
  virtual ViStatus ReadMultipleTriggerTimeStamp(ViSession vi, ViConstString terminal, ViUInt32 timestampsToRead, ViReal64 timeout, ViUInt32 timeSecondsBuffer[], ViUInt32 timeNanosecondsBuffer[], ViUInt16 timeFractionalNanosecondsBuffer[], ViInt32 detectedEdgeBuffer[], ViUInt32* timestampsRead) = 0;
  virtual ViStatus DisableTimeStampTrigger(ViSession vi, ViConstString terminal) = 0;
  virtual ViStatus CreateClock(ViSession vi, ViConstString terminal, ViUInt32 highTicks, ViUInt32 lowTicks, ViUInt32 startTimeSeconds, ViUInt32 startTimeNanoseconds, ViUInt16 startTimeFractionalNanoseconds, ViUInt32 stopTimeSeconds, ViUInt32 stopTimeNanoseconds, ViUInt16 stopTimeFractionalNanoseconds) = 0;
  virtual ViStatus ClearClock(ViSession vi, ViConstString terminal) = 0;
  virtual ViStatus SetTimeReferenceFreeRunning(ViSession vi) = 0;
  virtual ViStatus SetTimeReferenceGPS(ViSession vi) = 0;
  virtual ViStatus SetTimeReferenceIRIG(ViSession vi, ViInt32 irigType, ViConstString terminalName) = 0;
  virtual ViStatus SetTimeReferencePPS(ViSession vi, ViConstString terminalName, ViBoolean useManualTime, ViUInt32 initialTimeSeconds, ViUInt32 initialTimeNanoseconds, ViUInt16 initialTimeFractionalNanoseconds) = 0;
  virtual ViStatus SetTimeReference1588OrdinaryClock(ViSession vi) = 0;
  virtual ViStatus SetTimeReference8021AS(ViSession vi) = 0;
  virtual ViStatus EnableGPSTimestamping(ViSession vi) = 0;
  virtual ViStatus EnableIRIGTimestamping(ViSession vi, ViInt32 irigType, ViConstString terminalName) = 0;
  virtual ViStatus ReadLastGPSTimestamp(ViSession vi, ViUInt32* timestampSeconds, ViUInt32* timestampNanoseconds, ViUInt16* timestampFractionalNanoseconds, ViUInt32* gpsSeconds, ViUInt32* gpsNanoseconds, ViUInt16* gpsFractionalNanoseconds) = 0;
  virtual ViStatus ReadLastIRIGTimestamp(ViSession vi, ViConstString terminal, ViUInt32* timestampSeconds, ViUInt32* timestampNanoseconds, ViUInt16* timestampFractionalNanoseconds, ViUInt32* irigbSeconds, ViUInt32* irigbNanoseconds, ViUInt16* irigbFractionalNanoseconds) = 0;
  virtual ViStatus DisableGPSTimestamping(ViSession vi) = 0;
  virtual ViStatus DisableIRIGTimestamping(ViSession vi, ViConstString terminalName) = 0;
  virtual ViStatus GetVelocity(ViSession vi, ViReal64* eastVelocity, ViReal64* northVelocity, ViReal64* upVelocity) = 0;
  virtual ViStatus GetLocation(ViSession vi, ViReal64* latitude, ViReal64* longitude, ViReal64* altitude) = 0;
  virtual ViStatus GetTimeReferenceNames(ViSession vi, ViUInt32 bufferSize, ViChar timeReferenceNames[]) = 0;
  virtual ViStatus GetAttributeViInt32(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32* value) = 0;
  virtual ViStatus GetAttributeViReal64(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64* value) = 0;
  virtual ViStatus GetAttributeViBoolean(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean* value) = 0;
  virtual ViStatus GetAttributeViString(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 bufferSize, ViChar value[]) = 0;
  virtual ViStatus SetAttributeViInt32(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 value) = 0;
  virtual ViStatus SetAttributeViReal64(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64 value) = 0;
  virtual ViStatus SetAttributeViBoolean(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean value) = 0;
  virtual ViStatus SetAttributeViString(ViSession vi, ViConstString activeItem, ViAttr attribute, ViConstString value) = 0;
  virtual ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temp) = 0;
  virtual ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months) = 0;
  virtual ViStatus ChangeExtCalPassword(ViSession vi, ViConstString oldPassword, ViConstString newPassword) = 0;
  virtual ViStatus ReadCurrentTemperature(ViSession vi, ViReal64* temperature) = 0;
  virtual ViStatus CalGetOscillatorVoltage(ViSession vi, ViReal64* voltage) = 0;
  virtual ViStatus CalGetClk10PhaseVoltage(ViSession vi, ViReal64* voltage) = 0;
  virtual ViStatus CalGetDDSStartPulsePhaseVoltage(ViSession vi, ViReal64* voltage) = 0;
  virtual ViStatus CalGetDDSInitialPhase(ViSession vi, ViReal64* phase) = 0;
  virtual ViStatus InitExtCal(ViRsrc resourceName, ViConstString password, ViSession* vi) = 0;
  virtual ViStatus CloseExtCal(ViSession vi, ViInt32 action) = 0;
  virtual ViStatus CalAdjustOscillatorVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage) = 0;
  virtual ViStatus CalAdjustClk10PhaseVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage) = 0;
  virtual ViStatus CalAdjustDDSStartPulsePhaseVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage) = 0;
  virtual ViStatus CalAdjustDDSInitialPhase(ViSession vi, ViReal64 measuredPhase, ViReal64* oldPhase) = 0;
};

}  // namespace nisync_grpc
#endif  // NISYNC_GRPC_LIBRARY_WRAPPER_H
