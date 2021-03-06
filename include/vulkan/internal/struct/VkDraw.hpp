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
#include "VkCoarse.hpp"
#include "VkCommand.hpp"
#include "VkComponent.hpp"
#include "VkCopy.hpp"
#include "VkCompute.hpp"
#include "VkConditional.hpp"
#include "VkD3D.hpp"
#include "VkDebug.hpp"
#include "VkDedicated.hpp"
#include "VkDispatch.hpp"
#include "VkDisplay.hpp"
#include "VkDraw.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct DrawIndexedIndirectCommand
  {
    VULKAN_HPP_CONSTEXPR DrawIndexedIndirectCommand( uint32_t indexCount_ = {},
                                                     uint32_t instanceCount_ = {},
                                                     uint32_t firstIndex_ = {},
                                                     int32_t vertexOffset_ = {},
                                                     uint32_t firstInstance_ = {} ) VULKAN_HPP_NOEXCEPT
      : indexCount( indexCount_ )
      , instanceCount( instanceCount_ )
      , firstIndex( firstIndex_ )
      , vertexOffset( vertexOffset_ )
      , firstInstance( firstInstance_ )
    {}

    VULKAN_HPP_CONSTEXPR DrawIndexedIndirectCommand( DrawIndexedIndirectCommand const& rhs ) VULKAN_HPP_NOEXCEPT
      : indexCount( rhs.indexCount )
      , instanceCount( rhs.instanceCount )
      , firstIndex( rhs.firstIndex )
      , vertexOffset( rhs.vertexOffset )
      , firstInstance( rhs.firstInstance )
    {}

    DrawIndexedIndirectCommand & operator=( DrawIndexedIndirectCommand const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( DrawIndexedIndirectCommand ) );
      return *this;
    }

    DrawIndexedIndirectCommand( VkDrawIndexedIndirectCommand const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DrawIndexedIndirectCommand& operator=( VkDrawIndexedIndirectCommand const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DrawIndexedIndirectCommand const *>(&rhs);
      return *this;
    }

    DrawIndexedIndirectCommand & setIndexCount( uint32_t indexCount_ ) VULKAN_HPP_NOEXCEPT
    {
      indexCount = indexCount_;
      return *this;
    }

    DrawIndexedIndirectCommand & setInstanceCount( uint32_t instanceCount_ ) VULKAN_HPP_NOEXCEPT
    {
      instanceCount = instanceCount_;
      return *this;
    }

    DrawIndexedIndirectCommand & setFirstIndex( uint32_t firstIndex_ ) VULKAN_HPP_NOEXCEPT
    {
      firstIndex = firstIndex_;
      return *this;
    }

    DrawIndexedIndirectCommand & setVertexOffset( int32_t vertexOffset_ ) VULKAN_HPP_NOEXCEPT
    {
      vertexOffset = vertexOffset_;
      return *this;
    }

    DrawIndexedIndirectCommand & setFirstInstance( uint32_t firstInstance_ ) VULKAN_HPP_NOEXCEPT
    {
      firstInstance = firstInstance_;
      return *this;
    }

    operator VkDrawIndexedIndirectCommand const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDrawIndexedIndirectCommand*>( this );
    }

    operator VkDrawIndexedIndirectCommand &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDrawIndexedIndirectCommand*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DrawIndexedIndirectCommand const& ) const = default;
#else
    bool operator==( DrawIndexedIndirectCommand const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( indexCount == rhs.indexCount )
          && ( instanceCount == rhs.instanceCount )
          && ( firstIndex == rhs.firstIndex )
          && ( vertexOffset == rhs.vertexOffset )
          && ( firstInstance == rhs.firstInstance );
    }

    bool operator!=( DrawIndexedIndirectCommand const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t indexCount = {};
    uint32_t instanceCount = {};
    uint32_t firstIndex = {};
    int32_t vertexOffset = {};
    uint32_t firstInstance = {};
  };
  static_assert( sizeof( DrawIndexedIndirectCommand ) == sizeof( VkDrawIndexedIndirectCommand ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DrawIndexedIndirectCommand>::value, "struct wrapper is not a standard layout!" );

  struct DrawIndirectCommand
  {
    VULKAN_HPP_CONSTEXPR DrawIndirectCommand( uint32_t vertexCount_ = {},
                                              uint32_t instanceCount_ = {},
                                              uint32_t firstVertex_ = {},
                                              uint32_t firstInstance_ = {} ) VULKAN_HPP_NOEXCEPT
      : vertexCount( vertexCount_ )
      , instanceCount( instanceCount_ )
      , firstVertex( firstVertex_ )
      , firstInstance( firstInstance_ )
    {}

    VULKAN_HPP_CONSTEXPR DrawIndirectCommand( DrawIndirectCommand const& rhs ) VULKAN_HPP_NOEXCEPT
      : vertexCount( rhs.vertexCount )
      , instanceCount( rhs.instanceCount )
      , firstVertex( rhs.firstVertex )
      , firstInstance( rhs.firstInstance )
    {}

    DrawIndirectCommand & operator=( DrawIndirectCommand const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( DrawIndirectCommand ) );
      return *this;
    }

    DrawIndirectCommand( VkDrawIndirectCommand const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DrawIndirectCommand& operator=( VkDrawIndirectCommand const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DrawIndirectCommand const *>(&rhs);
      return *this;
    }

    DrawIndirectCommand & setVertexCount( uint32_t vertexCount_ ) VULKAN_HPP_NOEXCEPT
    {
      vertexCount = vertexCount_;
      return *this;
    }

    DrawIndirectCommand & setInstanceCount( uint32_t instanceCount_ ) VULKAN_HPP_NOEXCEPT
    {
      instanceCount = instanceCount_;
      return *this;
    }

    DrawIndirectCommand & setFirstVertex( uint32_t firstVertex_ ) VULKAN_HPP_NOEXCEPT
    {
      firstVertex = firstVertex_;
      return *this;
    }

    DrawIndirectCommand & setFirstInstance( uint32_t firstInstance_ ) VULKAN_HPP_NOEXCEPT
    {
      firstInstance = firstInstance_;
      return *this;
    }

    operator VkDrawIndirectCommand const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDrawIndirectCommand*>( this );
    }

    operator VkDrawIndirectCommand &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDrawIndirectCommand*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DrawIndirectCommand const& ) const = default;
#else
    bool operator==( DrawIndirectCommand const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( vertexCount == rhs.vertexCount )
          && ( instanceCount == rhs.instanceCount )
          && ( firstVertex == rhs.firstVertex )
          && ( firstInstance == rhs.firstInstance );
    }

    bool operator!=( DrawIndirectCommand const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t vertexCount = {};
    uint32_t instanceCount = {};
    uint32_t firstVertex = {};
    uint32_t firstInstance = {};
  };
  static_assert( sizeof( DrawIndirectCommand ) == sizeof( VkDrawIndirectCommand ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DrawIndirectCommand>::value, "struct wrapper is not a standard layout!" );

  struct DrawMeshTasksIndirectCommandNV
  {
    VULKAN_HPP_CONSTEXPR DrawMeshTasksIndirectCommandNV( uint32_t taskCount_ = {},
                                                         uint32_t firstTask_ = {} ) VULKAN_HPP_NOEXCEPT
      : taskCount( taskCount_ )
      , firstTask( firstTask_ )
    {}

    VULKAN_HPP_CONSTEXPR DrawMeshTasksIndirectCommandNV( DrawMeshTasksIndirectCommandNV const& rhs ) VULKAN_HPP_NOEXCEPT
      : taskCount( rhs.taskCount )
      , firstTask( rhs.firstTask )
    {}

    DrawMeshTasksIndirectCommandNV & operator=( DrawMeshTasksIndirectCommandNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( DrawMeshTasksIndirectCommandNV ) );
      return *this;
    }

    DrawMeshTasksIndirectCommandNV( VkDrawMeshTasksIndirectCommandNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    DrawMeshTasksIndirectCommandNV& operator=( VkDrawMeshTasksIndirectCommandNV const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::DrawMeshTasksIndirectCommandNV const *>(&rhs);
      return *this;
    }

    DrawMeshTasksIndirectCommandNV & setTaskCount( uint32_t taskCount_ ) VULKAN_HPP_NOEXCEPT
    {
      taskCount = taskCount_;
      return *this;
    }

    DrawMeshTasksIndirectCommandNV & setFirstTask( uint32_t firstTask_ ) VULKAN_HPP_NOEXCEPT
    {
      firstTask = firstTask_;
      return *this;
    }

    operator VkDrawMeshTasksIndirectCommandNV const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkDrawMeshTasksIndirectCommandNV*>( this );
    }

    operator VkDrawMeshTasksIndirectCommandNV &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkDrawMeshTasksIndirectCommandNV*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( DrawMeshTasksIndirectCommandNV const& ) const = default;
#else
    bool operator==( DrawMeshTasksIndirectCommandNV const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( taskCount == rhs.taskCount )
          && ( firstTask == rhs.firstTask );
    }

    bool operator!=( DrawMeshTasksIndirectCommandNV const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t taskCount = {};
    uint32_t firstTask = {};
  };
  static_assert( sizeof( DrawMeshTasksIndirectCommandNV ) == sizeof( VkDrawMeshTasksIndirectCommandNV ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<DrawMeshTasksIndirectCommandNV>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE
