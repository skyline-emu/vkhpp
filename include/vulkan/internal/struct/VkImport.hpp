// Copyright (c) 2015-2019 The Khronos Group Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// ---- Exceptions to the Apache 2.0 License: ----
// 
// As an exception, if you use this Software to generate code and portions of
// this Software are embedded into the generated code as a result, you may
// redistribute such product without providing attribution as would otherwise
// be required by Sections 4(a), 4(b) and 4(d) of the License.
// 
// In addition, if you combine or link code generated by this Software with
// software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
// ("`Combined Software`") and if a court of competent jurisdiction determines
// that the patent provision (Section 3), the indemnity provision (Section 9)
// or other Section of the License conflicts with the conditions of the
// applicable GPL or LGPL license, you may retroactively and prospectively
// choose to deem waived or otherwise exclude such Section(s) of the License,
// but only in their entirety and only with respect to the Combined Software.
//     

// This header is generated from the Khronos Vulkan XML API Registry.

#pragma once

#include "../handles.hpp"
#include "VkAcquire.hpp"
#include "VkAcceleration.hpp"
#include "VkApplication.hpp"
#include "VkAllocation.hpp"
#include "VkExternal.hpp"
#include "VkBind.hpp"
#include "VkCooperative.hpp"
#include "VkAndroid.hpp"
#include "VkImage.hpp"
#include "VkDescriptor.hpp"
#include "VkBase.hpp"
#include "VkAttachment.hpp"
#include "VkBuffer.hpp"
#include "VkFramebuffer.hpp"
#include "VkCalibrated.hpp"
#include "VkDevice.hpp"
#include "VkCheckpoint.hpp"
#include "VkConformance.hpp"
#include "VkClear.hpp"
#include "VkCmd.hpp"
#include "VkExtension.hpp"
#include "VkCoarse.hpp"
#include "VkCommand.hpp"
#include "VkFormat.hpp"
#include "VkComponent.hpp"
#include "VkCopy.hpp"
#include "VkCompute.hpp"
#include "VkConditional.hpp"
#include "VkD3D.hpp"
#include "VkDebug.hpp"
#include "VkFence.hpp"
#include "VkDedicated.hpp"
#include "VkDraw.hpp"
#include "VkDispatch.hpp"
#include "VkDisplay.hpp"
#include "VkDrm.hpp"
#include "VkEvent.hpp"
#include "VkExport.hpp"
#include "VkExtent.hpp"
#include "VkFilter.hpp"
#include "VkGeometry.hpp"
#include "VkGraphics.hpp"
#include "VkHdr.hpp"
#include "VkHeadless.hpp"
#include "VkI.hpp"
#include "VkImport.hpp"

namespace VULKAN_HPP_NAMESPACE
{
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  struct ImportAndroidHardwareBufferInfoANDROID
  {
    VULKAN_HPP_CONSTEXPR ImportAndroidHardwareBufferInfoANDROID( struct AHardwareBuffer* buffer_ = {} ) VULKAN_HPP_NOEXCEPT
      : buffer( buffer_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportAndroidHardwareBufferInfoANDROID( ImportAndroidHardwareBufferInfoANDROID const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , buffer( rhs.buffer )
    {}

    ImportAndroidHardwareBufferInfoANDROID & operator=( ImportAndroidHardwareBufferInfoANDROID const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportAndroidHardwareBufferInfoANDROID ) - offsetof( ImportAndroidHardwareBufferInfoANDROID, pNext ) );
      return *this;
    }

    ImportAndroidHardwareBufferInfoANDROID( VkImportAndroidHardwareBufferInfoANDROID const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportAndroidHardwareBufferInfoANDROID& operator=( VkImportAndroidHardwareBufferInfoANDROID const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportAndroidHardwareBufferInfoANDROID const *>(&rhs);
      return *this;
    }

    ImportAndroidHardwareBufferInfoANDROID & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportAndroidHardwareBufferInfoANDROID & setBuffer( struct AHardwareBuffer* buffer_ ) VULKAN_HPP_NOEXCEPT
    {
      buffer = buffer_;
      return *this;
    }

    operator VkImportAndroidHardwareBufferInfoANDROID const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportAndroidHardwareBufferInfoANDROID*>( this );
    }

    operator VkImportAndroidHardwareBufferInfoANDROID &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportAndroidHardwareBufferInfoANDROID*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportAndroidHardwareBufferInfoANDROID const& ) const = default;
#else
    bool operator==( ImportAndroidHardwareBufferInfoANDROID const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( buffer == rhs.buffer );
    }

    bool operator!=( ImportAndroidHardwareBufferInfoANDROID const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportAndroidHardwareBufferInfoANDROID;
    const void* pNext = {};
    struct AHardwareBuffer* buffer = {};
  };
  static_assert( sizeof( ImportAndroidHardwareBufferInfoANDROID ) == sizeof( VkImportAndroidHardwareBufferInfoANDROID ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportAndroidHardwareBufferInfoANDROID>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  struct ImportFenceFdInfoKHR
  {
    VULKAN_HPP_CONSTEXPR ImportFenceFdInfoKHR( VULKAN_HPP_NAMESPACE::Fence fence_ = {},
                                               VULKAN_HPP_NAMESPACE::FenceImportFlags flags_ = {},
                                               VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits::eOpaqueFd,
                                               int fd_ = {} ) VULKAN_HPP_NOEXCEPT
      : fence( fence_ )
      , flags( flags_ )
      , handleType( handleType_ )
      , fd( fd_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportFenceFdInfoKHR( ImportFenceFdInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , fence( rhs.fence )
      , flags( rhs.flags )
      , handleType( rhs.handleType )
      , fd( rhs.fd )
    {}

    ImportFenceFdInfoKHR & operator=( ImportFenceFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportFenceFdInfoKHR ) - offsetof( ImportFenceFdInfoKHR, pNext ) );
      return *this;
    }

    ImportFenceFdInfoKHR( VkImportFenceFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportFenceFdInfoKHR& operator=( VkImportFenceFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportFenceFdInfoKHR const *>(&rhs);
      return *this;
    }

    ImportFenceFdInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportFenceFdInfoKHR & setFence( VULKAN_HPP_NAMESPACE::Fence fence_ ) VULKAN_HPP_NOEXCEPT
    {
      fence = fence_;
      return *this;
    }

    ImportFenceFdInfoKHR & setFlags( VULKAN_HPP_NAMESPACE::FenceImportFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    ImportFenceFdInfoKHR & setHandleType( VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    ImportFenceFdInfoKHR & setFd( int fd_ ) VULKAN_HPP_NOEXCEPT
    {
      fd = fd_;
      return *this;
    }

    operator VkImportFenceFdInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportFenceFdInfoKHR*>( this );
    }

    operator VkImportFenceFdInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportFenceFdInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportFenceFdInfoKHR const& ) const = default;
#else
    bool operator==( ImportFenceFdInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( fence == rhs.fence )
          && ( flags == rhs.flags )
          && ( handleType == rhs.handleType )
          && ( fd == rhs.fd );
    }

    bool operator!=( ImportFenceFdInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportFenceFdInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::Fence fence = {};
    VULKAN_HPP_NAMESPACE::FenceImportFlags flags = {};
    VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits::eOpaqueFd;
    int fd = {};
  };
  static_assert( sizeof( ImportFenceFdInfoKHR ) == sizeof( VkImportFenceFdInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportFenceFdInfoKHR>::value, "struct wrapper is not a standard layout!" );

#ifdef VK_USE_PLATFORM_WIN32_KHR
  struct ImportFenceWin32HandleInfoKHR
  {
    VULKAN_HPP_CONSTEXPR ImportFenceWin32HandleInfoKHR( VULKAN_HPP_NAMESPACE::Fence fence_ = {},
                                                        VULKAN_HPP_NAMESPACE::FenceImportFlags flags_ = {},
                                                        VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits::eOpaqueFd,
                                                        HANDLE handle_ = {},
                                                        LPCWSTR name_ = {} ) VULKAN_HPP_NOEXCEPT
      : fence( fence_ )
      , flags( flags_ )
      , handleType( handleType_ )
      , handle( handle_ )
      , name( name_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportFenceWin32HandleInfoKHR( ImportFenceWin32HandleInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , fence( rhs.fence )
      , flags( rhs.flags )
      , handleType( rhs.handleType )
      , handle( rhs.handle )
      , name( rhs.name )
    {}

    ImportFenceWin32HandleInfoKHR & operator=( ImportFenceWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportFenceWin32HandleInfoKHR ) - offsetof( ImportFenceWin32HandleInfoKHR, pNext ) );
      return *this;
    }

    ImportFenceWin32HandleInfoKHR( VkImportFenceWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportFenceWin32HandleInfoKHR& operator=( VkImportFenceWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportFenceWin32HandleInfoKHR const *>(&rhs);
      return *this;
    }

    ImportFenceWin32HandleInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportFenceWin32HandleInfoKHR & setFence( VULKAN_HPP_NAMESPACE::Fence fence_ ) VULKAN_HPP_NOEXCEPT
    {
      fence = fence_;
      return *this;
    }

    ImportFenceWin32HandleInfoKHR & setFlags( VULKAN_HPP_NAMESPACE::FenceImportFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    ImportFenceWin32HandleInfoKHR & setHandleType( VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    ImportFenceWin32HandleInfoKHR & setHandle( HANDLE handle_ ) VULKAN_HPP_NOEXCEPT
    {
      handle = handle_;
      return *this;
    }

    ImportFenceWin32HandleInfoKHR & setName( LPCWSTR name_ ) VULKAN_HPP_NOEXCEPT
    {
      name = name_;
      return *this;
    }

    operator VkImportFenceWin32HandleInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportFenceWin32HandleInfoKHR*>( this );
    }

    operator VkImportFenceWin32HandleInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportFenceWin32HandleInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportFenceWin32HandleInfoKHR const& ) const = default;
#else
    bool operator==( ImportFenceWin32HandleInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( fence == rhs.fence )
          && ( flags == rhs.flags )
          && ( handleType == rhs.handleType )
          && ( handle == rhs.handle )
          && ( name == rhs.name );
    }

    bool operator!=( ImportFenceWin32HandleInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportFenceWin32HandleInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::Fence fence = {};
    VULKAN_HPP_NAMESPACE::FenceImportFlags flags = {};
    VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits::eOpaqueFd;
    HANDLE handle = {};
    LPCWSTR name = {};
  };
  static_assert( sizeof( ImportFenceWin32HandleInfoKHR ) == sizeof( VkImportFenceWin32HandleInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportFenceWin32HandleInfoKHR>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  struct ImportMemoryFdInfoKHR
  {
    VULKAN_HPP_CONSTEXPR ImportMemoryFdInfoKHR( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits::eOpaqueFd,
                                                int fd_ = {} ) VULKAN_HPP_NOEXCEPT
      : handleType( handleType_ )
      , fd( fd_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportMemoryFdInfoKHR( ImportMemoryFdInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , handleType( rhs.handleType )
      , fd( rhs.fd )
    {}

    ImportMemoryFdInfoKHR & operator=( ImportMemoryFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportMemoryFdInfoKHR ) - offsetof( ImportMemoryFdInfoKHR, pNext ) );
      return *this;
    }

    ImportMemoryFdInfoKHR( VkImportMemoryFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportMemoryFdInfoKHR& operator=( VkImportMemoryFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportMemoryFdInfoKHR const *>(&rhs);
      return *this;
    }

    ImportMemoryFdInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportMemoryFdInfoKHR & setHandleType( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    ImportMemoryFdInfoKHR & setFd( int fd_ ) VULKAN_HPP_NOEXCEPT
    {
      fd = fd_;
      return *this;
    }

    operator VkImportMemoryFdInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportMemoryFdInfoKHR*>( this );
    }

    operator VkImportMemoryFdInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportMemoryFdInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportMemoryFdInfoKHR const& ) const = default;
#else
    bool operator==( ImportMemoryFdInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( handleType == rhs.handleType )
          && ( fd == rhs.fd );
    }

    bool operator!=( ImportMemoryFdInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportMemoryFdInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits::eOpaqueFd;
    int fd = {};
  };
  static_assert( sizeof( ImportMemoryFdInfoKHR ) == sizeof( VkImportMemoryFdInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportMemoryFdInfoKHR>::value, "struct wrapper is not a standard layout!" );

  struct ImportMemoryHostPointerInfoEXT
  {
    VULKAN_HPP_CONSTEXPR ImportMemoryHostPointerInfoEXT( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits::eOpaqueFd,
                                                         void* pHostPointer_ = {} ) VULKAN_HPP_NOEXCEPT
      : handleType( handleType_ )
      , pHostPointer( pHostPointer_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportMemoryHostPointerInfoEXT( ImportMemoryHostPointerInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , handleType( rhs.handleType )
      , pHostPointer( rhs.pHostPointer )
    {}

    ImportMemoryHostPointerInfoEXT & operator=( ImportMemoryHostPointerInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportMemoryHostPointerInfoEXT ) - offsetof( ImportMemoryHostPointerInfoEXT, pNext ) );
      return *this;
    }

    ImportMemoryHostPointerInfoEXT( VkImportMemoryHostPointerInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportMemoryHostPointerInfoEXT& operator=( VkImportMemoryHostPointerInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportMemoryHostPointerInfoEXT const *>(&rhs);
      return *this;
    }

    ImportMemoryHostPointerInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportMemoryHostPointerInfoEXT & setHandleType( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    ImportMemoryHostPointerInfoEXT & setPHostPointer( void* pHostPointer_ ) VULKAN_HPP_NOEXCEPT
    {
      pHostPointer = pHostPointer_;
      return *this;
    }

    operator VkImportMemoryHostPointerInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportMemoryHostPointerInfoEXT*>( this );
    }

    operator VkImportMemoryHostPointerInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportMemoryHostPointerInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportMemoryHostPointerInfoEXT const& ) const = default;
#else
    bool operator==( ImportMemoryHostPointerInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( handleType == rhs.handleType )
          && ( pHostPointer == rhs.pHostPointer );
    }

    bool operator!=( ImportMemoryHostPointerInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportMemoryHostPointerInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits::eOpaqueFd;
    void* pHostPointer = {};
  };
  static_assert( sizeof( ImportMemoryHostPointerInfoEXT ) == sizeof( VkImportMemoryHostPointerInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportMemoryHostPointerInfoEXT>::value, "struct wrapper is not a standard layout!" );

#ifdef VK_USE_PLATFORM_WIN32_KHR
  struct ImportMemoryWin32HandleInfoKHR
  {
    VULKAN_HPP_CONSTEXPR ImportMemoryWin32HandleInfoKHR( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits::eOpaqueFd,
                                                         HANDLE handle_ = {},
                                                         LPCWSTR name_ = {} ) VULKAN_HPP_NOEXCEPT
      : handleType( handleType_ )
      , handle( handle_ )
      , name( name_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportMemoryWin32HandleInfoKHR( ImportMemoryWin32HandleInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , handleType( rhs.handleType )
      , handle( rhs.handle )
      , name( rhs.name )
    {}

    ImportMemoryWin32HandleInfoKHR & operator=( ImportMemoryWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportMemoryWin32HandleInfoKHR ) - offsetof( ImportMemoryWin32HandleInfoKHR, pNext ) );
      return *this;
    }

    ImportMemoryWin32HandleInfoKHR( VkImportMemoryWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportMemoryWin32HandleInfoKHR& operator=( VkImportMemoryWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportMemoryWin32HandleInfoKHR const *>(&rhs);
      return *this;
    }

    ImportMemoryWin32HandleInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportMemoryWin32HandleInfoKHR & setHandleType( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    ImportMemoryWin32HandleInfoKHR & setHandle( HANDLE handle_ ) VULKAN_HPP_NOEXCEPT
    {
      handle = handle_;
      return *this;
    }

    ImportMemoryWin32HandleInfoKHR & setName( LPCWSTR name_ ) VULKAN_HPP_NOEXCEPT
    {
      name = name_;
      return *this;
    }

    operator VkImportMemoryWin32HandleInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportMemoryWin32HandleInfoKHR*>( this );
    }

    operator VkImportMemoryWin32HandleInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportMemoryWin32HandleInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportMemoryWin32HandleInfoKHR const& ) const = default;
#else
    bool operator==( ImportMemoryWin32HandleInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( handleType == rhs.handleType )
          && ( handle == rhs.handle )
          && ( name == rhs.name );
    }

    bool operator!=( ImportMemoryWin32HandleInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportMemoryWin32HandleInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits::eOpaqueFd;
    HANDLE handle = {};
    LPCWSTR name = {};
  };
  static_assert( sizeof( ImportMemoryWin32HandleInfoKHR ) == sizeof( VkImportMemoryWin32HandleInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportMemoryWin32HandleInfoKHR>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#ifdef VK_USE_PLATFORM_WIN32_KHR
  struct ImportMemoryWin32HandleInfoNV
  {
    VULKAN_HPP_CONSTEXPR ImportMemoryWin32HandleInfoNV( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleType_ = {},
                                                        HANDLE handle_ = {} ) VULKAN_HPP_NOEXCEPT
      : handleType( handleType_ )
      , handle( handle_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportMemoryWin32HandleInfoNV( ImportMemoryWin32HandleInfoNV const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , handleType( rhs.handleType )
      , handle( rhs.handle )
    {}

    ImportMemoryWin32HandleInfoNV & operator=( ImportMemoryWin32HandleInfoNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportMemoryWin32HandleInfoNV ) - offsetof( ImportMemoryWin32HandleInfoNV, pNext ) );
      return *this;
    }

    ImportMemoryWin32HandleInfoNV( VkImportMemoryWin32HandleInfoNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportMemoryWin32HandleInfoNV& operator=( VkImportMemoryWin32HandleInfoNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportMemoryWin32HandleInfoNV const *>(&rhs);
      return *this;
    }

    ImportMemoryWin32HandleInfoNV & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportMemoryWin32HandleInfoNV & setHandleType( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    ImportMemoryWin32HandleInfoNV & setHandle( HANDLE handle_ ) VULKAN_HPP_NOEXCEPT
    {
      handle = handle_;
      return *this;
    }

    operator VkImportMemoryWin32HandleInfoNV const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportMemoryWin32HandleInfoNV*>( this );
    }

    operator VkImportMemoryWin32HandleInfoNV &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportMemoryWin32HandleInfoNV*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportMemoryWin32HandleInfoNV const& ) const = default;
#else
    bool operator==( ImportMemoryWin32HandleInfoNV const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( handleType == rhs.handleType )
          && ( handle == rhs.handle );
    }

    bool operator!=( ImportMemoryWin32HandleInfoNV const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportMemoryWin32HandleInfoNV;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleType = {};
    HANDLE handle = {};
  };
  static_assert( sizeof( ImportMemoryWin32HandleInfoNV ) == sizeof( VkImportMemoryWin32HandleInfoNV ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportMemoryWin32HandleInfoNV>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  struct ImportSemaphoreFdInfoKHR
  {
    VULKAN_HPP_CONSTEXPR ImportSemaphoreFdInfoKHR( VULKAN_HPP_NAMESPACE::Semaphore semaphore_ = {},
                                                   VULKAN_HPP_NAMESPACE::SemaphoreImportFlags flags_ = {},
                                                   VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits::eOpaqueFd,
                                                   int fd_ = {} ) VULKAN_HPP_NOEXCEPT
      : semaphore( semaphore_ )
      , flags( flags_ )
      , handleType( handleType_ )
      , fd( fd_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportSemaphoreFdInfoKHR( ImportSemaphoreFdInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , semaphore( rhs.semaphore )
      , flags( rhs.flags )
      , handleType( rhs.handleType )
      , fd( rhs.fd )
    {}

    ImportSemaphoreFdInfoKHR & operator=( ImportSemaphoreFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportSemaphoreFdInfoKHR ) - offsetof( ImportSemaphoreFdInfoKHR, pNext ) );
      return *this;
    }

    ImportSemaphoreFdInfoKHR( VkImportSemaphoreFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportSemaphoreFdInfoKHR& operator=( VkImportSemaphoreFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportSemaphoreFdInfoKHR const *>(&rhs);
      return *this;
    }

    ImportSemaphoreFdInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportSemaphoreFdInfoKHR & setSemaphore( VULKAN_HPP_NAMESPACE::Semaphore semaphore_ ) VULKAN_HPP_NOEXCEPT
    {
      semaphore = semaphore_;
      return *this;
    }

    ImportSemaphoreFdInfoKHR & setFlags( VULKAN_HPP_NAMESPACE::SemaphoreImportFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    ImportSemaphoreFdInfoKHR & setHandleType( VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    ImportSemaphoreFdInfoKHR & setFd( int fd_ ) VULKAN_HPP_NOEXCEPT
    {
      fd = fd_;
      return *this;
    }

    operator VkImportSemaphoreFdInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportSemaphoreFdInfoKHR*>( this );
    }

    operator VkImportSemaphoreFdInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportSemaphoreFdInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportSemaphoreFdInfoKHR const& ) const = default;
#else
    bool operator==( ImportSemaphoreFdInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( semaphore == rhs.semaphore )
          && ( flags == rhs.flags )
          && ( handleType == rhs.handleType )
          && ( fd == rhs.fd );
    }

    bool operator!=( ImportSemaphoreFdInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportSemaphoreFdInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::Semaphore semaphore = {};
    VULKAN_HPP_NAMESPACE::SemaphoreImportFlags flags = {};
    VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits::eOpaqueFd;
    int fd = {};
  };
  static_assert( sizeof( ImportSemaphoreFdInfoKHR ) == sizeof( VkImportSemaphoreFdInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportSemaphoreFdInfoKHR>::value, "struct wrapper is not a standard layout!" );

#ifdef VK_USE_PLATFORM_WIN32_KHR
  struct ImportSemaphoreWin32HandleInfoKHR
  {
    VULKAN_HPP_CONSTEXPR ImportSemaphoreWin32HandleInfoKHR( VULKAN_HPP_NAMESPACE::Semaphore semaphore_ = {},
                                                            VULKAN_HPP_NAMESPACE::SemaphoreImportFlags flags_ = {},
                                                            VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits::eOpaqueFd,
                                                            HANDLE handle_ = {},
                                                            LPCWSTR name_ = {} ) VULKAN_HPP_NOEXCEPT
      : semaphore( semaphore_ )
      , flags( flags_ )
      , handleType( handleType_ )
      , handle( handle_ )
      , name( name_ )
    {}

    VULKAN_HPP_CONSTEXPR ImportSemaphoreWin32HandleInfoKHR( ImportSemaphoreWin32HandleInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , semaphore( rhs.semaphore )
      , flags( rhs.flags )
      , handleType( rhs.handleType )
      , handle( rhs.handle )
      , name( rhs.name )
    {}

    ImportSemaphoreWin32HandleInfoKHR & operator=( ImportSemaphoreWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ImportSemaphoreWin32HandleInfoKHR ) - offsetof( ImportSemaphoreWin32HandleInfoKHR, pNext ) );
      return *this;
    }

    ImportSemaphoreWin32HandleInfoKHR( VkImportSemaphoreWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImportSemaphoreWin32HandleInfoKHR& operator=( VkImportSemaphoreWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImportSemaphoreWin32HandleInfoKHR const *>(&rhs);
      return *this;
    }

    ImportSemaphoreWin32HandleInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ImportSemaphoreWin32HandleInfoKHR & setSemaphore( VULKAN_HPP_NAMESPACE::Semaphore semaphore_ ) VULKAN_HPP_NOEXCEPT
    {
      semaphore = semaphore_;
      return *this;
    }

    ImportSemaphoreWin32HandleInfoKHR & setFlags( VULKAN_HPP_NAMESPACE::SemaphoreImportFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    ImportSemaphoreWin32HandleInfoKHR & setHandleType( VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    ImportSemaphoreWin32HandleInfoKHR & setHandle( HANDLE handle_ ) VULKAN_HPP_NOEXCEPT
    {
      handle = handle_;
      return *this;
    }

    ImportSemaphoreWin32HandleInfoKHR & setName( LPCWSTR name_ ) VULKAN_HPP_NOEXCEPT
    {
      name = name_;
      return *this;
    }

    operator VkImportSemaphoreWin32HandleInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImportSemaphoreWin32HandleInfoKHR*>( this );
    }

    operator VkImportSemaphoreWin32HandleInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImportSemaphoreWin32HandleInfoKHR const& ) const = default;
#else
    bool operator==( ImportSemaphoreWin32HandleInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( semaphore == rhs.semaphore )
          && ( flags == rhs.flags )
          && ( handleType == rhs.handleType )
          && ( handle == rhs.handle )
          && ( name == rhs.name );
    }

    bool operator!=( ImportSemaphoreWin32HandleInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eImportSemaphoreWin32HandleInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::Semaphore semaphore = {};
    VULKAN_HPP_NAMESPACE::SemaphoreImportFlags flags = {};
    VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlagBits::eOpaqueFd;
    HANDLE handle = {};
    LPCWSTR name = {};
  };
  static_assert( sizeof( ImportSemaphoreWin32HandleInfoKHR ) == sizeof( VkImportSemaphoreWin32HandleInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImportSemaphoreWin32HandleInfoKHR>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/
} // namespace VULKAN_HPP_NAMESPACE
