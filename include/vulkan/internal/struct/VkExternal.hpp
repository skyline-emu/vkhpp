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
#include "VkExternal.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct ExternalMemoryProperties
  {
    VULKAN_HPP_CONSTEXPR ExternalMemoryProperties( VULKAN_HPP_NAMESPACE::ExternalMemoryFeatureFlags externalMemoryFeatures_ = {},
                                                   VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags exportFromImportedHandleTypes_ = {},
                                                   VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags compatibleHandleTypes_ = {} ) VULKAN_HPP_NOEXCEPT
      : externalMemoryFeatures( externalMemoryFeatures_ )
      , exportFromImportedHandleTypes( exportFromImportedHandleTypes_ )
      , compatibleHandleTypes( compatibleHandleTypes_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalMemoryProperties( ExternalMemoryProperties const& rhs ) VULKAN_HPP_NOEXCEPT
      : externalMemoryFeatures( rhs.externalMemoryFeatures )
      , exportFromImportedHandleTypes( rhs.exportFromImportedHandleTypes )
      , compatibleHandleTypes( rhs.compatibleHandleTypes )
    {}

    ExternalMemoryProperties & operator=( ExternalMemoryProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( ExternalMemoryProperties ) );
      return *this;
    }

    ExternalMemoryProperties( VkExternalMemoryProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalMemoryProperties& operator=( VkExternalMemoryProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalMemoryProperties const *>(&rhs);
      return *this;
    }

    operator VkExternalMemoryProperties const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalMemoryProperties*>( this );
    }

    operator VkExternalMemoryProperties &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalMemoryProperties*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalMemoryProperties const& ) const = default;
#else
    bool operator==( ExternalMemoryProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( externalMemoryFeatures == rhs.externalMemoryFeatures )
          && ( exportFromImportedHandleTypes == rhs.exportFromImportedHandleTypes )
          && ( compatibleHandleTypes == rhs.compatibleHandleTypes );
    }

    bool operator!=( ExternalMemoryProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    VULKAN_HPP_NAMESPACE::ExternalMemoryFeatureFlags externalMemoryFeatures = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags exportFromImportedHandleTypes = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags compatibleHandleTypes = {};
  };
  static_assert( sizeof( ExternalMemoryProperties ) == sizeof( VkExternalMemoryProperties ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalMemoryProperties>::value, "struct wrapper is not a standard layout!" );

  struct ExternalBufferProperties
  {
    VULKAN_HPP_CONSTEXPR ExternalBufferProperties( VULKAN_HPP_NAMESPACE::ExternalMemoryProperties externalMemoryProperties_ = {} ) VULKAN_HPP_NOEXCEPT
      : externalMemoryProperties( externalMemoryProperties_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalBufferProperties( ExternalBufferProperties const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , externalMemoryProperties( rhs.externalMemoryProperties )
    {}

    ExternalBufferProperties & operator=( ExternalBufferProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ExternalBufferProperties ) - offsetof( ExternalBufferProperties, pNext ) );
      return *this;
    }

    ExternalBufferProperties( VkExternalBufferProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalBufferProperties& operator=( VkExternalBufferProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalBufferProperties const *>(&rhs);
      return *this;
    }

    operator VkExternalBufferProperties const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalBufferProperties*>( this );
    }

    operator VkExternalBufferProperties &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalBufferProperties*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalBufferProperties const& ) const = default;
#else
    bool operator==( ExternalBufferProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( externalMemoryProperties == rhs.externalMemoryProperties );
    }

    bool operator!=( ExternalBufferProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eExternalBufferProperties;
    void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryProperties externalMemoryProperties = {};
  };
  static_assert( sizeof( ExternalBufferProperties ) == sizeof( VkExternalBufferProperties ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalBufferProperties>::value, "struct wrapper is not a standard layout!" );

  struct ExternalFenceProperties
  {
    VULKAN_HPP_CONSTEXPR ExternalFenceProperties( VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlags exportFromImportedHandleTypes_ = {},
                                                  VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlags compatibleHandleTypes_ = {},
                                                  VULKAN_HPP_NAMESPACE::ExternalFenceFeatureFlags externalFenceFeatures_ = {} ) VULKAN_HPP_NOEXCEPT
      : exportFromImportedHandleTypes( exportFromImportedHandleTypes_ )
      , compatibleHandleTypes( compatibleHandleTypes_ )
      , externalFenceFeatures( externalFenceFeatures_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalFenceProperties( ExternalFenceProperties const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , exportFromImportedHandleTypes( rhs.exportFromImportedHandleTypes )
      , compatibleHandleTypes( rhs.compatibleHandleTypes )
      , externalFenceFeatures( rhs.externalFenceFeatures )
    {}

    ExternalFenceProperties & operator=( ExternalFenceProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ExternalFenceProperties ) - offsetof( ExternalFenceProperties, pNext ) );
      return *this;
    }

    ExternalFenceProperties( VkExternalFenceProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalFenceProperties& operator=( VkExternalFenceProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalFenceProperties const *>(&rhs);
      return *this;
    }

    operator VkExternalFenceProperties const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalFenceProperties*>( this );
    }

    operator VkExternalFenceProperties &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalFenceProperties*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalFenceProperties const& ) const = default;
#else
    bool operator==( ExternalFenceProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( exportFromImportedHandleTypes == rhs.exportFromImportedHandleTypes )
          && ( compatibleHandleTypes == rhs.compatibleHandleTypes )
          && ( externalFenceFeatures == rhs.externalFenceFeatures );
    }

    bool operator!=( ExternalFenceProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eExternalFenceProperties;
    void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlags exportFromImportedHandleTypes = {};
    VULKAN_HPP_NAMESPACE::ExternalFenceHandleTypeFlags compatibleHandleTypes = {};
    VULKAN_HPP_NAMESPACE::ExternalFenceFeatureFlags externalFenceFeatures = {};
  };
  static_assert( sizeof( ExternalFenceProperties ) == sizeof( VkExternalFenceProperties ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalFenceProperties>::value, "struct wrapper is not a standard layout!" );

#ifdef VK_USE_PLATFORM_ANDROID_KHR
  struct ExternalFormatANDROID
  {
    VULKAN_HPP_CONSTEXPR ExternalFormatANDROID( uint64_t externalFormat_ = {} ) VULKAN_HPP_NOEXCEPT
      : externalFormat( externalFormat_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalFormatANDROID( ExternalFormatANDROID const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , externalFormat( rhs.externalFormat )
    {}

    ExternalFormatANDROID & operator=( ExternalFormatANDROID const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ExternalFormatANDROID ) - offsetof( ExternalFormatANDROID, pNext ) );
      return *this;
    }

    ExternalFormatANDROID( VkExternalFormatANDROID const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalFormatANDROID& operator=( VkExternalFormatANDROID const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalFormatANDROID const *>(&rhs);
      return *this;
    }

    ExternalFormatANDROID & setPNext( void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ExternalFormatANDROID & setExternalFormat( uint64_t externalFormat_ ) VULKAN_HPP_NOEXCEPT
    {
      externalFormat = externalFormat_;
      return *this;
    }

    operator VkExternalFormatANDROID const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalFormatANDROID*>( this );
    }

    operator VkExternalFormatANDROID &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalFormatANDROID*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalFormatANDROID const& ) const = default;
#else
    bool operator==( ExternalFormatANDROID const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( externalFormat == rhs.externalFormat );
    }

    bool operator!=( ExternalFormatANDROID const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eExternalFormatANDROID;
    void* pNext = {};
    uint64_t externalFormat = {};
  };
  static_assert( sizeof( ExternalFormatANDROID ) == sizeof( VkExternalFormatANDROID ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalFormatANDROID>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  struct ExternalImageFormatProperties
  {
    VULKAN_HPP_CONSTEXPR ExternalImageFormatProperties( VULKAN_HPP_NAMESPACE::ExternalMemoryProperties externalMemoryProperties_ = {} ) VULKAN_HPP_NOEXCEPT
      : externalMemoryProperties( externalMemoryProperties_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalImageFormatProperties( ExternalImageFormatProperties const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , externalMemoryProperties( rhs.externalMemoryProperties )
    {}

    ExternalImageFormatProperties & operator=( ExternalImageFormatProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ExternalImageFormatProperties ) - offsetof( ExternalImageFormatProperties, pNext ) );
      return *this;
    }

    ExternalImageFormatProperties( VkExternalImageFormatProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalImageFormatProperties& operator=( VkExternalImageFormatProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalImageFormatProperties const *>(&rhs);
      return *this;
    }

    operator VkExternalImageFormatProperties const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalImageFormatProperties*>( this );
    }

    operator VkExternalImageFormatProperties &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalImageFormatProperties*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalImageFormatProperties const& ) const = default;
#else
    bool operator==( ExternalImageFormatProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( externalMemoryProperties == rhs.externalMemoryProperties );
    }

    bool operator!=( ExternalImageFormatProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eExternalImageFormatProperties;
    void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryProperties externalMemoryProperties = {};
  };
  static_assert( sizeof( ExternalImageFormatProperties ) == sizeof( VkExternalImageFormatProperties ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalImageFormatProperties>::value, "struct wrapper is not a standard layout!" );

  struct ImageFormatProperties
  {
    VULKAN_HPP_CONSTEXPR ImageFormatProperties( VULKAN_HPP_NAMESPACE::Extent3D maxExtent_ = {},
                                                uint32_t maxMipLevels_ = {},
                                                uint32_t maxArrayLayers_ = {},
                                                VULKAN_HPP_NAMESPACE::SampleCountFlags sampleCounts_ = {},
                                                VULKAN_HPP_NAMESPACE::DeviceSize maxResourceSize_ = {} ) VULKAN_HPP_NOEXCEPT
      : maxExtent( maxExtent_ )
      , maxMipLevels( maxMipLevels_ )
      , maxArrayLayers( maxArrayLayers_ )
      , sampleCounts( sampleCounts_ )
      , maxResourceSize( maxResourceSize_ )
    {}

    VULKAN_HPP_CONSTEXPR ImageFormatProperties( ImageFormatProperties const& rhs ) VULKAN_HPP_NOEXCEPT
      : maxExtent( rhs.maxExtent )
      , maxMipLevels( rhs.maxMipLevels )
      , maxArrayLayers( rhs.maxArrayLayers )
      , sampleCounts( rhs.sampleCounts )
      , maxResourceSize( rhs.maxResourceSize )
    {}

    ImageFormatProperties & operator=( ImageFormatProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( ImageFormatProperties ) );
      return *this;
    }

    ImageFormatProperties( VkImageFormatProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ImageFormatProperties& operator=( VkImageFormatProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ImageFormatProperties const *>(&rhs);
      return *this;
    }

    operator VkImageFormatProperties const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkImageFormatProperties*>( this );
    }

    operator VkImageFormatProperties &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkImageFormatProperties*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ImageFormatProperties const& ) const = default;
#else
    bool operator==( ImageFormatProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( maxExtent == rhs.maxExtent )
          && ( maxMipLevels == rhs.maxMipLevels )
          && ( maxArrayLayers == rhs.maxArrayLayers )
          && ( sampleCounts == rhs.sampleCounts )
          && ( maxResourceSize == rhs.maxResourceSize );
    }

    bool operator!=( ImageFormatProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    VULKAN_HPP_NAMESPACE::Extent3D maxExtent = {};
    uint32_t maxMipLevels = {};
    uint32_t maxArrayLayers = {};
    VULKAN_HPP_NAMESPACE::SampleCountFlags sampleCounts = {};
    VULKAN_HPP_NAMESPACE::DeviceSize maxResourceSize = {};
  };
  static_assert( sizeof( ImageFormatProperties ) == sizeof( VkImageFormatProperties ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ImageFormatProperties>::value, "struct wrapper is not a standard layout!" );

  struct ExternalImageFormatPropertiesNV
  {
    VULKAN_HPP_CONSTEXPR ExternalImageFormatPropertiesNV( VULKAN_HPP_NAMESPACE::ImageFormatProperties imageFormatProperties_ = {},
                                                          VULKAN_HPP_NAMESPACE::ExternalMemoryFeatureFlagsNV externalMemoryFeatures_ = {},
                                                          VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes_ = {},
                                                          VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV compatibleHandleTypes_ = {} ) VULKAN_HPP_NOEXCEPT
      : imageFormatProperties( imageFormatProperties_ )
      , externalMemoryFeatures( externalMemoryFeatures_ )
      , exportFromImportedHandleTypes( exportFromImportedHandleTypes_ )
      , compatibleHandleTypes( compatibleHandleTypes_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalImageFormatPropertiesNV( ExternalImageFormatPropertiesNV const& rhs ) VULKAN_HPP_NOEXCEPT
      : imageFormatProperties( rhs.imageFormatProperties )
      , externalMemoryFeatures( rhs.externalMemoryFeatures )
      , exportFromImportedHandleTypes( rhs.exportFromImportedHandleTypes )
      , compatibleHandleTypes( rhs.compatibleHandleTypes )
    {}

    ExternalImageFormatPropertiesNV & operator=( ExternalImageFormatPropertiesNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( ExternalImageFormatPropertiesNV ) );
      return *this;
    }

    ExternalImageFormatPropertiesNV( VkExternalImageFormatPropertiesNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalImageFormatPropertiesNV& operator=( VkExternalImageFormatPropertiesNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalImageFormatPropertiesNV const *>(&rhs);
      return *this;
    }

    operator VkExternalImageFormatPropertiesNV const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalImageFormatPropertiesNV*>( this );
    }

    operator VkExternalImageFormatPropertiesNV &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalImageFormatPropertiesNV*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalImageFormatPropertiesNV const& ) const = default;
#else
    bool operator==( ExternalImageFormatPropertiesNV const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( imageFormatProperties == rhs.imageFormatProperties )
          && ( externalMemoryFeatures == rhs.externalMemoryFeatures )
          && ( exportFromImportedHandleTypes == rhs.exportFromImportedHandleTypes )
          && ( compatibleHandleTypes == rhs.compatibleHandleTypes );
    }

    bool operator!=( ExternalImageFormatPropertiesNV const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    VULKAN_HPP_NAMESPACE::ImageFormatProperties imageFormatProperties = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryFeatureFlagsNV externalMemoryFeatures = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV compatibleHandleTypes = {};
  };
  static_assert( sizeof( ExternalImageFormatPropertiesNV ) == sizeof( VkExternalImageFormatPropertiesNV ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalImageFormatPropertiesNV>::value, "struct wrapper is not a standard layout!" );

  struct ExternalMemoryBufferCreateInfo
  {
    VULKAN_HPP_CONSTEXPR ExternalMemoryBufferCreateInfo( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags handleTypes_ = {} ) VULKAN_HPP_NOEXCEPT
      : handleTypes( handleTypes_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalMemoryBufferCreateInfo( ExternalMemoryBufferCreateInfo const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , handleTypes( rhs.handleTypes )
    {}

    ExternalMemoryBufferCreateInfo & operator=( ExternalMemoryBufferCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ExternalMemoryBufferCreateInfo ) - offsetof( ExternalMemoryBufferCreateInfo, pNext ) );
      return *this;
    }

    ExternalMemoryBufferCreateInfo( VkExternalMemoryBufferCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalMemoryBufferCreateInfo& operator=( VkExternalMemoryBufferCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalMemoryBufferCreateInfo const *>(&rhs);
      return *this;
    }

    ExternalMemoryBufferCreateInfo & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ExternalMemoryBufferCreateInfo & setHandleTypes( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags handleTypes_ ) VULKAN_HPP_NOEXCEPT
    {
      handleTypes = handleTypes_;
      return *this;
    }

    operator VkExternalMemoryBufferCreateInfo const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalMemoryBufferCreateInfo*>( this );
    }

    operator VkExternalMemoryBufferCreateInfo &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalMemoryBufferCreateInfo*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalMemoryBufferCreateInfo const& ) const = default;
#else
    bool operator==( ExternalMemoryBufferCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( handleTypes == rhs.handleTypes );
    }

    bool operator!=( ExternalMemoryBufferCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eExternalMemoryBufferCreateInfo;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags handleTypes = {};
  };
  static_assert( sizeof( ExternalMemoryBufferCreateInfo ) == sizeof( VkExternalMemoryBufferCreateInfo ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalMemoryBufferCreateInfo>::value, "struct wrapper is not a standard layout!" );

  struct ExternalMemoryImageCreateInfo
  {
    VULKAN_HPP_CONSTEXPR ExternalMemoryImageCreateInfo( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags handleTypes_ = {} ) VULKAN_HPP_NOEXCEPT
      : handleTypes( handleTypes_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalMemoryImageCreateInfo( ExternalMemoryImageCreateInfo const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , handleTypes( rhs.handleTypes )
    {}

    ExternalMemoryImageCreateInfo & operator=( ExternalMemoryImageCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ExternalMemoryImageCreateInfo ) - offsetof( ExternalMemoryImageCreateInfo, pNext ) );
      return *this;
    }

    ExternalMemoryImageCreateInfo( VkExternalMemoryImageCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalMemoryImageCreateInfo& operator=( VkExternalMemoryImageCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalMemoryImageCreateInfo const *>(&rhs);
      return *this;
    }

    ExternalMemoryImageCreateInfo & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ExternalMemoryImageCreateInfo & setHandleTypes( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags handleTypes_ ) VULKAN_HPP_NOEXCEPT
    {
      handleTypes = handleTypes_;
      return *this;
    }

    operator VkExternalMemoryImageCreateInfo const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalMemoryImageCreateInfo*>( this );
    }

    operator VkExternalMemoryImageCreateInfo &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalMemoryImageCreateInfo*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalMemoryImageCreateInfo const& ) const = default;
#else
    bool operator==( ExternalMemoryImageCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( handleTypes == rhs.handleTypes );
    }

    bool operator!=( ExternalMemoryImageCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eExternalMemoryImageCreateInfo;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlags handleTypes = {};
  };
  static_assert( sizeof( ExternalMemoryImageCreateInfo ) == sizeof( VkExternalMemoryImageCreateInfo ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalMemoryImageCreateInfo>::value, "struct wrapper is not a standard layout!" );

  struct ExternalMemoryImageCreateInfoNV
  {
    VULKAN_HPP_CONSTEXPR ExternalMemoryImageCreateInfoNV( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleTypes_ = {} ) VULKAN_HPP_NOEXCEPT
      : handleTypes( handleTypes_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalMemoryImageCreateInfoNV( ExternalMemoryImageCreateInfoNV const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , handleTypes( rhs.handleTypes )
    {}

    ExternalMemoryImageCreateInfoNV & operator=( ExternalMemoryImageCreateInfoNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ExternalMemoryImageCreateInfoNV ) - offsetof( ExternalMemoryImageCreateInfoNV, pNext ) );
      return *this;
    }

    ExternalMemoryImageCreateInfoNV( VkExternalMemoryImageCreateInfoNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalMemoryImageCreateInfoNV& operator=( VkExternalMemoryImageCreateInfoNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalMemoryImageCreateInfoNV const *>(&rhs);
      return *this;
    }

    ExternalMemoryImageCreateInfoNV & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ExternalMemoryImageCreateInfoNV & setHandleTypes( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleTypes_ ) VULKAN_HPP_NOEXCEPT
    {
      handleTypes = handleTypes_;
      return *this;
    }

    operator VkExternalMemoryImageCreateInfoNV const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalMemoryImageCreateInfoNV*>( this );
    }

    operator VkExternalMemoryImageCreateInfoNV &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalMemoryImageCreateInfoNV*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalMemoryImageCreateInfoNV const& ) const = default;
#else
    bool operator==( ExternalMemoryImageCreateInfoNV const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( handleTypes == rhs.handleTypes );
    }

    bool operator!=( ExternalMemoryImageCreateInfoNV const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eExternalMemoryImageCreateInfoNV;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleTypes = {};
  };
  static_assert( sizeof( ExternalMemoryImageCreateInfoNV ) == sizeof( VkExternalMemoryImageCreateInfoNV ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalMemoryImageCreateInfoNV>::value, "struct wrapper is not a standard layout!" );

  struct ExternalSemaphoreProperties
  {
    VULKAN_HPP_CONSTEXPR ExternalSemaphoreProperties( VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes_ = {},
                                                      VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlags compatibleHandleTypes_ = {},
                                                      VULKAN_HPP_NAMESPACE::ExternalSemaphoreFeatureFlags externalSemaphoreFeatures_ = {} ) VULKAN_HPP_NOEXCEPT
      : exportFromImportedHandleTypes( exportFromImportedHandleTypes_ )
      , compatibleHandleTypes( compatibleHandleTypes_ )
      , externalSemaphoreFeatures( externalSemaphoreFeatures_ )
    {}

    VULKAN_HPP_CONSTEXPR ExternalSemaphoreProperties( ExternalSemaphoreProperties const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , exportFromImportedHandleTypes( rhs.exportFromImportedHandleTypes )
      , compatibleHandleTypes( rhs.compatibleHandleTypes )
      , externalSemaphoreFeatures( rhs.externalSemaphoreFeatures )
    {}

    ExternalSemaphoreProperties & operator=( ExternalSemaphoreProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ExternalSemaphoreProperties ) - offsetof( ExternalSemaphoreProperties, pNext ) );
      return *this;
    }

    ExternalSemaphoreProperties( VkExternalSemaphoreProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ExternalSemaphoreProperties& operator=( VkExternalSemaphoreProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties const *>(&rhs);
      return *this;
    }

    operator VkExternalSemaphoreProperties const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExternalSemaphoreProperties*>( this );
    }

    operator VkExternalSemaphoreProperties &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExternalSemaphoreProperties*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ExternalSemaphoreProperties const& ) const = default;
#else
    bool operator==( ExternalSemaphoreProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( exportFromImportedHandleTypes == rhs.exportFromImportedHandleTypes )
          && ( compatibleHandleTypes == rhs.compatibleHandleTypes )
          && ( externalSemaphoreFeatures == rhs.externalSemaphoreFeatures );
    }

    bool operator!=( ExternalSemaphoreProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eExternalSemaphoreProperties;
    void* pNext = {};
    VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes = {};
    VULKAN_HPP_NAMESPACE::ExternalSemaphoreHandleTypeFlags compatibleHandleTypes = {};
    VULKAN_HPP_NAMESPACE::ExternalSemaphoreFeatureFlags externalSemaphoreFeatures = {};
  };
  static_assert( sizeof( ExternalSemaphoreProperties ) == sizeof( VkExternalSemaphoreProperties ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ExternalSemaphoreProperties>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE
