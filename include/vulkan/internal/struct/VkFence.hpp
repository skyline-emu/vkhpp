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
#include "VkDescriptor.hpp"
#include "VkBase.hpp"
#include "VkAttachment.hpp"
#include "VkBuffer.hpp"
#include "VkCalibrated.hpp"
#include "VkDevice.hpp"
#include "VkCheckpoint.hpp"
#include "VkConformance.hpp"
#include "VkClear.hpp"
#include "VkCmd.hpp"
#include "VkExtension.hpp"
#include "VkCoarse.hpp"
#include "VkCommand.hpp"
#include "VkComponent.hpp"
#include "VkCopy.hpp"
#include "VkCompute.hpp"
#include "VkConditional.hpp"
#include "VkD3D.hpp"
#include "VkDebug.hpp"
#include "VkDedicated.hpp"
#include "VkDraw.hpp"
#include "VkDispatch.hpp"
#include "VkDisplay.hpp"
#include "VkDrm.hpp"
#include "VkEvent.hpp"
#include "VkExport.hpp"
#include "VkExtent.hpp"
#include "VkFence.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct FenceCreateInfo
  {
    VULKAN_HPP_CONSTEXPR FenceCreateInfo( VULKAN_HPP_NAMESPACE::FenceCreateFlags flags_ = {} ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
    {}

    VULKAN_HPP_CONSTEXPR FenceCreateInfo( FenceCreateInfo const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
    {}

    FenceCreateInfo & operator=( FenceCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( FenceCreateInfo ) - offsetof( FenceCreateInfo, pNext ) );
      return *this;
    }

    FenceCreateInfo( VkFenceCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    FenceCreateInfo& operator=( VkFenceCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::FenceCreateInfo const *>(&rhs);
      return *this;
    }

    FenceCreateInfo & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    FenceCreateInfo & setFlags( VULKAN_HPP_NAMESPACE::FenceCreateFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    operator VkFenceCreateInfo const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkFenceCreateInfo*>( this );
    }

    operator VkFenceCreateInfo &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkFenceCreateInfo*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( FenceCreateInfo const& ) const = default;
#else
    bool operator==( FenceCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags );
    }

    bool operator!=( FenceCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eFenceCreateInfo;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::FenceCreateFlags flags = {};
  };
  static_assert( sizeof( FenceCreateInfo ) == sizeof( VkFenceCreateInfo ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<FenceCreateInfo>::value, "struct wrapper is not a standard layout!" );

  struct FenceGetFdInfoKHR
  {
    VULKAN_HPP_CONSTEXPR FenceGetFdInfoKHR( VULKAN_HPP_NAMESPACE::Fence fence_ = {},
                                            VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits::eOpaqueFd ) VULKAN_HPP_NOEXCEPT
      : fence( fence_ )
      , handleType( handleType_ )
    {}

    VULKAN_HPP_CONSTEXPR FenceGetFdInfoKHR( FenceGetFdInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , fence( rhs.fence )
      , handleType( rhs.handleType )
    {}

    FenceGetFdInfoKHR & operator=( FenceGetFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( FenceGetFdInfoKHR ) - offsetof( FenceGetFdInfoKHR, pNext ) );
      return *this;
    }

    FenceGetFdInfoKHR( VkFenceGetFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    FenceGetFdInfoKHR& operator=( VkFenceGetFdInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::FenceGetFdInfoKHR const *>(&rhs);
      return *this;
    }

    FenceGetFdInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    FenceGetFdInfoKHR & setFence( VULKAN_HPP_NAMESPACE::Fence fence_ ) VULKAN_HPP_NOEXCEPT
    {
      fence = fence_;
      return *this;
    }

    FenceGetFdInfoKHR & setHandleType( VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    operator VkFenceGetFdInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkFenceGetFdInfoKHR*>( this );
    }

    operator VkFenceGetFdInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkFenceGetFdInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( FenceGetFdInfoKHR const& ) const = default;
#else
    bool operator==( FenceGetFdInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( fence == rhs.fence )
          && ( handleType == rhs.handleType );
    }

    bool operator!=( FenceGetFdInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eFenceGetFdInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::Fence fence = {};
    VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits::eOpaqueFd;
  };
  static_assert( sizeof( FenceGetFdInfoKHR ) == sizeof( VkFenceGetFdInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<FenceGetFdInfoKHR>::value, "struct wrapper is not a standard layout!" );

#ifdef VK_USE_PLATFORM_WIN32_KHR
  struct FenceGetWin32HandleInfoKHR
  {
    VULKAN_HPP_CONSTEXPR FenceGetWin32HandleInfoKHR( VULKAN_HPP_NAMESPACE::Fence fence_ = {},
                                                     VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType_ = VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits::eOpaqueFd ) VULKAN_HPP_NOEXCEPT
      : fence( fence_ )
      , handleType( handleType_ )
    {}

    VULKAN_HPP_CONSTEXPR FenceGetWin32HandleInfoKHR( FenceGetWin32HandleInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , fence( rhs.fence )
      , handleType( rhs.handleType )
    {}

    FenceGetWin32HandleInfoKHR & operator=( FenceGetWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( FenceGetWin32HandleInfoKHR ) - offsetof( FenceGetWin32HandleInfoKHR, pNext ) );
      return *this;
    }

    FenceGetWin32HandleInfoKHR( VkFenceGetWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    FenceGetWin32HandleInfoKHR& operator=( VkFenceGetWin32HandleInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::FenceGetWin32HandleInfoKHR const *>(&rhs);
      return *this;
    }

    FenceGetWin32HandleInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    FenceGetWin32HandleInfoKHR & setFence( VULKAN_HPP_NAMESPACE::Fence fence_ ) VULKAN_HPP_NOEXCEPT
    {
      fence = fence_;
      return *this;
    }

    FenceGetWin32HandleInfoKHR & setHandleType( VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType_ ) VULKAN_HPP_NOEXCEPT
    {
      handleType = handleType_;
      return *this;
    }

    operator VkFenceGetWin32HandleInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkFenceGetWin32HandleInfoKHR*>( this );
    }

    operator VkFenceGetWin32HandleInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkFenceGetWin32HandleInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( FenceGetWin32HandleInfoKHR const& ) const = default;
#else
    bool operator==( FenceGetWin32HandleInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( fence == rhs.fence )
          && ( handleType == rhs.handleType );
    }

    bool operator!=( FenceGetWin32HandleInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eFenceGetWin32HandleInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::Fence fence = {};
    VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits handleType = VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlagBits::eOpaqueFd;
  };
  static_assert( sizeof( FenceGetWin32HandleInfoKHR ) == sizeof( VkFenceGetWin32HandleInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<FenceGetWin32HandleInfoKHR>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WIN32_KHR*/
} // namespace VULKAN_HPP_NAMESPACE
