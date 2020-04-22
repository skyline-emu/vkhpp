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
#include "VkInitialize.hpp"
#include "VkAllocation.hpp"
#include "VkExternal.hpp"
#include "VkBind.hpp"
#include "VkObject.hpp"
#include "VkCooperative.hpp"
#include "VkAndroid.hpp"
#include "VkImport.hpp"
#include "VkImage.hpp"
#include "VkDescriptor.hpp"
#include "VkBase.hpp"
#include "VkAttachment.hpp"
#include "VkBuffer.hpp"
#include "VkFramebuffer.hpp"
#include "VkCalibrated.hpp"
#include "VkDevice.hpp"
#include "VkSubresource.hpp"
#include "VkCheckpoint.hpp"
#include "VkConformance.hpp"
#include "VkClear.hpp"
#include "VkStream.hpp"
#include "VkCmd.hpp"
#include "VkCoarse.hpp"
#include "VkExtension.hpp"
#include "VkCommand.hpp"
#include "VkFormat.hpp"
#include "VkMetal.hpp"
#include "VkComponent.hpp"
#include "VkCopy.hpp"
#include "VkCompute.hpp"
#include "VkPast.hpp"
#include "VkConditional.hpp"
#include "VkMapped.hpp"
#include "VkD3D.hpp"
#include "VkDebug.hpp"
#include "VkDedicated.hpp"
#include "VkFence.hpp"
#include "VkDispatch.hpp"
#include "VkPipeline.hpp"
#include "VkViewport.hpp"
#include "VkDraw.hpp"
#include "VkDisplay.hpp"
#include "VkDrm.hpp"
#include "VkEvent.hpp"
#include "VkExport.hpp"
#include "VkRay.hpp"
#include "VkExtent.hpp"
#include "VkPerformance.hpp"
#include "VkFilter.hpp"
#include "VkRender.hpp"
#include "VkGeometry.hpp"
#include "VkGraphics.hpp"
#include "VkHdr.hpp"
#include "VkHeadless.hpp"
#include "VkMultisample.hpp"
#include "VkI.hpp"
#include "VkIndirect.hpp"
#include "VkInput.hpp"
#include "VkOffset.hpp"
#include "VkMemory.hpp"
#include "VkInstance.hpp"
#include "VkLayer.hpp"
#include "VkMac.hpp"
#include "VkPhysical.hpp"
#include "VkPresent.hpp"
#include "VkProtected.hpp"
#include "VkPush.hpp"
#include "VkQuery.hpp"
#include "VkQueue.hpp"
#include "VkRect.hpp"
#include "VkRefresh.hpp"
#include "VkSample.hpp"
#include "VkSampler.hpp"
#include "VkSemaphore.hpp"
#include "VkShader.hpp"
#include "VkShading.hpp"
#include "VkShared.hpp"
#include "VkSwapchain.hpp"
#include "VkSparse.hpp"
#include "VkSpecialization.hpp"
#include "VkStencil.hpp"
#include "VkSubmit.hpp"
#include "VkSubpass.hpp"
#include "VkSurface.hpp"
#include "VkTexture.hpp"
#include "VkValidation.hpp"
#include "VkVertex.hpp"
#include "VkVi.hpp"

namespace VULKAN_HPP_NAMESPACE
{
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  struct WaylandSurfaceCreateInfoKHR
  {
    VULKAN_HPP_CONSTEXPR WaylandSurfaceCreateInfoKHR( VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateFlagsKHR flags_ = {},
                                                      struct wl_display* display_ = {},
                                                      struct wl_surface* surface_ = {} ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , display( display_ )
      , surface( surface_ )
    {}

    VULKAN_HPP_CONSTEXPR WaylandSurfaceCreateInfoKHR( WaylandSurfaceCreateInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
      , display( rhs.display )
      , surface( rhs.surface )
    {}

    WaylandSurfaceCreateInfoKHR & operator=( WaylandSurfaceCreateInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( WaylandSurfaceCreateInfoKHR ) - offsetof( WaylandSurfaceCreateInfoKHR, pNext ) );
      return *this;
    }

    WaylandSurfaceCreateInfoKHR( VkWaylandSurfaceCreateInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    WaylandSurfaceCreateInfoKHR& operator=( VkWaylandSurfaceCreateInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateInfoKHR const *>(&rhs);
      return *this;
    }

    WaylandSurfaceCreateInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    WaylandSurfaceCreateInfoKHR & setFlags( VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateFlagsKHR flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    WaylandSurfaceCreateInfoKHR & setDisplay( struct wl_display* display_ ) VULKAN_HPP_NOEXCEPT
    {
      display = display_;
      return *this;
    }

    WaylandSurfaceCreateInfoKHR & setSurface( struct wl_surface* surface_ ) VULKAN_HPP_NOEXCEPT
    {
      surface = surface_;
      return *this;
    }

    operator VkWaylandSurfaceCreateInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkWaylandSurfaceCreateInfoKHR*>( this );
    }

    operator VkWaylandSurfaceCreateInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkWaylandSurfaceCreateInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( WaylandSurfaceCreateInfoKHR const& ) const = default;
#else
    bool operator==( WaylandSurfaceCreateInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags )
          && ( display == rhs.display )
          && ( surface == rhs.surface );
    }

    bool operator!=( WaylandSurfaceCreateInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eWaylandSurfaceCreateInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateFlagsKHR flags = {};
    struct wl_display* display = {};
    struct wl_surface* surface = {};
  };
  static_assert( sizeof( WaylandSurfaceCreateInfoKHR ) == sizeof( VkWaylandSurfaceCreateInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<WaylandSurfaceCreateInfoKHR>::value, "struct wrapper is not a standard layout!" );
#endif /*VK_USE_PLATFORM_WAYLAND_KHR*/
} // namespace VULKAN_HPP_NAMESPACE
