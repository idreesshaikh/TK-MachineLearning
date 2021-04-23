/**
  ******************************************************************************
  * @file    simplenn_data.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Apr 22 17:22:55 2021
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef SIMPLENN_DATA_H
#define SIMPLENN_DATA_H
#pragma once

#include "simplenn_config.h"
#include "ai_platform.h"

#define AI_SIMPLENN_DATA_CONFIG           AI_HANDLE_NULL

#define AI_SIMPLENN_DATA_ACTIVATIONS_SIZE     (96)

#define AI_SIMPLENN_DATA_WEIGHTS_SIZE         (4848)

#define AI_SIMPLENN_DATA_ACTIVATIONS(ptr_)  \
  AI_BUFFER_OBJ_INIT( \
    AI_BUFFER_FORMAT_U8, \
    1, 1, AI_SIMPLENN_DATA_ACTIVATIONS_SIZE, 1, \
    AI_HANDLE_PTR(ptr_) )

#define AI_SIMPLENN_DATA_WEIGHTS(ptr_)  \
  AI_BUFFER_OBJ_INIT( \
    AI_BUFFER_FORMAT_U8|AI_BUFFER_FMT_FLAG_CONST, \
    1, 1, AI_SIMPLENN_DATA_WEIGHTS_SIZE, 1, \
    AI_HANDLE_PTR(ptr_) )


AI_API_DECLARE_BEGIN

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup simplenn_data
 * @return a ai_handle pointer to the weights array
 */
AI_API_ENTRY
ai_handle ai_simplenn_data_weights_get(void);

AI_ALIGNED(32)
static ai_u8 s_simplenn_weights[4848] = {
    0xca, 0x01, 0x20, 0xbe, 0x08, 0x1f, 0x97, 0xbe, 0xc0, 0x91,
    0x1f, 0x3c, 0x7a, 0xb1, 0x61, 0x3e, 0x80, 0x9a, 0xdf, 0xbc,
    0x0c, 0x16, 0x0e, 0xbe, 0x28, 0x9c, 0xab, 0xbe, 0x51, 0xf6,
    0x9d, 0x3e, 0xb7, 0xd4, 0x14, 0xbe, 0xc0, 0xcd, 0xdd, 0x3b,
    0xfe, 0x03, 0x4f, 0x3e, 0xfc, 0x49, 0xa0, 0xbe, 0x77, 0x31,
    0x92, 0x3e, 0xfc, 0x29, 0x8c, 0xbe, 0xab, 0x16, 0x8d, 0x3e,
    0xa1, 0xe6, 0x85, 0x3e, 0x40, 0xe9, 0x56, 0xbd, 0x2e, 0xa5,
    0x36, 0xbe, 0xea, 0xca, 0x68, 0xbe, 0x20, 0x9f, 0x4e, 0x3c,
    0x44, 0x7e, 0x1d, 0xbe, 0xf4, 0xcb, 0xa1, 0xbd, 0x32, 0xc8,
    0x5a, 0x3e, 0x04, 0x7f, 0x70, 0xbe, 0x2a, 0x57, 0x64, 0x3e,
    0x93, 0xfd, 0x89, 0x3e, 0x44, 0xf5, 0x24, 0xbe, 0xb0, 0xc6,
    0x56, 0x3d, 0xa6, 0xa3, 0x95, 0xbe, 0x92, 0x53, 0xf0, 0xbd,
    0xe0, 0x3a, 0x91, 0xbd, 0xc4, 0x79, 0x9f, 0x3d, 0xe1, 0xe3,
    0xa8, 0xbe, 0x62, 0x07, 0x7b, 0x3e, 0x32, 0xba, 0xd6, 0xbd,
    0x2d, 0xd4, 0x9d, 0x3e, 0xa0, 0xd6, 0x56, 0xbe, 0xa2, 0xa3,
    0x49, 0x3e, 0xba, 0xb9, 0x66, 0x3e, 0xbe, 0xc5, 0x0d, 0x3e,
    0x1c, 0x5a, 0x19, 0x3e, 0xe0, 0x78, 0xfc, 0xbd, 0xd8, 0xc3,
    0x7d, 0x3d, 0x84, 0x83, 0x72, 0xbe, 0x24, 0x4f, 0x6a, 0x3e,
    0x08, 0xbc, 0xa8, 0xbd, 0x60, 0xac, 0x2d, 0x3e, 0x58, 0x57,
    0x0e, 0x3d, 0xca, 0x52, 0x75, 0x3e, 0x1c, 0xe4, 0x09, 0x3e,
    0xfa, 0x77, 0x26, 0xbe, 0x98, 0xc4, 0x93, 0x3d, 0x68, 0x1f,
    0x0a, 0x3e, 0x08, 0x0c, 0xac, 0xbd, 0xdc, 0x96, 0x9e, 0xbd,
    0xbc, 0x38, 0x57, 0xbe, 0xbc, 0x5a, 0xee, 0x3d, 0xa0, 0xcb,
    0x16, 0xbd, 0x08, 0xae, 0x3a, 0xbe, 0xd8, 0x24, 0x3c, 0x3e,
    0xd0, 0x3d, 0xdc, 0xbc, 0x94, 0x4f, 0x68, 0xbe, 0x80, 0x5b,
    0xaa, 0x3d, 0xc0, 0x48, 0x02, 0x3e, 0x02, 0xd3, 0x48, 0xbe,
    0x68, 0x5f, 0xe4, 0xbd, 0x60, 0x3b, 0xa1, 0x3c, 0xc8, 0xf7,
    0x70, 0x3d, 0xb4, 0x06, 0xd1, 0xbd, 0x60, 0xc0, 0xe6, 0x3c,
    0x76, 0xfc, 0x27, 0xbe, 0x5a, 0xc1, 0x50, 0x3e, 0xb0, 0xcd,
    0x86, 0xbd, 0x5a, 0x4a, 0x6e, 0xbe, 0xc0, 0xb5, 0x45, 0xbd,
    0x3c, 0x10, 0x84, 0x3d, 0x90, 0x4f, 0x3a, 0x3d, 0x54, 0xb2,
    0x60, 0x3e, 0xda, 0xd1, 0x44, 0x3e, 0xac, 0x35, 0xd5, 0xbd,
    0x18, 0x7d, 0xd6, 0xbd, 0x60, 0x93, 0x87, 0xbd, 0x7c, 0xb8,
    0x95, 0xbd, 0x44, 0xd4, 0xc0, 0x3d, 0x7a, 0x4d, 0x0c, 0x3e,
    0xd8, 0x2d, 0x50, 0x3e, 0x5a, 0x80, 0x20, 0xbe, 0x46, 0x51,
    0x1e, 0x3e, 0xa0, 0x66, 0x5a, 0xbe, 0xc4, 0xef, 0x4e, 0xbe,
    0xa0, 0x0f, 0x72, 0x3e, 0x58, 0xe5, 0xb4, 0x3d, 0x48, 0x2a,
    0xd9, 0xbd, 0x7a, 0x2a, 0x00, 0xbe, 0x00, 0x75, 0xcb, 0x3b,
    0xcc, 0xe7, 0xfa, 0x3d, 0x22, 0x99, 0x3a, 0x3e, 0x4e, 0xa3,
    0x4a, 0xbe, 0x2c, 0xde, 0xd8, 0xbd, 0xe8, 0x90, 0x41, 0xbd,
    0x80, 0x4a, 0xd5, 0xbd, 0x20, 0x8d, 0x5e, 0xbc, 0x18, 0xfe,
    0x1d, 0x3d, 0x38, 0x64, 0xff, 0xbd, 0xe0, 0x6b, 0x7f, 0x3e,
    0x5c, 0xce, 0x74, 0xbe, 0x2e, 0x2e, 0x23, 0xbe, 0x8a, 0x44,
    0x19, 0x3e, 0x20, 0x40, 0x00, 0xbd, 0x24, 0x42, 0x21, 0xbe,
    0xec, 0xca, 0x9b, 0xbd, 0x68, 0x45, 0x2d, 0xbd, 0xfa, 0x0b,
    0x3e, 0xbe, 0x80, 0x93, 0x35, 0x3c, 0x70, 0x15, 0xa6, 0xbc,
    0x4c, 0x9a, 0x2c, 0x3e, 0x80, 0xef, 0x5c, 0xbb, 0x04, 0x93,
    0x25, 0x3e, 0xdc, 0x47, 0x4d, 0xbe, 0x00, 0xc5, 0x18, 0x3b,
    0xf4, 0x4b, 0x32, 0xbe, 0xd0, 0x0b, 0x44, 0xbe, 0xbe, 0x98,
    0x10, 0x3e, 0xae, 0xbb, 0x69, 0x3e, 0xba, 0x6d, 0x4f, 0x3e,
    0x74, 0xc1, 0x8d, 0xbd, 0x20, 0xf6, 0xe5, 0xbc, 0xb6, 0x75,
    0x39, 0x3e, 0x2a, 0xd3, 0x68, 0x3e, 0x7a, 0xce, 0x1a, 0xbe,
    0x3a, 0xf3, 0x37, 0x3e, 0x98, 0xc8, 0x9a, 0x3d, 0x00, 0x41,
    0x57, 0xbb, 0x7e, 0xbc, 0x42, 0xbe, 0xc8, 0x61, 0x40, 0xbe,
    0x92, 0xa6, 0x14, 0x3e, 0x58, 0x64, 0x1d, 0x3d, 0x50, 0x88,
    0xf1, 0x3c, 0x28, 0x6c, 0x2d, 0x3d, 0x5e, 0x3d, 0x10, 0xbe,
    0x3c, 0xda, 0xd7, 0x3d, 0xa2, 0xba, 0x7d, 0x3e, 0xf2, 0x9a,
    0x0e, 0x3e, 0x6e, 0xdb, 0x58, 0xbe, 0x40, 0x0e, 0xb4, 0xbb,
    0x54, 0x23, 0x07, 0xbe, 0x9a, 0x97, 0x06, 0xbe, 0x68, 0x7a,
    0x06, 0x3e, 0x00, 0xa3, 0x36, 0x3b, 0xe0, 0x1b, 0x98, 0xbd,
    0x60, 0x8d, 0x70, 0xbd, 0x82, 0x14, 0x18, 0x3e, 0x48, 0x9f,
    0x97, 0xbd, 0x00, 0xb9, 0xe4, 0x3d, 0x8c, 0x87, 0x4e, 0x3e,
    0xc6, 0xbb, 0x7d, 0x3e, 0xfc, 0x83, 0xe1, 0x3d, 0x18, 0xba,
    0x21, 0xbe, 0x6c, 0xe7, 0x64, 0xbe, 0x62, 0x7f, 0x07, 0xbe,
    0x3c, 0xef, 0x5b, 0x3e, 0x04, 0x37, 0x67, 0x3e, 0xf8, 0x86,
    0xa6, 0x3d, 0x36, 0x19, 0x73, 0xbe, 0x74, 0x55, 0x5a, 0xbe,
    0x06, 0x4c, 0x43, 0x3e, 0x80, 0x14, 0xdc, 0x3d, 0x00, 0x00,
    0xae, 0xbc, 0x60, 0xb5, 0x7f, 0xbd, 0x10, 0x6c, 0x60, 0x3e,
    0x38, 0xbf, 0x47, 0xbd, 0x04, 0x0f, 0x3d, 0xbe, 0x78, 0xd2,
    0x1b, 0xbd, 0xc0, 0xea, 0x52, 0xbd, 0xc0, 0x48, 0xc8, 0x3d,
    0xda, 0xb6, 0xa4, 0x3d, 0xa0, 0x73, 0x8a, 0xbd, 0x60, 0x0a,
    0x93, 0xbd, 0x60, 0xa7, 0x14, 0xbd, 0x60, 0x65, 0xa1, 0x3d,
    0x30, 0x16, 0x08, 0xbc, 0x70, 0x74, 0x4b, 0xbd, 0x9e, 0x8e,
    0xdb, 0x3d, 0x90, 0x19, 0x30, 0xbc, 0xc0, 0xd2, 0x8b, 0xbc,
    0x2a, 0x4c, 0xac, 0xbd, 0x62, 0x2b, 0x8b, 0xbd, 0xa8, 0x79,
    0xf0, 0xbc, 0x7e, 0x02, 0xeb, 0xbd, 0x80, 0xbc, 0xdc, 0x3b,
    0x9c, 0x08, 0x51, 0x3d, 0x3c, 0x7b, 0x7a, 0xbd, 0xa8, 0x0a,
    0x16, 0xbd, 0x1a, 0x18, 0x9f, 0x3d, 0x9a, 0x56, 0xa7, 0x3d,
    0xe8, 0x8a, 0x90, 0xbd, 0x02, 0xac, 0xc0, 0x3d, 0x40, 0x4a,
    0x55, 0xbb, 0xa8, 0x0d, 0x62, 0x3d, 0xd0, 0x8b, 0x8c, 0xbd,
    0x48, 0x19, 0x36, 0xbd, 0x60, 0x4f, 0xb9, 0x3c, 0xf0, 0x3c,
    0x30, 0x3c, 0x30, 0x6f, 0x33, 0x3d, 0x8c, 0x24, 0xba, 0xbd,
    0x5a, 0x99, 0xd6, 0x3d, 0x8e, 0x1a, 0x81, 0xbd, 0xfc, 0x06,
    0x89, 0x3d, 0x00, 0x80, 0xd5, 0x3d, 0x42, 0x29, 0xf6, 0x3d,
    0x68, 0xff, 0x83, 0x3d, 0xc4, 0x46, 0x4a, 0x3d, 0xe8, 0x84,
    0x0f, 0xbd, 0x1c, 0xb6, 0x4e, 0xbd, 0x08, 0xb9, 0x9f, 0xbd,
    0xd4, 0x8b, 0x7f, 0xbd, 0x56, 0x40, 0xfd, 0x3d, 0x6c, 0x12,
    0x0e, 0xbd, 0xa0, 0x88, 0xee, 0x3d, 0x4e, 0xcd, 0xdf, 0x3d,
    0x9c, 0x84, 0xc2, 0x3d, 0xe8, 0xec, 0xf9, 0x3d, 0xcc, 0xf1,
    0x3d, 0xbd, 0x8c, 0x6f, 0xe3, 0x3d, 0xcc, 0x02, 0x6d, 0xbd,
    0xfc, 0x10, 0x59, 0xbd, 0xf0, 0xa9, 0xc4, 0xbc, 0x20, 0x24,
    0x22, 0xbc, 0x00, 0x1c, 0x19, 0x39, 0x0c, 0xba, 0x1e, 0x3d,
    0x90, 0xe0, 0x06, 0x3d, 0x34, 0x0f, 0x9b, 0x3d, 0xe0, 0x44,
    0xb9, 0xbb, 0xd8, 0xc9, 0x8d, 0xbc, 0x84, 0x19, 0x8b, 0x3d,
    0xf0, 0xcb, 0xd1, 0x3d, 0x8a, 0x92, 0x80, 0xbd, 0xa8, 0x19,
    0x2c, 0xbd, 0xb0, 0x4a, 0xba, 0xbc, 0x06, 0xf0, 0x8e, 0xbd,
    0x48, 0x47, 0x83, 0xbd, 0x22, 0x05, 0xea, 0xbd, 0x30, 0xb6,
    0x0c, 0x3c, 0x84, 0x69, 0xed, 0xbd, 0xb2, 0xf2, 0xc8, 0x3d,
    0xb0, 0x26, 0x77, 0xbc, 0x6c, 0x08, 0xff, 0x3d, 0x04, 0x83,
    0x3f, 0xbd, 0x2c, 0x20, 0x4e, 0x3d, 0xc0, 0xa1, 0xe9, 0x3b,
    0xf6, 0x77, 0x98, 0xbd, 0x58, 0xf9, 0xd9, 0x3d, 0x98, 0x23,
    0xf5, 0x3c, 0x66, 0x21, 0xb7, 0x3d, 0xc0, 0x4c, 0x9e, 0xbb,
    0x52, 0x6f, 0xb5, 0x3d, 0xf6, 0x37, 0xab, 0x3d, 0x54, 0xff,
    0x9d, 0xbd, 0x50, 0x20, 0x4c, 0x3c, 0xdc, 0xf5, 0x0a, 0x3d,
    0xd2, 0x2c, 0xad, 0x3d, 0xbe, 0x56, 0xa7, 0x3d, 0xa0, 0x8c,
    0x01, 0x3d, 0x20, 0x9a, 0xcc, 0x3d, 0x00, 0xc2, 0x5d, 0xbc,
    0x18, 0x26, 0x91, 0xbc, 0x48, 0x4e, 0xc8, 0x3d, 0xd4, 0xd5,
    0xe9, 0x3d, 0x48, 0x8f, 0xd7, 0xbc, 0x22, 0x07, 0xb0, 0x3d,
    0xf0, 0x8e, 0xcc, 0xbd, 0x58, 0x88, 0xec, 0xbc, 0x04, 0x8e,
    0xc2, 0x3d, 0x28, 0xda, 0x8d, 0xbd, 0x78, 0x8f, 0xe3, 0xbd,
    0xf0, 0x06, 0xf2, 0xbc, 0x60, 0x60, 0x85, 0xbb, 0x2c, 0x00,
    0x8f, 0x3d, 0x34, 0x48, 0xb7, 0xbd, 0x28, 0x6e, 0xde, 0x3c,
    0xb0, 0xf1, 0x72, 0x3d, 0xe2, 0x78, 0x93, 0x3d, 0x8e, 0x23,
    0xfc, 0xbd, 0xe2, 0x69, 0xd2, 0x3d, 0x0a, 0x75, 0x9b, 0x3d,
    0x78, 0x61, 0x04, 0x3d, 0x1c, 0x89, 0x24, 0xbd, 0xde, 0x36,
    0xad, 0xbd, 0x00, 0x88, 0x6c, 0xb9, 0x86, 0x01, 0xda, 0x3d,
    0xa6, 0x23, 0xfa, 0xbd, 0x0c, 0x07, 0x5e, 0x3d, 0x84, 0xb8,
    0x96, 0xbd, 0x88, 0xc1, 0x79, 0xbd, 0x78, 0x59, 0x2e, 0x3d,
    0x6c, 0x85, 0xce, 0x3d, 0xcc, 0x24, 0x3e, 0xbd, 0x00, 0x46,
    0x7c, 0xbb, 0xa8, 0xa7, 0x92, 0xbd, 0x80, 0xca, 0xa2, 0xbb,
    0xbc, 0xeb, 0x37, 0xbd, 0x18, 0xe9, 0x73, 0x3d, 0xa6, 0x34,
    0x8d, 0xbd, 0x82, 0xec, 0xce, 0xbd, 0x80, 0xa3, 0x92, 0xba,
    0x9e, 0xc6, 0x95, 0xbd, 0xf0, 0x3b, 0x34, 0x3c, 0x00, 0x68,
    0xfc, 0x39, 0x30, 0x51, 0x10, 0xbc, 0x80, 0x48, 0x6b, 0xbd,
    0xe0, 0x86, 0xf5, 0xbb, 0x90, 0x8e, 0xe5, 0x3c, 0x80, 0x3d,
    0xab, 0xba, 0xf0, 0xf4, 0x4d, 0xbd, 0x04, 0x07, 0xab, 0x3d,
    0x7c, 0x83, 0x58, 0x3d, 0x14, 0x2c, 0x94, 0x3d, 0xa0, 0xee,
    0xa3, 0x3b, 0x04, 0xa2, 0x30, 0xbd, 0x00, 0x0a, 0x06, 0x3b,
    0x50, 0x5d, 0x20, 0x3d, 0x28, 0xd4, 0xa6, 0x3d, 0x00, 0xe7,
    0xa9, 0xbd, 0x40, 0x55, 0xc6, 0xbb, 0x54, 0x40, 0x98, 0xbd,
    0x20, 0x51, 0x8f, 0xbd, 0xea, 0x30, 0xe8, 0xbd, 0xdc, 0x2a,
    0x48, 0x3d, 0x90, 0xe9, 0x60, 0x3c, 0x02, 0x21, 0xf3, 0x3d,
    0x78, 0xa6, 0xd4, 0x3d, 0x2a, 0x5c, 0x8b, 0x3d, 0x78, 0xbe,
    0xa2, 0x3c, 0xe0, 0x4e, 0xfb, 0xbd, 0x24, 0x69, 0x9b, 0xbd,
    0x38, 0x0a, 0x89, 0xbd, 0x68, 0x66, 0xf6, 0xbc, 0x3c, 0xbe,
    0x36, 0x3d, 0xaa, 0x8a, 0xa8, 0x3d, 0x18, 0x1e, 0x9e, 0xbd,
    0xa0, 0xed, 0x14, 0xbd, 0x10, 0x54, 0x61, 0xbd, 0x14, 0xc0,
    0x05, 0x3d, 0x20, 0x5e, 0x30, 0x3d, 0x1c, 0xdc, 0x7d, 0xbd,
    0x48, 0x3f, 0x5f, 0x3d, 0x0a, 0xc1, 0xc8, 0xbd, 0xb0, 0x78,
    0x27, 0x3c, 0x40, 0x41, 0x69, 0xbd, 0x80, 0x3d, 0x86, 0xba,
    0x88, 0xde, 0xfe, 0x3c, 0xbc, 0x44, 0xda, 0xbd, 0x0c, 0xd4,
    0x28, 0x3d, 0x6c, 0x5a, 0xd8, 0x3d, 0x20, 0x7d, 0xa9, 0x3c,
    0x80, 0x36, 0xf6, 0x3a, 0x80, 0x2b, 0x77, 0x3c, 0xd0, 0x42,
    0x61, 0xbc, 0xf0, 0x71, 0x5c, 0x3d, 0x68, 0xe5, 0x9d, 0x3d,
    0x3a, 0x8b, 0x9b, 0x3d, 0x02, 0x2f, 0xa8, 0xbd, 0x3e, 0x39,
    0xa5, 0xbd, 0x78, 0x23, 0x94, 0xbc, 0x22, 0xfb, 0xa7, 0xbd,
    0x38, 0xc0, 0x3a, 0x3d, 0xa8, 0x6a, 0xa0, 0xbd, 0xaa, 0xfe,
    0xcc, 0xbd, 0xae, 0x1b, 0x87, 0xbd, 0x40, 0xba, 0xd0, 0x3b,
    0x3e, 0x9f, 0xf0, 0x3d, 0xac, 0x76, 0xa9, 0x3d, 0xc6, 0x08,
    0xff, 0xbd, 0x28, 0x20, 0xcb, 0xbd, 0xa4, 0x15, 0x49, 0x3d,
    0x88, 0x91, 0x08, 0xbd, 0xd2, 0x7a, 0xbc, 0xbd, 0xac, 0x79,
    0x45, 0x3d, 0x0c, 0xde, 0xd3, 0x3d, 0x98, 0x85, 0xb5, 0x3c,
    0xec, 0x0e, 0x07, 0x3d, 0x26, 0x3c, 0xe4, 0xbd, 0x00, 0x33,
    0x3d, 0x3d, 0xf6, 0x37, 0x9d, 0xbd, 0x40, 0x8f, 0xb5, 0xbc,
    0xc0, 0x4e, 0xf6, 0xbb, 0x20, 0xd5, 0x97, 0xbc, 0x68, 0xfb,
    0xa0, 0x3c, 0xae, 0x1f, 0xc6, 0x3d, 0x54, 0x20, 0x53, 0xbd,
    0x20, 0xd2, 0x52, 0xbc, 0xea, 0x50, 0xac, 0x3d, 0xa4, 0x93,
    0x45, 0xbd, 0x5e, 0x69, 0xe1, 0xbd, 0x98, 0xd0, 0xcf, 0x3d,
    0x7e, 0x0a, 0xbe, 0xbd, 0xa0, 0x91, 0xc1, 0x3c, 0xea, 0x7b,
    0xb3, 0xbd, 0x60, 0x0f, 0xa2, 0x3c, 0x30, 0xb3, 0x63, 0x3c,
    0x20, 0x8d, 0x07, 0x3d, 0x50, 0x9b, 0xa3, 0x3d, 0x20, 0xde,
    0x5e, 0xbd, 0x32, 0x35, 0xb9, 0x3d, 0x20, 0xf0, 0x1b, 0x3d,
    0x78, 0x1d, 0x8d, 0xbd, 0x18, 0x59, 0xfa, 0xbd, 0x48, 0xec,
    0x50, 0x3d, 0x06, 0x50, 0xbe, 0x3d, 0xfa, 0x76, 0xe3, 0x3d,
    0x7c, 0xf2, 0xfa, 0x3d, 0x10, 0x13, 0x1f, 0xbc, 0xe0, 0xa6,
    0x3a, 0x3d, 0x18, 0xfb, 0x86, 0xbc, 0xf2, 0x38, 0xfe, 0x3d,
    0x50, 0x23, 0x46, 0xbd, 0x78, 0xad, 0x45, 0xbd, 0xc0, 0x24,
    0xb9, 0xbd, 0xee, 0x88, 0xfa, 0xbd, 0x10, 0xb5, 0xb4, 0xbc,
    0xb8, 0x8e, 0x4d, 0xbd, 0xf0, 0x5d, 0x5b, 0xbc, 0x52, 0xae,
    0xe7, 0xbd, 0x20, 0x42, 0xc1, 0x3b, 0x98, 0x78, 0xd5, 0x3d,
    0xb0, 0x0d, 0x81, 0xbc, 0x24, 0x96, 0xbf, 0xbd, 0xac, 0xa1,
    0xcd, 0x3d, 0x1a, 0x83, 0xc9, 0x3d, 0xd0, 0x75, 0xcb, 0xbc,
    0x58, 0x0b, 0x95, 0x3c, 0x00, 0x74, 0xfa, 0xbb, 0x80, 0x24,
    0xf9, 0x3b, 0x7a, 0xe9, 0xed, 0xbd, 0xf2, 0xd2, 0x88, 0x3d,
    0x50, 0x53, 0x22, 0xbc, 0xfa, 0x46, 0xa0, 0xbd, 0xd8, 0xf0,
    0x6a, 0xbd, 0x90, 0xd2, 0x90, 0x3d, 0xc8, 0x6b, 0x30, 0xbd,
    0xc8, 0x04, 0x7d, 0xbd, 0x44, 0x74, 0xe0, 0x3d, 0x2e, 0x04,
    0xc1, 0xbd, 0x58, 0xbf, 0x9b, 0xbc, 0xe6, 0x56, 0xca, 0x3d,
    0xe8, 0xff, 0xc3, 0x3d, 0xc4, 0xe9, 0x63, 0x3d, 0x40, 0x86,
    0xe5, 0x3d, 0xb0, 0x8e, 0x0a, 0xbc, 0x82, 0x59, 0x8f, 0xbd,
    0xac, 0x6b, 0xfb, 0xbd, 0x00, 0x07, 0xce, 0x3c, 0x80, 0x23,
    0xf5, 0x3b, 0xb6, 0xc3, 0xf1, 0xbd, 0xc0, 0xf5, 0x4f, 0x3d,
    0x4c, 0xbc, 0xcc, 0xbd, 0xd4, 0xf0, 0xb2, 0x3d, 0x40, 0x03,
    0x17, 0x3c, 0xf0, 0xf4, 0x7e, 0xbd, 0x98, 0xf8, 0x5e, 0xbd,
    0x14, 0xd0, 0x2d, 0x3d, 0x7a, 0xd9, 0xba, 0xbd, 0xc6, 0xbf,
    0xa6, 0x3d, 0x56, 0x12, 0xe1, 0x3d, 0xfc, 0x70, 0x79, 0x3d,
    0x2e, 0xd2, 0xc4, 0xbd, 0x40, 0x6c, 0x78, 0xbc, 0x00, 0x14,
    0x97, 0x3b, 0xdc, 0xbe, 0x5a, 0xbd, 0xe4, 0xa1, 0xef, 0xbd,
    0x90, 0xd1, 0xf6, 0x3d, 0xca, 0x67, 0xa2, 0xbd, 0x60, 0x67,
    0x38, 0xbc, 0x80, 0x62, 0xcc, 0x3c, 0x8c, 0x08, 0x34, 0xbd,
    0xc0, 0x42, 0x75, 0xbd, 0x98, 0xfe, 0x70, 0x3d, 0xa8, 0xf2,
    0xec, 0xbd, 0xc8, 0xdf, 0x44, 0xbd, 0x54, 0xa8, 0x67, 0x3d,
    0xf2, 0xff, 0xcb, 0xbd, 0x60, 0xbb, 0xd8, 0x3c, 0xc6, 0xbc,
    0xe3, 0x3d, 0x62, 0x7a, 0xb6, 0x3d, 0x0a, 0xf2, 0xea, 0xbd,
    0x18, 0xac, 0x51, 0x3d, 0xea, 0xcc, 0xb2, 0xbd, 0xa4, 0x40,
    0x3e, 0x3d, 0x42, 0x18, 0x9c, 0x3d, 0x58, 0x6f, 0x8a, 0x3c,
    0xac, 0xfe, 0x68, 0xbd, 0xde, 0x53, 0xc2, 0x3d, 0x4c, 0x8d,
    0xcf, 0x3d, 0x98, 0x7e, 0xf4, 0xbd, 0xdc, 0x6c, 0xb1, 0x3d,
    0x7e, 0xcb, 0x87, 0x3d, 0x28, 0xe0, 0x90, 0xbd, 0x0e, 0x4a,
    0xce, 0x3d, 0x60, 0x47, 0x02, 0x3d, 0x18, 0xde, 0xf7, 0x3d,
    0x08, 0x58, 0x92, 0x3c, 0x90, 0x9d, 0xf0, 0x3c, 0x88, 0x97,
    0x21, 0x3d, 0x34, 0xe2, 0x1c, 0xbd, 0xe8, 0x51, 0xea, 0x3d,
    0x9c, 0x3b, 0xf5, 0xbd, 0xa6, 0x30, 0xdf, 0xbd, 0xa4, 0xd0,
    0x5a, 0x3d, 0xe4, 0x7c, 0x6b, 0xbd, 0x4e, 0xf5, 0xae, 0xbd,
    0x22, 0xe8, 0xa3, 0xbd, 0x08, 0xd0, 0x2a, 0x3d, 0x80, 0x45,
    0x95, 0xba, 0x38, 0x89, 0x8c, 0x3c, 0x6c, 0xd1, 0x3e, 0x3d,
    0xf2, 0x92, 0xef, 0xbd, 0x28, 0x3e, 0x91, 0xbc, 0xe8, 0x94,
    0x44, 0x3d, 0xc2, 0x05, 0x8d, 0x3d, 0x98, 0x6a, 0xbc, 0x3c,
    0xc8, 0xa5, 0xdd, 0x3c, 0xc4, 0xeb, 0xbf, 0xbd, 0xd8, 0xf0,
    0x9a, 0x3d, 0x30, 0x8b, 0x65, 0xbc, 0x38, 0x27, 0x89, 0x3d,
    0x46, 0xa9, 0x8e, 0x3d, 0xce, 0x34, 0xaf, 0x3d, 0xe6, 0xb7,
    0x84, 0x3d, 0xfc, 0x16, 0x8b, 0xbd, 0x20, 0x98, 0x8c, 0xbd,
    0xa4, 0x8d, 0xe1, 0xbd, 0xc4, 0x3f, 0xa6, 0x3d, 0x10, 0xb6,
    0x55, 0x3d, 0x60, 0x2b, 0xd9, 0x3d, 0xb2, 0x36, 0x90, 0x3d,
    0x20, 0x58, 0x89, 0x3d, 0xa0, 0x75, 0xa0, 0xbd, 0x3a, 0x3d,
    0xa5, 0x3d, 0x3c, 0x7d, 0x35, 0x3d, 0xb2, 0x84, 0xd3, 0xbd,
    0x08, 0xae, 0x71, 0x3d, 0x18, 0x1e, 0x5a, 0xbd, 0xf6, 0x0a,
    0xec, 0xbd, 0x80, 0x3b, 0xc5, 0xba, 0x40, 0x2b, 0x10, 0x3d,
    0x26, 0xb1, 0xd0, 0xbd, 0xb6, 0x48, 0xa7, 0x3d, 0x6c, 0xa7,
    0x12, 0xbd, 0x2e, 0x94, 0xf6, 0xbd, 0x9c, 0x44, 0x2c, 0x3d,
    0xb8, 0x8f, 0xf7, 0x3c, 0x7a, 0xc3, 0xbf, 0x3d, 0x3c, 0xaf,
    0x44, 0xbd, 0x48, 0x70, 0xec, 0xbc, 0xc8, 0x90, 0xc7, 0xbc,
    0x6a, 0x6a, 0xe5, 0x3d, 0x60, 0x98, 0x9b, 0xbc, 0x5e, 0x54,
    0xf2, 0x3d, 0x08, 0x83, 0x8b, 0x3d, 0x80, 0x48, 0xed, 0xbc,
    0x72, 0x24, 0xc2, 0x3d, 0x20, 0x26, 0x69, 0xbd, 0xc8, 0xb0,
    0x0d, 0x3d, 0x24, 0x84, 0x17, 0xbd, 0x94, 0x86, 0xfd, 0xbd,
    0x08, 0xa9, 0x18, 0x3d, 0xc0, 0xb1, 0xa1, 0x3b, 0x52, 0xdd,
    0xa0, 0xbd, 0xba, 0x14, 0xf8, 0xbd, 0x2c, 0x8e, 0x7f, 0xbd,
    0x00, 0x26, 0xc3, 0x3d, 0x0e, 0x66, 0xdb, 0xbd, 0xfc, 0x06,
    0x47, 0xbd, 0xe0, 0x91, 0xa6, 0x3c, 0x12, 0xe0, 0xf6, 0x3d,
    0x80, 0xf1, 0xab, 0x3c, 0x90, 0xfa, 0xb9, 0xbc, 0x98, 0xb0,
    0xc4, 0xbc, 0xa4, 0x17, 0xfa, 0xbd, 0x60, 0x57, 0x1e, 0xbc,
    0xc6, 0x0e, 0xcc, 0xbd, 0x08, 0xcf, 0x8f, 0x3d, 0x58, 0xa2,
    0x7d, 0x3d, 0x58, 0x83, 0xfc, 0xbc, 0xb8, 0x2e, 0xfa, 0xbc,
    0xa6, 0x93, 0x95, 0x3d, 0x40, 0x04, 0xd5, 0x3d, 0x80, 0x90,
    0x31, 0x3d, 0x98, 0x39, 0x9b, 0xbd, 0x40, 0xfe, 0x7e, 0xbd,
    0x70, 0x68, 0xd7, 0xbd, 0xd0, 0x7d, 0x68, 0xbd, 0x80, 0x52,
    0x3c, 0x3c, 0x80, 0x7f, 0x4f, 0xbd, 0xb6, 0x9d, 0xc3, 0x3d,
    0x80, 0xae, 0xb6, 0x3b, 0x22, 0x6b, 0xe4, 0xbd, 0xf0, 0x35,
    0x5e, 0xbc, 0x98, 0x5c, 0x6f, 0xbd, 0x2a, 0x73, 0xa2, 0x3d,
    0x6c, 0x12, 0x1e, 0x3d, 0xfa, 0x83, 0xc7, 0x3d, 0x86, 0xe6,
    0xb0, 0x3d, 0x2a, 0x8e, 0x99, 0xbd, 0x40, 0x32, 0xcf, 0xbd,
    0x84, 0x50, 0x1f, 0x3d, 0x10, 0x0b, 0x45, 0xbc, 0xb0, 0xb1,
    0x9a, 0x3d, 0x50, 0x36, 0xff, 0x3c, 0x2e, 0xf7, 0xb7, 0xbd,
    0x10, 0x95, 0x9a, 0xbc, 0x60, 0x9f, 0xf3, 0xbb, 0x5c, 0x6f,
    0x9a, 0x3d, 0x78, 0x1c, 0x0a, 0x3d, 0x00, 0xf9, 0xf6, 0xba,
    0x4e, 0x40, 0x81, 0x3d, 0x00, 0xc8, 0xec, 0x39, 0x78, 0x10,
    0xde, 0xbd, 0x02, 0x96, 0xc5, 0xbd, 0xd8, 0x8a, 0x86, 0xbc,
    0xb8, 0x8c, 0xfb, 0x3c, 0xc4, 0x52, 0x66, 0xbd, 0x3e, 0x54,
    0xfb, 0x3d, 0xe8, 0x22, 0xd9, 0xbd, 0x50, 0x19, 0xd5, 0xbd,
    0xac, 0xf0, 0xe3, 0xbd, 0xe8, 0x41, 0x8a, 0x3d, 0xb8, 0x55,
    0xfc, 0xbd, 0xe8, 0x0c, 0x39, 0x3d, 0x98, 0xa4, 0xd7, 0x3d,
    0xe0, 0x2d, 0xdf, 0xbd, 0x28, 0xe9, 0x91, 0x3c, 0x08, 0xc0,
    0xc2, 0xbd, 0x32, 0x87, 0xe1, 0xbd, 0x0c, 0x39, 0xbb, 0x3d,
    0x7e, 0xc4, 0x9e, 0x3d, 0x60, 0x84, 0xec, 0xbc, 0xbc, 0xd9,
    0x7b, 0xbd, 0xf2, 0xc5, 0xc4, 0xbd, 0xbc, 0x09, 0x43, 0x3d,
    0x62, 0xae, 0xf5, 0x3d, 0x80, 0x89, 0xbc, 0xbc, 0xbe, 0xe7,
    0xf9, 0xbd, 0x78, 0xf1, 0x85, 0xbd, 0x8c, 0xe0, 0xd9, 0xbd,
    0x80, 0x42, 0xad, 0x3d, 0x80, 0xd5, 0xa2, 0xbd, 0xc2, 0x07,
    0xe6, 0x3d, 0x34, 0x96, 0xaf, 0xbd, 0x78, 0xfa, 0xe4, 0xbd,
    0x8c, 0xaa, 0xc3, 0x3d, 0x18, 0x4f, 0xfa, 0xbc, 0x8e, 0xd8,
    0xef, 0x3d, 0x30, 0x6d, 0x61, 0x3c, 0x40, 0x94, 0xa1, 0x3d,
    0x00, 0x92, 0xcb, 0xbb, 0xc0, 0xdb, 0x0c, 0xbb, 0x7c, 0x72,
    0x23, 0xbd, 0x40, 0x13, 0x42, 0x3c, 0xfc, 0x38, 0x14, 0xbd,
    0x28, 0x57, 0xee, 0x3d, 0x26, 0x33, 0xf1, 0xbd, 0x16, 0x59,
    0xcf, 0x3d, 0xfe, 0x27, 0xba, 0xbd, 0x1e, 0xaa, 0x99, 0xbd,
    0x58, 0x82, 0x30, 0x3d, 0x78, 0x33, 0x3a, 0xbd, 0x04, 0x32,
    0x82, 0xbd, 0xf0, 0xf6, 0xf2, 0xbd, 0xc0, 0x6f, 0xdd, 0x3c,
    0x06, 0x86, 0xdb, 0x3d, 0x98, 0xda, 0xfc, 0x3d, 0x7e, 0x5d,
    0xea, 0x3d, 0x20, 0xd9, 0xf2, 0xbb, 0xd0, 0x3c, 0x89, 0x3d,
    0x24, 0x1d, 0xd4, 0xbd, 0x44, 0x25, 0x6d, 0xbd, 0xfc, 0x18,
    0xfa, 0xbd, 0x70, 0xb9, 0xef, 0x3d, 0xa4, 0xa3, 0xd2, 0x3d,
    0xa0, 0x62, 0xb7, 0xbd, 0xa0, 0xf1, 0x91, 0x3d, 0x50, 0xd4,
    0x97, 0xbc, 0x00, 0x55, 0x20, 0xbc, 0x52, 0xb3, 0xfa, 0xbd,
    0x24, 0x75, 0xe5, 0x3d, 0x4c, 0x11, 0x81, 0x3d, 0x64, 0x2a,
    0xda, 0xbd, 0xf8, 0xa1, 0x9a, 0xbd, 0xce, 0x11, 0x91, 0x3d,
    0x4e, 0xbc, 0xf7, 0xbd, 0x98, 0xb0, 0x24, 0x3d, 0x34, 0x2e,
    0x64, 0x3d, 0xf0, 0x07, 0xf3, 0xbc, 0x60, 0x2f, 0x23, 0x3c,
    0xf4, 0x26, 0xc8, 0x3d, 0x1c, 0x40, 0x67, 0xbd, 0x28, 0x6d,
    0x80, 0xbc, 0x78, 0xd6, 0x57, 0xbd, 0x6c, 0xc7, 0xe3, 0x3d,
    0xe8, 0x47, 0x6c, 0xbd, 0x38, 0x50, 0xc6, 0xbd, 0xe8, 0xa7,
    0x75, 0x3d, 0xd4, 0xde, 0x02, 0x3d, 0xa0, 0xd4, 0x5b, 0xbc,
    0xd0, 0x76, 0xdb, 0x3d, 0x6c, 0x69, 0x9e, 0x3d, 0xb8, 0xf4,
    0x91, 0xbc, 0x90, 0xe5, 0x3f, 0x3c, 0xc6, 0x0d, 0xb2, 0x3d,
    0xc4, 0x5f, 0x83, 0x3d, 0x94, 0x88, 0x51, 0xbd, 0xbc, 0xa7,
    0x70, 0xbd, 0x22, 0x1a, 0x92, 0xbd, 0x76, 0x22, 0xb0, 0xbd,
    0x10, 0x20, 0xdf, 0xbd, 0x84, 0x2c, 0x34, 0x3d, 0x30, 0x10,
    0x31, 0xbc, 0xf4, 0x34, 0x09, 0x3d, 0x18, 0x1b, 0xc9, 0xbd,
    0xdc, 0x48, 0x0f, 0x3d, 0xf4, 0x93, 0x29, 0x3d, 0x64, 0x9c,
    0xab, 0x3d, 0x90, 0x55, 0xbd, 0xbc, 0x00, 0x6c, 0x24, 0xbd,
    0x00, 0xc7, 0x98, 0xbc, 0x94, 0x1c, 0xbc, 0xbd, 0xb8, 0x54,
    0xbd, 0x3c, 0xb0, 0x43, 0x61, 0xbc, 0x5a, 0xad, 0x99, 0x3d,
    0xf8, 0x06, 0xc5, 0x3c, 0xc8, 0x92, 0xa4, 0x3c, 0xf0, 0xcf,
    0x5e, 0x3d, 0x28, 0x68, 0xb6, 0xbd, 0x96, 0xa5, 0x9f, 0x3d,
    0xfa, 0xbc, 0xe2, 0xbd, 0x0a, 0x7f, 0xca, 0x3d, 0xca, 0x9d,
    0x9e, 0x3d, 0xfa, 0x50, 0x9b, 0x3d, 0x28, 0xfc, 0x00, 0xbd,
    0x5a, 0xae, 0xab, 0x3d, 0x2e, 0xbe, 0x98, 0xbd, 0xa6, 0xeb,
    0xad, 0xbd, 0xfe, 0x58, 0xa9, 0x3d, 0xe6, 0xb3, 0xf0, 0xbd,
    0x0e, 0xe1, 0x9a, 0xbd, 0xa8, 0x20, 0x9e, 0x3c, 0xc2, 0xca,
    0xcc, 0x3d, 0x36, 0x79, 0x9c, 0xbd, 0x8e, 0x1a, 0xa5, 0xbd,
    0x40, 0xa9, 0x22, 0xbd, 0xc8, 0x5d, 0x47, 0xbd, 0x08, 0xde,
    0x3d, 0x3d, 0xe0, 0xaa, 0xab, 0xbc, 0x88, 0xc8, 0x8b, 0x3d,
    0x50, 0x9a, 0x61, 0x3d, 0x10, 0x31, 0xf4, 0x3c, 0xfa, 0x17,
    0xbc, 0x3d, 0x00, 0x76, 0x02, 0x3b, 0xb0, 0x2b, 0xb2, 0xbd,
    0x30, 0xd4, 0xe9, 0x3d, 0x38, 0xe6, 0x11, 0x3d, 0xc8, 0x83,
    0x9c, 0x3c, 0x08, 0xb3, 0xcd, 0xbd, 0xb4, 0x78, 0x36, 0xbd,
    0x10, 0xf0, 0x25, 0xbc, 0x6e, 0x75, 0x8a, 0xbd, 0x80, 0xc2,
    0x3d, 0x3b, 0xa8, 0x02, 0x84, 0xbd, 0xc4, 0x52, 0x67, 0x3d,
    0x50, 0x76, 0xd8, 0x3d, 0xe0, 0xab, 0x3d, 0xbc, 0x60, 0xab,
    0x95, 0xbd, 0x98, 0x1e, 0x4b, 0x3d, 0xdc, 0xbb, 0xde, 0x3d,
    0xf8, 0xbf, 0x93, 0xbd, 0x50, 0x6f, 0xc2, 0x3d, 0x00, 0xc7,
    0xfa, 0x3c, 0x82, 0x36, 0xfa, 0x3d, 0x4c, 0xca, 0x3a, 0xbd,
    0xb0, 0xac, 0xd4, 0xbd, 0xf4, 0x4b, 0x8c, 0x3d, 0xd8, 0xe5,
    0xf9, 0xbd, 0xa0, 0x29, 0x77, 0x3d, 0xec, 0x27, 0xe0, 0x3d,
    0xd4, 0x4d, 0xd2, 0x3d, 0x70, 0x1a, 0x84, 0xbc, 0xb4, 0xf4,
    0x96, 0xbd, 0x40, 0xbc, 0xc9, 0xbb, 0x68, 0xb1, 0xdd, 0xbc,
    0x80, 0xaa, 0xaa, 0xbc, 0xf2, 0x6c, 0x85, 0x3d, 0x80, 0xc3,
    0xbb, 0x3a, 0xc8, 0x5d, 0x57, 0x3d, 0x80, 0x52, 0x50, 0xbb,
    0x84, 0x57, 0xb3, 0x3d, 0x5c, 0xe4, 0x8d, 0x3d, 0x48, 0xd7,
    0xde, 0xbd, 0xc0, 0x50, 0x81, 0xbd, 0x40, 0xac, 0x62, 0x3b,
    0x5e, 0x6d, 0x87, 0xbd, 0xf4, 0xc2, 0xe4, 0x3d, 0x80, 0xbd,
    0x9b, 0xbc, 0xfc, 0xe3, 0x02, 0xbd, 0xba, 0xe5, 0x82, 0x3d,
    0xe8, 0x4b, 0x9c, 0xbc, 0x98, 0xa2, 0xa7, 0xbc, 0xe0, 0xfa,
    0x82, 0x3b, 0x4c, 0xb7, 0x73, 0xbd, 0x38, 0x18, 0x81, 0x3c,
    0x40, 0xd6, 0x55, 0x3c, 0x5c, 0x49, 0x68, 0x3d, 0x60, 0x65,
    0xa1, 0x3b, 0xc8, 0x16, 0xf8, 0xbc, 0x80, 0xd7, 0x4d, 0x3c,
    0xca, 0x6b, 0xaa, 0xbd, 0x1a, 0x5e, 0x91, 0x3d, 0x20, 0xfe,
    0x86, 0xbb, 0xd4, 0x75, 0xbc, 0x3d, 0xce, 0x1c, 0x8b, 0x3d,
    0x88, 0x85, 0xef, 0xbc, 0xf8, 0x8e, 0x99, 0xbd, 0x9e, 0xd9,
    0xc3, 0x3d, 0x4c, 0x04, 0x2a, 0xbd, 0x46, 0x1a, 0x93, 0xbd,
    0xd2, 0x40, 0xae, 0xbd, 0x52, 0x91, 0xd8, 0x3d, 0xf2, 0x01,
    0x95, 0x3d, 0xb0, 0x34, 0xb6, 0x3d, 0xec, 0x12, 0x95, 0xbd,
    0x20, 0x3e, 0x01, 0x3d, 0x60, 0x3e, 0xde, 0x3b, 0x40, 0xec,
    0x77, 0x3c, 0x12, 0x7e, 0x84, 0xbd, 0x7e, 0x62, 0x92, 0xbd,
    0xb8, 0xa4, 0x37, 0x3d, 0x88, 0xb9, 0xac, 0xbc, 0x98, 0x79,
    0xd6, 0xbc, 0x4a, 0xb9, 0x93, 0xbd, 0x1c, 0x7c, 0x9a, 0xbd,
    0x2a, 0x0b, 0x9e, 0x3d, 0x20, 0x32, 0x7a, 0x3d, 0x0e, 0x7a,
    0xb0, 0xbd, 0x50, 0xae, 0x3f, 0x3d, 0x18, 0xa1, 0x24, 0x3d,
    0x10, 0xab, 0x99, 0xbd, 0x60, 0x04, 0xc9, 0xbb, 0xc0, 0x6f,
    0xd1, 0x3c, 0xf0, 0x20, 0x33, 0x3d, 0xe2, 0xed, 0xeb, 0xbd,
    0x56, 0xae, 0xdc, 0x3d, 0x26, 0x9f, 0xe3, 0xbd, 0xc2, 0xf1,
    0xe0, 0xbd, 0x68, 0x0a, 0xc9, 0xbd, 0x8a, 0xab, 0xe1, 0x3d,
    0xd8, 0x45, 0xf0, 0x3d, 0xb0, 0xcd, 0x38, 0x3c, 0xe0, 0x4e,
    0x6b, 0x3c, 0xf2, 0x62, 0xc7, 0xbd, 0xb0, 0xb3, 0xf8, 0xbd,
    0x50, 0x09, 0xaa, 0xbc, 0xac, 0x92, 0xfb, 0x3d, 0x90, 0xc0,
    0xf9, 0x3c, 0x70, 0xce, 0x13, 0x3c, 0x00, 0xb4, 0xa9, 0xbb,
    0x80, 0x83, 0xcc, 0xbc, 0x0e, 0xdb, 0xd9, 0xbd, 0x5c, 0x99,
    0x03, 0x3d, 0x2c, 0x3b, 0xc0, 0x3d, 0xa8, 0x7c, 0x4d, 0xbd,
    0xc6, 0x68, 0xa1, 0x3d, 0xa2, 0x5b, 0xa7, 0xbd, 0xb6, 0xe2,
    0x87, 0x3d, 0xb0, 0x78, 0xc5, 0xbd, 0x90, 0xb2, 0xfc, 0xbc,
    0x98, 0x7d, 0x20, 0xbd, 0xba, 0xb9, 0x89, 0x3d, 0xd2, 0xed,
    0xae, 0x3d, 0xec, 0xdb, 0xe1, 0x3d, 0x98, 0xfe, 0xc7, 0x3d,
    0xc8, 0x00, 0xb9, 0xbc, 0xf8, 0x9d, 0xdf, 0x3d, 0x98, 0x93,
    0x56, 0xbd, 0x00, 0x9d, 0xf8, 0xbd, 0x80, 0xf0, 0x48, 0xbb,
    0x4c, 0x6d, 0x88, 0x3d, 0x6e, 0xb9, 0xe3, 0xbd, 0xc8, 0xca,
    0xcb, 0xbc, 0x4c, 0x18, 0x54, 0xbd, 0x88, 0xe8, 0xb1, 0xbd,
    0x78, 0xcc, 0x91, 0x3c, 0xc0, 0x89, 0x96, 0xbc, 0xec, 0xc6,
    0xdd, 0xbd, 0x20, 0x87, 0x69, 0x3c, 0xa0, 0xff, 0x73, 0x3d,
    0x90, 0xb6, 0xd3, 0x3c, 0xf8, 0xc2, 0xd1, 0x3d, 0xe4, 0xb5,
    0x31, 0x3d, 0x78, 0x5c, 0xae, 0xbd, 0x4a, 0x0c, 0xf1, 0xbd,
    0xc8, 0x7a, 0x3d, 0xbd, 0x76, 0x7a, 0xa0, 0xbd, 0x10, 0xe2,
    0xef, 0xbd, 0x8e, 0x04, 0xc1, 0x3d, 0xa8, 0x16, 0x11, 0x3d,
    0xf4, 0x14, 0x4c, 0xbd, 0x24, 0x2c, 0xb0, 0x3d, 0xb2, 0xe1,
    0xd0, 0xbd, 0xd8, 0xb0, 0xaa, 0x3d, 0x88, 0x83, 0xfa, 0x3d,
    0x1c, 0x6e, 0x6b, 0x3d, 0x44, 0x1c, 0xb1, 0xbd, 0x5c, 0xd7,
    0xb4, 0xbd, 0x70, 0x5b, 0x8a, 0x3d, 0x70, 0xcf, 0x7f, 0x3c,
    0xc0, 0xc9, 0xd9, 0xbc, 0xf0, 0x00, 0xb4, 0x3c, 0xbe, 0x38,
    0xe9, 0x3d, 0x26, 0xcf, 0x87, 0xbd, 0x28, 0x04, 0x4a, 0x3d,
    0xfe, 0xb7, 0xb5, 0xbd, 0x00, 0xc6, 0x8b, 0x3c, 0xf8, 0xac,
    0xa9, 0x3c, 0xee, 0xcd, 0xa3, 0x3d, 0x48, 0xde, 0xf3, 0xbd,
    0x30, 0x35, 0xe4, 0x3c, 0xd8, 0x55, 0x27, 0xbd, 0x6c, 0xcc,
    0xc5, 0xbd, 0x88, 0x60, 0xb4, 0x3c, 0xb0, 0x64, 0xef, 0xbc,
    0xd8, 0xee, 0x36, 0xbd, 0x82, 0x47, 0xd5, 0x3d, 0x3a, 0xbc,
    0xb6, 0x3d, 0xfe, 0xcc, 0x83, 0xbd, 0xfe, 0x29, 0xb2, 0xbd,
    0xc0, 0xc4, 0xb5, 0x3d, 0xa0, 0xa2, 0xc0, 0xbd, 0x08, 0x0d,
    0x07, 0xbd, 0xd6, 0xf1, 0x92, 0x3d, 0xce, 0x54, 0x95, 0xbd,
    0xb4, 0x2c, 0x96, 0x3d, 0xd0, 0xd7, 0x2f, 0xbd, 0xd8, 0x7e,
    0xed, 0x3d, 0x68, 0xb7, 0x70, 0x3d, 0x7c, 0x77, 0x74, 0x3d,
    0xf4, 0x06, 0x48, 0xbd, 0x00, 0xfe, 0xd9, 0x39, 0x82, 0x75,
    0xd3, 0x3d, 0x78, 0xad, 0xed, 0x3d, 0x0c, 0x60, 0x08, 0xbd,
    0x00, 0x4d, 0xc4, 0xbc, 0x04, 0xce, 0x08, 0xbd, 0xa0, 0x45,
    0xed, 0xbb, 0x80, 0x3b, 0xf2, 0x3b, 0x1c, 0x11, 0x71, 0xbd,
    0xa8, 0xb1, 0x88, 0x3d, 0x80, 0xd6, 0xb3, 0x3d, 0x38, 0xd2,
    0x4f, 0xbd, 0x7a, 0xf8, 0xed, 0x3d, 0x18, 0xb2, 0xd4, 0xbc,
    0xc0, 0x5f, 0x4d, 0xbb, 0x2c, 0xa9, 0x29, 0x3d, 0xd0, 0xab,
    0x91, 0xbd, 0xdc, 0xbf, 0x4d, 0x3d, 0xb2, 0x0a, 0x80, 0x3d,
    0x7c, 0x2f, 0x66, 0x3d, 0x08, 0xed, 0xe8, 0x3d, 0x34, 0xc2,
    0x1f, 0xbd, 0x12, 0x2a, 0x95, 0xbd, 0xf8, 0x53, 0xde, 0x3c,
    0xc0, 0x7e, 0xc5, 0x3b, 0xec, 0x00, 0x6a, 0x3d, 0xd4, 0x83,
    0xdc, 0x3d, 0x60, 0x2a, 0xd9, 0x3c, 0x60, 0x68, 0xf2, 0x3c,
    0x00, 0x68, 0x14, 0xbc, 0x94, 0xa7, 0xbf, 0x3d, 0x80, 0x24,
    0xfe, 0x3b, 0xdc, 0xb6, 0xfb, 0xbd, 0x18, 0xc5, 0xe6, 0x3c,
    0x52, 0x03, 0x89, 0xbd, 0x9e, 0x23, 0xd4, 0xbd, 0xd0, 0xf5,
    0x58, 0x3d, 0x04, 0x49, 0x9d, 0xbd, 0x12, 0x54, 0x86, 0x3d,
    0x00, 0x67, 0xb6, 0xba, 0x30, 0xec, 0xaf, 0x3d, 0x1e, 0xac,
    0x88, 0x3d, 0x6c, 0x5a, 0x7f, 0xbd, 0x9c, 0xc3, 0x0a, 0xbd,
    0x32, 0x21, 0xa2, 0xbd, 0x88, 0x60, 0xa9, 0x3c, 0xd6, 0x9c,
    0x81, 0x3d, 0xd0, 0x60, 0xb6, 0x3d, 0x7c, 0x41, 0x5c, 0x3d,
    0x08, 0x2a, 0xab, 0x3c, 0x62, 0x98, 0xd9, 0x3d, 0xe0, 0x75,
    0xb8, 0xbd, 0xd6, 0x20, 0xce, 0x3d, 0xf8, 0x3a, 0x75, 0xbd,
    0x3e, 0xff, 0xf2, 0xbd, 0x88, 0x91, 0x12, 0x3d, 0x18, 0xcf,
    0x5e, 0x3d, 0xf0, 0x6e, 0x91, 0xbc, 0x80, 0xd6, 0x2c, 0xbb,
    0xe6, 0x6c, 0x8e, 0x3d, 0x9a, 0x6f, 0xc8, 0x3d, 0xb8, 0x5f,
    0x0d, 0xbd, 0x28, 0x91, 0x02, 0xbd, 0x9c, 0x5c, 0x86, 0x3d,
    0x20, 0xaa, 0x03, 0xbc, 0xc8, 0x04, 0xaa, 0xbc, 0xb0, 0x63,
    0x6b, 0xbd, 0x7a, 0x2f, 0xe8, 0xbd, 0xb8, 0x6f, 0x7f, 0xbd,
    0x22, 0x23, 0xd0, 0x3d, 0x7c, 0x49, 0xf4, 0xbd, 0xde, 0xe9,
    0xbc, 0xbd, 0xa6, 0xf9, 0xf1, 0x3d, 0xc0, 0x28, 0xc6, 0xbd,
    0xc4, 0x28, 0x6c, 0xbd, 0x00, 0xeb, 0x52, 0x3d, 0xd0, 0x5d,
    0xd6, 0x3c, 0x18, 0x92, 0x19, 0x3d, 0xe4, 0x6b, 0x62, 0xbd,
    0x88, 0x9c, 0xf6, 0x3d, 0xee, 0xfa, 0xc9, 0xbd, 0x22, 0x74,
    0xb1, 0x3d, 0x00, 0x0c, 0x49, 0x3c, 0xd2, 0xf5, 0x8a, 0x3d,
    0x3c, 0x69, 0x60, 0xbd, 0x5e, 0x05, 0x87, 0xbd, 0xda, 0x3e,
    0xe9, 0xbd, 0x60, 0x2d, 0x8b, 0xbd, 0xc2, 0x0e, 0xbd, 0x3d,
    0x18, 0x34, 0xc4, 0x3d, 0x94, 0x51, 0x52, 0xbd, 0x30, 0xa7,
    0x9c, 0xbd, 0x40, 0xeb, 0x1f, 0xbd, 0x52, 0xb9, 0xd3, 0xbd,
    0xe2, 0x51, 0x9d, 0x3d, 0x08, 0xbf, 0xab, 0xbd, 0xe0, 0x2b,
    0xaa, 0xbd, 0xc8, 0xc7, 0xd9, 0x3d, 0x7c, 0xc4, 0x8f, 0x3d,
    0x44, 0x1e, 0xe5, 0x3d, 0x80, 0x69, 0x8e, 0xbd, 0xe4, 0xbd,
    0xbf, 0x3d, 0x2c, 0x12, 0xe1, 0xbd, 0x38, 0x4b, 0xfa, 0xbd,
    0xf8, 0x8d, 0x9e, 0x3d, 0x28, 0xfa, 0x2c, 0xbd, 0x92, 0x2f,
    0xdd, 0x3d, 0xa0, 0x5e, 0xdd, 0xbc, 0xd8, 0xea, 0xf8, 0xbd,
    0xe0, 0xde, 0x1f, 0x3c, 0xa6, 0xe9, 0xa8, 0xbd, 0x78, 0x4c,
    0xc4, 0x3d, 0x8a, 0x3a, 0xe2, 0x3d, 0x32, 0x4c, 0xda, 0xbd,
    0xfc, 0x0a, 0x33, 0xbd, 0xf0, 0x60, 0x5a, 0x3d, 0x40, 0x02,
    0xc3, 0xbc, 0xe8, 0x0f, 0xf8, 0x3c, 0x02, 0x33, 0xd0, 0x3d,
    0xaa, 0x6c, 0xa5, 0x3d, 0x00, 0x8f, 0x7e, 0xbd, 0xf8, 0xdd,
    0xff, 0x3d, 0x38, 0x87, 0x43, 0xbd, 0x98, 0x51, 0xed, 0xbd,
    0xa8, 0x96, 0xb3, 0xbc, 0x38, 0x46, 0x9a, 0xbd, 0x98, 0x2f,
    0x24, 0x3d, 0x40, 0x12, 0x75, 0x3d, 0xe0, 0x4a, 0x48, 0x3d,
    0x66, 0x92, 0x9b, 0x3d, 0xc6, 0x58, 0xa1, 0xbd, 0x90, 0xc6,
    0xb8, 0x3c, 0x38, 0x04, 0xef, 0x3c, 0x5e, 0xeb, 0xe8, 0x3d,
    0x30, 0x1c, 0x2f, 0x3c, 0x80, 0x3c, 0x40, 0xbd, 0xc0, 0x4d,
    0x7a, 0xbb, 0x00, 0x07, 0x09, 0x3a, 0x78, 0xca, 0xd3, 0xbc,
    0x38, 0x53, 0xb9, 0x3c, 0xa4, 0xa4, 0x96, 0xbd, 0xb8, 0x24,
    0x27, 0x3d, 0xc0, 0x0d, 0xd3, 0x3c, 0x70, 0x76, 0x95, 0xbd,
    0xae, 0x81, 0xd9, 0x3d, 0x52, 0x85, 0xdb, 0xbd, 0x6e, 0x6e,
    0x89, 0x3d, 0x78, 0x1c, 0xa7, 0xbd, 0x54, 0xbd, 0x31, 0x3d,
    0x7c, 0x92, 0xc1, 0xbd, 0xc8, 0xe0, 0xd7, 0xbc, 0xdc, 0xd1,
    0x4e, 0xbd, 0x0c, 0xaf, 0x6b, 0x3d, 0xc0, 0x50, 0x7b, 0x3c,
    0x10, 0xc1, 0xca, 0x3d, 0x40, 0xce, 0x8b, 0x3d, 0x90, 0xa9,
    0x72, 0xbc, 0xa8, 0x2e, 0x8c, 0x3d, 0xc2, 0x60, 0xc1, 0x3d,
    0x20, 0x49, 0xd6, 0xbc, 0xd8, 0xe2, 0xda, 0x3d, 0x76, 0xb8,
    0xd3, 0x3d, 0xde, 0xed, 0xef, 0x3d, 0xb0, 0xbe, 0x36, 0x3c,
    0x20, 0x72, 0x60, 0x3c, 0x20, 0x10, 0xbd, 0xbb, 0xfc, 0x01,
    0x60, 0xbd, 0x30, 0x24, 0x24, 0x3c, 0xec, 0x17, 0x72, 0xbd,
    0xe4, 0x84, 0x0f, 0xbd, 0xc0, 0xab, 0x3c, 0x3b, 0xa6, 0x3d,
    0xef, 0x3d, 0x9a, 0x60, 0x84, 0x3d, 0xf0, 0x4c, 0x35, 0x3d,
    0x00, 0x9c, 0xdb, 0x39, 0x46, 0x73, 0xaa, 0x3d, 0xf6, 0x77,
    0xf7, 0xbd, 0x48, 0xdf, 0xba, 0xbd, 0x4a, 0x3e, 0xa7, 0x3d,
    0xba, 0xc8, 0xf2, 0x3d, 0x28, 0x3b, 0x37, 0x3d, 0x1c, 0x6a,
    0x9b, 0xbd, 0x98, 0x77, 0xa7, 0xbc, 0x28, 0x6c, 0xeb, 0xbd,
    0x4e, 0xd0, 0x95, 0xbd, 0x70, 0xa2, 0xcc, 0x3d, 0xe0, 0x19,
    0xfd, 0xbd, 0xc0, 0x6d, 0x7c, 0xbb, 0x90, 0xd1, 0xeb, 0xbc,
    0x34, 0xc5, 0xab, 0xbd, 0xd4, 0x30, 0x60, 0xbd, 0xfc, 0x2c,
    0x7a, 0xbd, 0x6c, 0x0c, 0x60, 0x3d, 0x10, 0xea, 0x69, 0x3c,
    0xa0, 0x9d, 0x4b, 0xbd, 0x90, 0xb9, 0x96, 0xbc, 0xa0, 0xed,
    0x56, 0xbd, 0x1e, 0x9d, 0xd3, 0xbd, 0xe2, 0x58, 0xc8, 0xbd,
    0x50, 0x90, 0xfd, 0x3c, 0xd0, 0x42, 0x45, 0x3c, 0x80, 0xbf,
    0xf3, 0xba, 0x50, 0x17, 0xf7, 0x3c, 0x90, 0x8b, 0x57, 0x3c,
    0x64, 0xb9, 0x85, 0x3d, 0x64, 0xce, 0x37, 0x3d, 0xdc, 0x28,
    0x02, 0xbd, 0x20, 0xb1, 0xe3, 0xbb, 0xf4, 0x49, 0xfc, 0xbd,
    0x78, 0xfe, 0xf2, 0xbc, 0x84, 0x49, 0xe3, 0x3d, 0xc0, 0xfd,
    0x58, 0xbd, 0x72, 0x4f, 0x9e, 0xbd, 0x48, 0xbd, 0xe5, 0xbd,
    0x10, 0xeb, 0x57, 0xbc, 0x00, 0xdd, 0x9d, 0x3d, 0xe6, 0x39,
    0xa8, 0xbd, 0x22, 0x05, 0xca, 0x3d, 0x92, 0xae, 0xa5, 0x3d,
    0xcc, 0x06, 0x1a, 0x3d, 0x10, 0x4a, 0xf5, 0x3d, 0xa0, 0xb6,
    0xec, 0x3b, 0x88, 0x6e, 0x48, 0xbd, 0x8c, 0xa3, 0x58, 0xbd,
    0xea, 0xaa, 0xcf, 0x3d, 0x04, 0xcb, 0x42, 0x3d, 0xe8, 0x4b,
    0x45, 0x3d, 0xe0, 0x42, 0x9f, 0xbb, 0x02, 0x0d, 0xb7, 0x3d,
    0xa0, 0xda, 0x8f, 0x3c, 0x0c, 0x3f, 0xc0, 0xbd, 0xc0, 0x29,
    0xcf, 0x3b, 0x48, 0x96, 0xa4, 0x3c, 0x60, 0x27, 0xbf, 0x3b,
    0x00, 0x0e, 0x52, 0xbc, 0x84, 0xcf, 0x93, 0xbd, 0x8c, 0x29,
    0xba, 0x3d, 0xd0, 0x03, 0xb6, 0x3c, 0xc0, 0xf1, 0xe2, 0x3d,
    0x84, 0x0d, 0x5a, 0xbd, 0x84, 0xfc, 0xff, 0x3d, 0xae, 0x44,
    0xd2, 0xbd, 0x48, 0x85, 0xb9, 0xbd, 0x6e, 0x03, 0xa2, 0xbd,
    0x5c, 0xfc, 0x39, 0x3d, 0x5c, 0xe0, 0xe7, 0xbd, 0x78, 0xd4,
    0xa9, 0x3c, 0x08, 0xce, 0x86, 0x3c, 0x80, 0x1e, 0xc0, 0xbb,
    0x70, 0x0c, 0x0f, 0xbd, 0xd0, 0x60, 0xef, 0x3d, 0xa2, 0x50,
    0xa9, 0xbd, 0xf8, 0x13, 0x3d, 0xbd, 0xbc, 0x1f, 0xe1, 0x3d,
    0x5e, 0x5c, 0xf4, 0xbd, 0xec, 0x4b, 0x79, 0xbd, 0xf8, 0xae,
    0x0b, 0x3d, 0x30, 0x19, 0x75, 0x3c, 0xc6, 0x3e, 0xa9, 0x3d,
    0x18, 0x5a, 0x31, 0xbd, 0x28, 0x55, 0xff, 0x3c, 0x20, 0x74,
    0x54, 0x3c, 0xfc, 0x9f, 0xd5, 0x3d, 0x1a, 0x43, 0x8e,
    0xbd, 0x5c, 0xb4, 0x9e, 0xbd, 0xa0, 0x7e, 0x31, 0xbd  };

AI_API_DECLARE_END

#endif /* SIMPLENN_DATA_H */
