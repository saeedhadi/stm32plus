/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013,2014 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once

/**
 * @file
 * This config file gets you access to the internal flash memory device. Please note that the internal flash
 * on all STM32 models is rated for 10000 erase/program operations on each page.
 */

// internal flash depends on CRC

#include "config/crc.h"

// device specific implementation

#if defined(STM32PLUS_F0)

  #include "flash/internal/f0/features/InternalFlashWriteFeature.h"

#elif defined(STM32PLUS_F4)

  #include "flash/internal/f4/InternalFlashVoltageRange.h"
  #include "flash/internal/f4/InternalFlashSectorMap.h"
  #include "flash/internal/f4/features/InternalFlashWriteFeature.h"

#endif

// main classes

#include "flash/internal/InternalFlashDevice.h"

// generic features

#include "flash/internal/features/InternalFlashLockFeature.h"

// general utilities

#include "flash/internal/InternalFlashWordWriter.h"
#include "flash/internal/InternalFlashSettingsStorage.h"