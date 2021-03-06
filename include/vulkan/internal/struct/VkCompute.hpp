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
#include "VkAndroid.hpp"
#include "VkBase.hpp"
#include "VkAttachment.hpp"
#include "VkBuffer.hpp"
#include "VkCalibrated.hpp"
#include "VkCheckpoint.hpp"
#include "VkClear.hpp"
#include "VkCmd.hpp"
#include "VkCoarse.hpp"
#include "VkCommand.hpp"
#include "VkComponent.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct SpecializationMapEntry
  {
    VULKAN_HPP_CONSTEXPR SpecializationMapEntry( uint32_t constantID_ = {},
                                                 uint32_t offset_ = {},
                                                 size_t size_ = {} ) VULKAN_HPP_NOEXCEPT
      : constantID( constantID_ )
      , offset( offset_ )
      , size( size_ )
    {}

    VULKAN_HPP_CONSTEXPR SpecializationMapEntry( SpecializationMapEntry const& rhs ) VULKAN_HPP_NOEXCEPT
      : constantID( rhs.constantID )
      , offset( rhs.offset )
      , size( rhs.size )
    {}

    SpecializationMapEntry & operator=( SpecializationMapEntry const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( SpecializationMapEntry ) );
      return *this;
    }

    SpecializationMapEntry( VkSpecializationMapEntry const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SpecializationMapEntry& operator=( VkSpecializationMapEntry const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SpecializationMapEntry const *>(&rhs);
      return *this;
    }

    SpecializationMapEntry & setConstantID( uint32_t constantID_ ) VULKAN_HPP_NOEXCEPT
    {
      constantID = constantID_;
      return *this;
    }

    SpecializationMapEntry & setOffset( uint32_t offset_ ) VULKAN_HPP_NOEXCEPT
    {
      offset = offset_;
      return *this;
    }

    SpecializationMapEntry & setSize( size_t size_ ) VULKAN_HPP_NOEXCEPT
    {
      size = size_;
      return *this;
    }

    operator VkSpecializationMapEntry const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSpecializationMapEntry*>( this );
    }

    operator VkSpecializationMapEntry &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSpecializationMapEntry*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SpecializationMapEntry const& ) const = default;
#else
    bool operator==( SpecializationMapEntry const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( constantID == rhs.constantID )
          && ( offset == rhs.offset )
          && ( size == rhs.size );
    }

    bool operator!=( SpecializationMapEntry const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t constantID = {};
    uint32_t offset = {};
    size_t size = {};
  };
  static_assert( sizeof( SpecializationMapEntry ) == sizeof( VkSpecializationMapEntry ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SpecializationMapEntry>::value, "struct wrapper is not a standard layout!" );

  struct SpecializationInfo
  {
    VULKAN_HPP_CONSTEXPR SpecializationInfo( uint32_t mapEntryCount_ = {},
                                             const VULKAN_HPP_NAMESPACE::SpecializationMapEntry* pMapEntries_ = {},
                                             size_t dataSize_ = {},
                                             const void* pData_ = {} ) VULKAN_HPP_NOEXCEPT
      : mapEntryCount( mapEntryCount_ )
      , pMapEntries( pMapEntries_ )
      , dataSize( dataSize_ )
      , pData( pData_ )
    {}

    VULKAN_HPP_CONSTEXPR SpecializationInfo( SpecializationInfo const& rhs ) VULKAN_HPP_NOEXCEPT
      : mapEntryCount( rhs.mapEntryCount )
      , pMapEntries( rhs.pMapEntries )
      , dataSize( rhs.dataSize )
      , pData( rhs.pData )
    {}

    SpecializationInfo & operator=( SpecializationInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( SpecializationInfo ) );
      return *this;
    }

    SpecializationInfo( VkSpecializationInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SpecializationInfo& operator=( VkSpecializationInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SpecializationInfo const *>(&rhs);
      return *this;
    }

    SpecializationInfo & setMapEntryCount( uint32_t mapEntryCount_ ) VULKAN_HPP_NOEXCEPT
    {
      mapEntryCount = mapEntryCount_;
      return *this;
    }

    SpecializationInfo & setPMapEntries( const VULKAN_HPP_NAMESPACE::SpecializationMapEntry* pMapEntries_ ) VULKAN_HPP_NOEXCEPT
    {
      pMapEntries = pMapEntries_;
      return *this;
    }

    SpecializationInfo & setDataSize( size_t dataSize_ ) VULKAN_HPP_NOEXCEPT
    {
      dataSize = dataSize_;
      return *this;
    }

    SpecializationInfo & setPData( const void* pData_ ) VULKAN_HPP_NOEXCEPT
    {
      pData = pData_;
      return *this;
    }

    operator VkSpecializationInfo const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSpecializationInfo*>( this );
    }

    operator VkSpecializationInfo &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSpecializationInfo*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SpecializationInfo const& ) const = default;
#else
    bool operator==( SpecializationInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( mapEntryCount == rhs.mapEntryCount )
          && ( pMapEntries == rhs.pMapEntries )
          && ( dataSize == rhs.dataSize )
          && ( pData == rhs.pData );
    }

    bool operator!=( SpecializationInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t mapEntryCount = {};
    const VULKAN_HPP_NAMESPACE::SpecializationMapEntry* pMapEntries = {};
    size_t dataSize = {};
    const void* pData = {};
  };
  static_assert( sizeof( SpecializationInfo ) == sizeof( VkSpecializationInfo ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SpecializationInfo>::value, "struct wrapper is not a standard layout!" );

  struct PipelineShaderStageCreateInfo
  {
    VULKAN_HPP_CONSTEXPR PipelineShaderStageCreateInfo( VULKAN_HPP_NAMESPACE::PipelineShaderStageCreateFlags flags_ = {},
                                                        VULKAN_HPP_NAMESPACE::ShaderStageFlagBits stage_ = VULKAN_HPP_NAMESPACE::ShaderStageFlagBits::eVertex,
                                                        VULKAN_HPP_NAMESPACE::ShaderModule module_ = {},
                                                        const char* pName_ = {},
                                                        const VULKAN_HPP_NAMESPACE::SpecializationInfo* pSpecializationInfo_ = {} ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , stage( stage_ )
      , module( module_ )
      , pName( pName_ )
      , pSpecializationInfo( pSpecializationInfo_ )
    {}

    VULKAN_HPP_CONSTEXPR PipelineShaderStageCreateInfo( PipelineShaderStageCreateInfo const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
      , stage( rhs.stage )
      , module( rhs.module )
      , pName( rhs.pName )
      , pSpecializationInfo( rhs.pSpecializationInfo )
    {}

    PipelineShaderStageCreateInfo & operator=( PipelineShaderStageCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( PipelineShaderStageCreateInfo ) - offsetof( PipelineShaderStageCreateInfo, pNext ) );
      return *this;
    }

    PipelineShaderStageCreateInfo( VkPipelineShaderStageCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    PipelineShaderStageCreateInfo& operator=( VkPipelineShaderStageCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::PipelineShaderStageCreateInfo const *>(&rhs);
      return *this;
    }

    PipelineShaderStageCreateInfo & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    PipelineShaderStageCreateInfo & setFlags( VULKAN_HPP_NAMESPACE::PipelineShaderStageCreateFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    PipelineShaderStageCreateInfo & setStage( VULKAN_HPP_NAMESPACE::ShaderStageFlagBits stage_ ) VULKAN_HPP_NOEXCEPT
    {
      stage = stage_;
      return *this;
    }

    PipelineShaderStageCreateInfo & setModule( VULKAN_HPP_NAMESPACE::ShaderModule module_ ) VULKAN_HPP_NOEXCEPT
    {
      module = module_;
      return *this;
    }

    PipelineShaderStageCreateInfo & setPName( const char* pName_ ) VULKAN_HPP_NOEXCEPT
    {
      pName = pName_;
      return *this;
    }

    PipelineShaderStageCreateInfo & setPSpecializationInfo( const VULKAN_HPP_NAMESPACE::SpecializationInfo* pSpecializationInfo_ ) VULKAN_HPP_NOEXCEPT
    {
      pSpecializationInfo = pSpecializationInfo_;
      return *this;
    }

    operator VkPipelineShaderStageCreateInfo const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkPipelineShaderStageCreateInfo*>( this );
    }

    operator VkPipelineShaderStageCreateInfo &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkPipelineShaderStageCreateInfo*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( PipelineShaderStageCreateInfo const& ) const = default;
#else
    bool operator==( PipelineShaderStageCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags )
          && ( stage == rhs.stage )
          && ( module == rhs.module )
          && ( pName == rhs.pName )
          && ( pSpecializationInfo == rhs.pSpecializationInfo );
    }

    bool operator!=( PipelineShaderStageCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::ePipelineShaderStageCreateInfo;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::PipelineShaderStageCreateFlags flags = {};
    VULKAN_HPP_NAMESPACE::ShaderStageFlagBits stage = VULKAN_HPP_NAMESPACE::ShaderStageFlagBits::eVertex;
    VULKAN_HPP_NAMESPACE::ShaderModule module = {};
    const char* pName = {};
    const VULKAN_HPP_NAMESPACE::SpecializationInfo* pSpecializationInfo = {};
  };
  static_assert( sizeof( PipelineShaderStageCreateInfo ) == sizeof( VkPipelineShaderStageCreateInfo ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<PipelineShaderStageCreateInfo>::value, "struct wrapper is not a standard layout!" );

  struct ComputePipelineCreateInfo
  {
    VULKAN_HPP_CONSTEXPR ComputePipelineCreateInfo( VULKAN_HPP_NAMESPACE::PipelineCreateFlags flags_ = {},
                                                    VULKAN_HPP_NAMESPACE::PipelineShaderStageCreateInfo stage_ = {},
                                                    VULKAN_HPP_NAMESPACE::PipelineLayout layout_ = {},
                                                    VULKAN_HPP_NAMESPACE::Pipeline basePipelineHandle_ = {},
                                                    int32_t basePipelineIndex_ = {} ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , stage( stage_ )
      , layout( layout_ )
      , basePipelineHandle( basePipelineHandle_ )
      , basePipelineIndex( basePipelineIndex_ )
    {}

    VULKAN_HPP_CONSTEXPR ComputePipelineCreateInfo( ComputePipelineCreateInfo const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
      , stage( rhs.stage )
      , layout( rhs.layout )
      , basePipelineHandle( rhs.basePipelineHandle )
      , basePipelineIndex( rhs.basePipelineIndex )
    {}

    ComputePipelineCreateInfo & operator=( ComputePipelineCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( ComputePipelineCreateInfo ) - offsetof( ComputePipelineCreateInfo, pNext ) );
      return *this;
    }

    ComputePipelineCreateInfo( VkComputePipelineCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ComputePipelineCreateInfo& operator=( VkComputePipelineCreateInfo const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo const *>(&rhs);
      return *this;
    }

    ComputePipelineCreateInfo & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    ComputePipelineCreateInfo & setFlags( VULKAN_HPP_NAMESPACE::PipelineCreateFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    ComputePipelineCreateInfo & setStage( VULKAN_HPP_NAMESPACE::PipelineShaderStageCreateInfo stage_ ) VULKAN_HPP_NOEXCEPT
    {
      stage = stage_;
      return *this;
    }

    ComputePipelineCreateInfo & setLayout( VULKAN_HPP_NAMESPACE::PipelineLayout layout_ ) VULKAN_HPP_NOEXCEPT
    {
      layout = layout_;
      return *this;
    }

    ComputePipelineCreateInfo & setBasePipelineHandle( VULKAN_HPP_NAMESPACE::Pipeline basePipelineHandle_ ) VULKAN_HPP_NOEXCEPT
    {
      basePipelineHandle = basePipelineHandle_;
      return *this;
    }

    ComputePipelineCreateInfo & setBasePipelineIndex( int32_t basePipelineIndex_ ) VULKAN_HPP_NOEXCEPT
    {
      basePipelineIndex = basePipelineIndex_;
      return *this;
    }

    operator VkComputePipelineCreateInfo const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkComputePipelineCreateInfo*>( this );
    }

    operator VkComputePipelineCreateInfo &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkComputePipelineCreateInfo*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ComputePipelineCreateInfo const& ) const = default;
#else
    bool operator==( ComputePipelineCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags )
          && ( stage == rhs.stage )
          && ( layout == rhs.layout )
          && ( basePipelineHandle == rhs.basePipelineHandle )
          && ( basePipelineIndex == rhs.basePipelineIndex );
    }

    bool operator!=( ComputePipelineCreateInfo const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eComputePipelineCreateInfo;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::PipelineCreateFlags flags = {};
    VULKAN_HPP_NAMESPACE::PipelineShaderStageCreateInfo stage = {};
    VULKAN_HPP_NAMESPACE::PipelineLayout layout = {};
    VULKAN_HPP_NAMESPACE::Pipeline basePipelineHandle = {};
    int32_t basePipelineIndex = {};
  };
  static_assert( sizeof( ComputePipelineCreateInfo ) == sizeof( VkComputePipelineCreateInfo ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ComputePipelineCreateInfo>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE
