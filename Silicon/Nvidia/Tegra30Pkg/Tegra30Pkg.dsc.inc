##
#
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

[Defines]
  USE_CUSTOM_GIC     = 0             # Might be needed Later?
  USE_CUSTOM_TIMER   = 1
  USE_PHYSICAL_TIMER = 1

[PcdsFixedAtBuild]
  # Timer
  gNvidiaPkgTokenSpaceGuid.PcdTegraTimerInterrupt1|32
  gNvidiaPkgTokenSpaceGuid.PcdTegraTimerInterrupt2|33
  gNvidiaPkgTokenSpaceGuid.PcdTegraTimerInterrupt3|74
  gNvidiaPkgTokenSpaceGuid.PcdTegraTimerInterrupt4|75
  gNvidiaPkgTokenSpaceGuid.PcdTegraTimerInterrupt5|154
  gNvidiaPkgTokenSpaceGuid.PcdTegraTimerInterrupt6|155

  # GIC
  gArmTokenSpaceGuid.PcdGicDistributorBase|0x50041000
  gArmTokenSpaceGuid.PcdGicRedistributorsBase|0x50040100
  gArmTokenSpaceGuid.PcdGicInterruptInterfaceBase|0x50040100

  # ACPI
  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultOemRevision|0x00000030

  # SmBios
!if $(SOC_TYPE) == 0
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Tegra (TM) 3 @ 1.30 GHz"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"T30L"
!elseif $(SOC_TYPE) == 1
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Tegra (TM) 3 @ 1.50 GHz"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"T30"
!elseif $(SOC_TYPE) == 2
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Tegra (TM) 3 @ 1.50 GHz"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"AP33"
!elseif $(SOC_TYPE) == 3
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Tegra (TM) 3 @ 1.70 GHz"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"T33"
!endif

  # CPU (5 Cores Actually)
  gArmPlatformTokenSpaceGuid.PcdCoreCount|4
  gArmPlatformTokenSpaceGuid.PcdClusterCount|1

[LibraryClasses]
  PlatformPeiLib|Tegra30Pkg/Library/PlatformPeiLib/PlatformPeiLib.inf
  PlatformPrePiLib|Tegra30Pkg/Library/PlatformPrePiLib/PlatformPrePiLib.inf
  HwResetSystemLib|ArmPkg/Library/ArmSmcPsciResetSystemLib/ArmSmcPsciResetSystemLib.inf
  ResetSystemLib|ArmPkg/Library/ArmSmcPsciResetSystemLib/ArmSmcPsciResetSystemLib.inf
  SoCPlatformLib|Tegra30Pkg/Library/SoCPlatformLib/SoCPlatformLib.inf

[Components]
  Tegra30Pkg/Drivers/SmBiosTableDxe/SmBiosTableDxe.inf
  Tegra30Pkg/Applications/UEFILoader/UEFILoader.inf {
    <LibraryClasses>
    !if $(TARGET) == DEBUG
      DebugLib|MdePkg/Library/UefiDebugLibConOut/UefiDebugLibConOut.inf
    !else
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
      SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
    !endif
  }

!include NvidiaPkg/NvidiaPkg.dsc.inc
