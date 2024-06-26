//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for VISA
//---------------------------------------------------------------------
#ifndef VISA_GRPC_LIBRARY_H
#define VISA_GRPC_LIBRARY_H

#include "visa_library_interface.h"

#include <server/shared_library_interface.h>

#include <memory>

namespace visa_grpc {

class VisaLibrary : public visa_grpc::VisaLibraryInterface {
 public:
  VisaLibrary();
  explicit VisaLibrary(std::shared_ptr<nidevice_grpc::SharedLibraryInterface> shared_library);
  virtual ~VisaLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus AssertIntrSignal(ViSession vi, ViInt16 mode, ViUInt32 statusId) override;
  ViStatus AssertTrigger(ViSession vi, ViUInt16 protocol) override;
  ViStatus AssertUtilSignal(ViSession vi, ViUInt16 mode) override;
  ViStatus Clear(ViSession vi) override;
  ViStatus Close(ViSession vi) override;
  ViStatus CloseEvent(ViEvent eventHandle) override;
  ViStatus DisableEvent(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism) override;
  ViStatus DiscardEvents(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism) override;
  ViStatus EnableEvent(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism, ViEventFilter filterContext) override;
  ViStatus FindNext(ViFindList findHandle, ViChar instrumentDescriptor[256]) override;
  ViStatus FindRsrc(ViSession rsrcManagerHandle, ViConstString expression, ViFindList* findHandle, ViUInt32* returnCount, ViChar instrumentDescriptor[256]) override;
  ViStatus Flush(ViSession vi, ViUInt16 mask) override;
  ViStatus GetAttribute(ViSession vi, ViAttr attributeName, void* attributeValue) override;
  ViStatus GetAttributeEvent(ViEvent eventHandle, ViAttr attributeName, void* attributeValue) override;
  ViStatus GpibCommand(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount) override;
  ViStatus GpibControlATN(ViSession vi, ViUInt16 mode) override;
  ViStatus GpibControlREN(ViSession vi, ViUInt16 mode) override;
  ViStatus GpibPassControl(ViSession vi, ViUInt16 primaryAddress, ViUInt16 secondaryAddress) override;
  ViStatus GpibSendIFC(ViSession vi) override;
  ViStatus In16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt16* value) override;
  ViStatus In32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt32* value) override;
  ViStatus In64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt64* value) override;
  ViStatus In8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt8* value) override;
  ViStatus Lock(ViSession vi, ViAccessMode lockType, ViUInt32 timeout, ViConstKeyId requestedKey, ViChar accessKey[256]) override;
  ViStatus MapAddress(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize mapSize, ViBoolean ownerAccess, ViAddr suggestedAddress, ViAddr* address) override;
  ViStatus MapTrigger(ViSession vi, ViInt16 triggerSource, ViInt16 triggerDestination, ViUInt16 mode) override;
  ViStatus MemAlloc(ViSession vi, ViUInt32 size, ViBusAddress* offset) override;
  ViStatus MemAllocEx(ViSession vi, ViBusSize size, ViBusAddress64* offset) override;
  ViStatus MemFree(ViSession vi, ViBusAddress64 offset) override;
  ViStatus MoveIn16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt16 buffer[]) override;
  ViStatus MoveIn32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt32 buffer[]) override;
  ViStatus MoveIn64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt64 buffer[]) override;
  ViStatus MoveIn8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt8 buffer[]) override;
  ViStatus MoveOut16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt16 buffer[]) override;
  ViStatus MoveOut32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt32 buffer[]) override;
  ViStatus MoveOut64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt64 buffer[]) override;
  ViStatus MoveOut8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt8 buffer[]) override;
  ViStatus Open(ViSession rsrcManagerHandle, ViConstRsrc instrumentDescriptor, ViAccessMode accessMode, ViUInt32 openTimeout, ViSession* vi) override;
  ViStatus OpenDefaultRM(ViSession* rsrcManagerHandle) override;
  ViStatus Out16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt16 value) override;
  ViStatus Out32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt32 value) override;
  ViStatus Out64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt64 value) override;
  ViStatus Out8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt8 value) override;
  ViStatus ParseRsrc(ViSession sessionHandle, ViConstRsrc resourceName, ViUInt16* interfaceType, ViUInt16* interfaceNumber, ViChar resourceClass[256], ViChar expandedUnaliasedName[256], ViChar aliasIfExists[256]) override;
  void Peek16(ViSession vi, ViAddr address, ViUInt16* value) override;
  void Peek32(ViSession vi, ViAddr address, ViUInt32* value) override;
  void Peek64(ViSession vi, ViAddr address, ViUInt64* value) override;
  void Peek8(ViSession vi, ViAddr address, ViUInt8* value) override;
  void Poke16(ViSession vi, ViAddr address, ViUInt16 value) override;
  void Poke32(ViSession vi, ViAddr address, ViUInt32 value) override;
  void Poke64(ViSession vi, ViAddr address, ViUInt64 value) override;
  void Poke8(ViSession vi, ViAddr address, ViUInt8 value) override;
  ViStatus PxiReserveTriggers(ViSession vi, ViInt16 cnt, ViInt16 trigBuses[], ViInt16 trigLines[], ViInt16* failureIndex) override;
  ViStatus Read(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount) override;
  ViStatus ReadAsync(ViSession vi, ViByte readBuffer[], ViUInt32 count, ViJobId* jobIdentifier) override;
  ViStatus ReadSTB(ViSession vi, ViUInt16* statusByte) override;
  ViStatus SetAttribute(ViSession vi, ViAttr attributeName, ViAttrState attributeValue) override;
  ViStatus SetBuf(ViSession vi, ViUInt16 mask, ViUInt32 bufferSize) override;
  ViStatus StatusDesc(ViSession vi, ViStatus statusValue, ViChar statusDescription[256]) override;
  ViStatus Terminate(ViSession vi, ViUInt16 degree, ViJobId jobIdentifier) override;
  ViStatus Unlock(ViSession vi) override;
  ViStatus UnmapAddress(ViSession vi) override;
  ViStatus UnmapTrigger(ViSession vi, ViInt16 triggerSource, ViInt16 triggerDestination) override;
  ViStatus UsbControlIn(ViSession vi, ViInt16 bmRequestType, ViInt16 bRequest, ViUInt16 wValue, ViUInt16 wIndex, ViUInt16 wLength, ViByte buffer[], ViUInt16* returnCount) override;
  ViStatus UsbControlOut(ViSession vi, ViInt16 bmRequestType, ViInt16 bRequest, ViUInt16 wValue, ViUInt16 wIndex, ViUInt16 wLength, ViByte buffer[]) override;
  ViStatus VxiCommandQuery(ViSession vi, ViUInt16 mode, ViUInt32 command, ViUInt32* commandResponse) override;
  ViStatus WaitOnEvent(ViSession vi, ViEventType inEventType, ViUInt32 timeout, ViEventType* outEventType, ViEvent* eventHandle) override;
  ViStatus Write(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount) override;
  ViStatus WriteAsync(ViSession vi, ViByte buffer[], ViUInt32 count, ViJobId* jobIdentifier) override;

 private:
  using AssertIntrSignalPtr = decltype(&viAssertIntrSignal);
  using AssertTriggerPtr = decltype(&viAssertTrigger);
  using AssertUtilSignalPtr = decltype(&viAssertUtilSignal);
  using ClearPtr = decltype(&viClear);
  using ClosePtr = decltype(&viClose);
  using CloseEventPtr = decltype(&viClose);
  using DisableEventPtr = decltype(&viDisableEvent);
  using DiscardEventsPtr = decltype(&viDiscardEvents);
  using EnableEventPtr = decltype(&viEnableEvent);
  using FindNextPtr = ViStatus (*)(ViFindList findHandle, ViChar instrumentDescriptor[256]);
  using FindRsrcPtr = decltype(&viFindRsrc);
  using FlushPtr = decltype(&viFlush);
  using GetAttributePtr = decltype(&viGetAttribute);
  using GetAttributeEventPtr = decltype(&viGetAttribute);
  using GpibCommandPtr = decltype(&viGpibCommand);
  using GpibControlATNPtr = decltype(&viGpibControlATN);
  using GpibControlRENPtr = decltype(&viGpibControlREN);
  using GpibPassControlPtr = decltype(&viGpibPassControl);
  using GpibSendIFCPtr = decltype(&viGpibSendIFC);
  using In16Ptr = decltype(&viIn16Ex);
  using In32Ptr = decltype(&viIn32Ex);
  using In64Ptr = decltype(&viIn64Ex);
  using In8Ptr = decltype(&viIn8Ex);
  using LockPtr = decltype(&viLock);
  using MapAddressPtr = decltype(&viMapAddressEx);
  using MapTriggerPtr = decltype(&viMapTrigger);
  using MemAllocPtr = decltype(&viMemAlloc);
  using MemAllocExPtr = decltype(&viMemAllocEx);
  using MemFreePtr = decltype(&viMemFreeEx);
  using MoveIn16Ptr = decltype(&viMoveIn16Ex);
  using MoveIn32Ptr = decltype(&viMoveIn32Ex);
  using MoveIn64Ptr = decltype(&viMoveIn64Ex);
  using MoveIn8Ptr = decltype(&viMoveIn8Ex);
  using MoveOut16Ptr = decltype(&viMoveOut16Ex);
  using MoveOut32Ptr = decltype(&viMoveOut32Ex);
  using MoveOut64Ptr = decltype(&viMoveOut64Ex);
  using MoveOut8Ptr = decltype(&viMoveOut8Ex);
  using OpenPtr = decltype(&viOpen);
  using OpenDefaultRMPtr = ViStatus (*)(ViSession* rsrcManagerHandle);
  using Out16Ptr = decltype(&viOut16Ex);
  using Out32Ptr = decltype(&viOut32Ex);
  using Out64Ptr = decltype(&viOut64Ex);
  using Out8Ptr = decltype(&viOut8Ex);
  using ParseRsrcPtr = decltype(&viParseRsrcEx);
  using Peek16Ptr = decltype(&viPeek16);
  using Peek32Ptr = decltype(&viPeek32);
  using Peek64Ptr = decltype(&viPeek64);
  using Peek8Ptr = decltype(&viPeek8);
  using Poke16Ptr = decltype(&viPoke16);
  using Poke32Ptr = decltype(&viPoke32);
  using Poke64Ptr = decltype(&viPoke64);
  using Poke8Ptr = decltype(&viPoke8);
  using PxiReserveTriggersPtr = decltype(&viPxiReserveTriggers);
  using ReadPtr = decltype(&viRead);
  using ReadAsyncPtr = decltype(&viReadAsync);
  using ReadSTBPtr = decltype(&viReadSTB);
  using SetAttributePtr = decltype(&viSetAttribute);
  using SetBufPtr = decltype(&viSetBuf);
  using StatusDescPtr = decltype(&viStatusDesc);
  using TerminatePtr = decltype(&viTerminate);
  using UnlockPtr = decltype(&viUnlock);
  using UnmapAddressPtr = decltype(&viUnmapAddress);
  using UnmapTriggerPtr = decltype(&viUnmapTrigger);
  using UsbControlInPtr = decltype(&viUsbControlIn);
  using UsbControlOutPtr = decltype(&viUsbControlOut);
  using VxiCommandQueryPtr = decltype(&viVxiCommandQuery);
  using WaitOnEventPtr = decltype(&viWaitOnEvent);
  using WritePtr = decltype(&viWrite);
  using WriteAsyncPtr = decltype(&viWriteAsync);

  typedef struct FunctionPointers {
    AssertIntrSignalPtr AssertIntrSignal;
    AssertTriggerPtr AssertTrigger;
    AssertUtilSignalPtr AssertUtilSignal;
    ClearPtr Clear;
    ClosePtr Close;
    CloseEventPtr CloseEvent;
    DisableEventPtr DisableEvent;
    DiscardEventsPtr DiscardEvents;
    EnableEventPtr EnableEvent;
    FindNextPtr FindNext;
    FindRsrcPtr FindRsrc;
    FlushPtr Flush;
    GetAttributePtr GetAttribute;
    GetAttributeEventPtr GetAttributeEvent;
    GpibCommandPtr GpibCommand;
    GpibControlATNPtr GpibControlATN;
    GpibControlRENPtr GpibControlREN;
    GpibPassControlPtr GpibPassControl;
    GpibSendIFCPtr GpibSendIFC;
    In16Ptr In16;
    In32Ptr In32;
    In64Ptr In64;
    In8Ptr In8;
    LockPtr Lock;
    MapAddressPtr MapAddress;
    MapTriggerPtr MapTrigger;
    MemAllocPtr MemAlloc;
    MemAllocExPtr MemAllocEx;
    MemFreePtr MemFree;
    MoveIn16Ptr MoveIn16;
    MoveIn32Ptr MoveIn32;
    MoveIn64Ptr MoveIn64;
    MoveIn8Ptr MoveIn8;
    MoveOut16Ptr MoveOut16;
    MoveOut32Ptr MoveOut32;
    MoveOut64Ptr MoveOut64;
    MoveOut8Ptr MoveOut8;
    OpenPtr Open;
    OpenDefaultRMPtr OpenDefaultRM;
    Out16Ptr Out16;
    Out32Ptr Out32;
    Out64Ptr Out64;
    Out8Ptr Out8;
    ParseRsrcPtr ParseRsrc;
    Peek16Ptr Peek16;
    Peek32Ptr Peek32;
    Peek64Ptr Peek64;
    Peek8Ptr Peek8;
    Poke16Ptr Poke16;
    Poke32Ptr Poke32;
    Poke64Ptr Poke64;
    Poke8Ptr Poke8;
    PxiReserveTriggersPtr PxiReserveTriggers;
    ReadPtr Read;
    ReadAsyncPtr ReadAsync;
    ReadSTBPtr ReadSTB;
    SetAttributePtr SetAttribute;
    SetBufPtr SetBuf;
    StatusDescPtr StatusDesc;
    TerminatePtr Terminate;
    UnlockPtr Unlock;
    UnmapAddressPtr UnmapAddress;
    UnmapTriggerPtr UnmapTrigger;
    UsbControlInPtr UsbControlIn;
    UsbControlOutPtr UsbControlOut;
    VxiCommandQueryPtr VxiCommandQuery;
    WaitOnEventPtr WaitOnEvent;
    WritePtr Write;
    WriteAsyncPtr WriteAsync;
  } FunctionLoadStatus;

  std::shared_ptr<nidevice_grpc::SharedLibraryInterface> shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace visa_grpc

#endif  // VISA_GRPC_LIBRARY_H
