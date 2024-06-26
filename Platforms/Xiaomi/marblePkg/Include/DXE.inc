  INF Binaries/marble//XBLCore/XBLCore.inf
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/marble/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/RscRtDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/SCHandlerRtDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF Binaries/marble//Drivers/VerifiedBootDxe/VerifiedBootDxe.inf

  INF Binaries/marble/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/marble/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/marble/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF Binaries/marble//Drivers/VariableDxe/VariableDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF Binaries/marble//Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/marble/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

  INF Binaries/marble/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/marble//Drivers/ProjectInfoDxe/ProjectInfoDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/marble/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/marble/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF Binaries/marble//Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF Binaries/marble/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF Binaries/marble//Drivers/QcomBds/QcomBds.inf
  INF Binaries/marble//Application/QcomChargerApp/QcomChargerApp.inf
  INF MiPkg/Protocol/MiToken/MiToken.inf

  INF Binaries/marble//Drivers/DynamicRAMDxe/DynamicRAMDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

!if $(USE_DISPLAYDXE) == 1
  INF Binaries/marble/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/marble/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  #INF Binaries/marble/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

!if $(USE_DISPLAYDXE) == 1
  INF Binaries/marble/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/marble/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/marble/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/marble/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/marble/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/marble//Drivers/UCDxe/UCDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/marble//Drivers/SecRSADxe/SecRSADxe.inf
  INF Binaries/marble//Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
  INF Binaries/marble/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/ParserDxe/ParserDxe.inf
  INF Binaries/marble/QcomPkg/Drivers/SerialPortDxe/SerialPortDxe.inf