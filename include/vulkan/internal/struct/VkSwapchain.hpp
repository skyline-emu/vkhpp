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
#include "VkSparse.hpp"
#include "VkSpecialization.hpp"
#include "VkStencil.hpp"
#include "VkSubmit.hpp"
#include "VkSubpass.hpp"
#include "VkSurface.hpp"
#include "VkSwapchain.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct SwapchainCounterCreateInfoEXT
  {
    VULKAN_HPP_CONSTEXPR SwapchainCounterCreateInfoEXT( VULKAN_HPP_NAMESPACE::SurfaceCounterFlagsEXT surfaceCounters_ = {} ) VULKAN_HPP_NOEXCEPT
      : surfaceCounters( surfaceCounters_ )
    {}

    VULKAN_HPP_CONSTEXPR SwapchainCounterCreateInfoEXT( SwapchainCounterCreateInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , surfaceCounters( rhs.surfaceCounters )
    {}

    SwapchainCounterCreateInfoEXT & operator=( SwapchainCounterCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SwapchainCounterCreateInfoEXT ) - offsetof( SwapchainCounterCreateInfoEXT, pNext ) );
      return *this;
    }

    SwapchainCounterCreateInfoEXT( VkSwapchainCounterCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SwapchainCounterCreateInfoEXT& operator=( VkSwapchainCounterCreateInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SwapchainCounterCreateInfoEXT const *>(&rhs);
      return *this;
    }

    SwapchainCounterCreateInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    SwapchainCounterCreateInfoEXT & setSurfaceCounters( VULKAN_HPP_NAMESPACE::SurfaceCounterFlagsEXT surfaceCounters_ ) VULKAN_HPP_NOEXCEPT
    {
      surfaceCounters = surfaceCounters_;
      return *this;
    }

    operator VkSwapchainCounterCreateInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSwapchainCounterCreateInfoEXT*>( this );
    }

    operator VkSwapchainCounterCreateInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSwapchainCounterCreateInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SwapchainCounterCreateInfoEXT const& ) const = default;
#else
    bool operator==( SwapchainCounterCreateInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( surfaceCounters == rhs.surfaceCounters );
    }

    bool operator!=( SwapchainCounterCreateInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSwapchainCounterCreateInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::SurfaceCounterFlagsEXT surfaceCounters = {};
  };
  static_assert( sizeof( SwapchainCounterCreateInfoEXT ) == sizeof( VkSwapchainCounterCreateInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SwapchainCounterCreateInfoEXT>::value, "struct wrapper is not a standard layout!" );

  struct SwapchainCreateInfoKHR
  {
    VULKAN_HPP_CONSTEXPR SwapchainCreateInfoKHR( VULKAN_HPP_NAMESPACE::SwapchainCreateFlagsKHR flags_ = {},
                                                 VULKAN_HPP_NAMESPACE::SurfaceKHR surface_ = {},
                                                 uint32_t minImageCount_ = {},
                                                 VULKAN_HPP_NAMESPACE::Format imageFormat_ = VULKAN_HPP_NAMESPACE::Format::eUndefined,
                                                 VULKAN_HPP_NAMESPACE::ColorSpaceKHR imageColorSpace_ = VULKAN_HPP_NAMESPACE::ColorSpaceKHR::eSrgbNonlinear,
                                                 VULKAN_HPP_NAMESPACE::Extent2D imageExtent_ = {},
                                                 uint32_t imageArrayLayers_ = {},
                                                 VULKAN_HPP_NAMESPACE::ImageUsageFlags imageUsage_ = {},
                                                 VULKAN_HPP_NAMESPACE::SharingMode imageSharingMode_ = VULKAN_HPP_NAMESPACE::SharingMode::eExclusive,
                                                 uint32_t queueFamilyIndexCount_ = {},
                                                 const uint32_t* pQueueFamilyIndices_ = {},
                                                 VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR preTransform_ = VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR::eIdentity,
                                                 VULKAN_HPP_NAMESPACE::CompositeAlphaFlagBitsKHR compositeAlpha_ = VULKAN_HPP_NAMESPACE::CompositeAlphaFlagBitsKHR::eOpaque,
                                                 VULKAN_HPP_NAMESPACE::PresentModeKHR presentMode_ = VULKAN_HPP_NAMESPACE::PresentModeKHR::eImmediate,
                                                 VULKAN_HPP_NAMESPACE::Bool32 clipped_ = {},
                                                 VULKAN_HPP_NAMESPACE::SwapchainKHR oldSwapchain_ = {} ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , surface( surface_ )
      , minImageCount( minImageCount_ )
      , imageFormat( imageFormat_ )
      , imageColorSpace( imageColorSpace_ )
      , imageExtent( imageExtent_ )
      , imageArrayLayers( imageArrayLayers_ )
      , imageUsage( imageUsage_ )
      , imageSharingMode( imageSharingMode_ )
      , queueFamilyIndexCount( queueFamilyIndexCount_ )
      , pQueueFamilyIndices( pQueueFamilyIndices_ )
      , preTransform( preTransform_ )
      , compositeAlpha( compositeAlpha_ )
      , presentMode( presentMode_ )
      , clipped( clipped_ )
      , oldSwapchain( oldSwapchain_ )
    {}

    VULKAN_HPP_CONSTEXPR SwapchainCreateInfoKHR( SwapchainCreateInfoKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
      , surface( rhs.surface )
      , minImageCount( rhs.minImageCount )
      , imageFormat( rhs.imageFormat )
      , imageColorSpace( rhs.imageColorSpace )
      , imageExtent( rhs.imageExtent )
      , imageArrayLayers( rhs.imageArrayLayers )
      , imageUsage( rhs.imageUsage )
      , imageSharingMode( rhs.imageSharingMode )
      , queueFamilyIndexCount( rhs.queueFamilyIndexCount )
      , pQueueFamilyIndices( rhs.pQueueFamilyIndices )
      , preTransform( rhs.preTransform )
      , compositeAlpha( rhs.compositeAlpha )
      , presentMode( rhs.presentMode )
      , clipped( rhs.clipped )
      , oldSwapchain( rhs.oldSwapchain )
    {}

    SwapchainCreateInfoKHR & operator=( SwapchainCreateInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SwapchainCreateInfoKHR ) - offsetof( SwapchainCreateInfoKHR, pNext ) );
      return *this;
    }

    SwapchainCreateInfoKHR( VkSwapchainCreateInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SwapchainCreateInfoKHR& operator=( VkSwapchainCreateInfoKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR const *>(&rhs);
      return *this;
    }

    SwapchainCreateInfoKHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    SwapchainCreateInfoKHR & setFlags( VULKAN_HPP_NAMESPACE::SwapchainCreateFlagsKHR flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    SwapchainCreateInfoKHR & setSurface( VULKAN_HPP_NAMESPACE::SurfaceKHR surface_ ) VULKAN_HPP_NOEXCEPT
    {
      surface = surface_;
      return *this;
    }

    SwapchainCreateInfoKHR & setMinImageCount( uint32_t minImageCount_ ) VULKAN_HPP_NOEXCEPT
    {
      minImageCount = minImageCount_;
      return *this;
    }

    SwapchainCreateInfoKHR & setImageFormat( VULKAN_HPP_NAMESPACE::Format imageFormat_ ) VULKAN_HPP_NOEXCEPT
    {
      imageFormat = imageFormat_;
      return *this;
    }

    SwapchainCreateInfoKHR & setImageColorSpace( VULKAN_HPP_NAMESPACE::ColorSpaceKHR imageColorSpace_ ) VULKAN_HPP_NOEXCEPT
    {
      imageColorSpace = imageColorSpace_;
      return *this;
    }

    SwapchainCreateInfoKHR & setImageExtent( VULKAN_HPP_NAMESPACE::Extent2D imageExtent_ ) VULKAN_HPP_NOEXCEPT
    {
      imageExtent = imageExtent_;
      return *this;
    }

    SwapchainCreateInfoKHR & setImageArrayLayers( uint32_t imageArrayLayers_ ) VULKAN_HPP_NOEXCEPT
    {
      imageArrayLayers = imageArrayLayers_;
      return *this;
    }

    SwapchainCreateInfoKHR & setImageUsage( VULKAN_HPP_NAMESPACE::ImageUsageFlags imageUsage_ ) VULKAN_HPP_NOEXCEPT
    {
      imageUsage = imageUsage_;
      return *this;
    }

    SwapchainCreateInfoKHR & setImageSharingMode( VULKAN_HPP_NAMESPACE::SharingMode imageSharingMode_ ) VULKAN_HPP_NOEXCEPT
    {
      imageSharingMode = imageSharingMode_;
      return *this;
    }

    SwapchainCreateInfoKHR & setQueueFamilyIndexCount( uint32_t queueFamilyIndexCount_ ) VULKAN_HPP_NOEXCEPT
    {
      queueFamilyIndexCount = queueFamilyIndexCount_;
      return *this;
    }

    SwapchainCreateInfoKHR & setPQueueFamilyIndices( const uint32_t* pQueueFamilyIndices_ ) VULKAN_HPP_NOEXCEPT
    {
      pQueueFamilyIndices = pQueueFamilyIndices_;
      return *this;
    }

    SwapchainCreateInfoKHR & setPreTransform( VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR preTransform_ ) VULKAN_HPP_NOEXCEPT
    {
      preTransform = preTransform_;
      return *this;
    }

    SwapchainCreateInfoKHR & setCompositeAlpha( VULKAN_HPP_NAMESPACE::CompositeAlphaFlagBitsKHR compositeAlpha_ ) VULKAN_HPP_NOEXCEPT
    {
      compositeAlpha = compositeAlpha_;
      return *this;
    }

    SwapchainCreateInfoKHR & setPresentMode( VULKAN_HPP_NAMESPACE::PresentModeKHR presentMode_ ) VULKAN_HPP_NOEXCEPT
    {
      presentMode = presentMode_;
      return *this;
    }

    SwapchainCreateInfoKHR & setClipped( VULKAN_HPP_NAMESPACE::Bool32 clipped_ ) VULKAN_HPP_NOEXCEPT
    {
      clipped = clipped_;
      return *this;
    }

    SwapchainCreateInfoKHR & setOldSwapchain( VULKAN_HPP_NAMESPACE::SwapchainKHR oldSwapchain_ ) VULKAN_HPP_NOEXCEPT
    {
      oldSwapchain = oldSwapchain_;
      return *this;
    }

    operator VkSwapchainCreateInfoKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSwapchainCreateInfoKHR*>( this );
    }

    operator VkSwapchainCreateInfoKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSwapchainCreateInfoKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SwapchainCreateInfoKHR const& ) const = default;
#else
    bool operator==( SwapchainCreateInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags )
          && ( surface == rhs.surface )
          && ( minImageCount == rhs.minImageCount )
          && ( imageFormat == rhs.imageFormat )
          && ( imageColorSpace == rhs.imageColorSpace )
          && ( imageExtent == rhs.imageExtent )
          && ( imageArrayLayers == rhs.imageArrayLayers )
          && ( imageUsage == rhs.imageUsage )
          && ( imageSharingMode == rhs.imageSharingMode )
          && ( queueFamilyIndexCount == rhs.queueFamilyIndexCount )
          && ( pQueueFamilyIndices == rhs.pQueueFamilyIndices )
          && ( preTransform == rhs.preTransform )
          && ( compositeAlpha == rhs.compositeAlpha )
          && ( presentMode == rhs.presentMode )
          && ( clipped == rhs.clipped )
          && ( oldSwapchain == rhs.oldSwapchain );
    }

    bool operator!=( SwapchainCreateInfoKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSwapchainCreateInfoKHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::SwapchainCreateFlagsKHR flags = {};
    VULKAN_HPP_NAMESPACE::SurfaceKHR surface = {};
    uint32_t minImageCount = {};
    VULKAN_HPP_NAMESPACE::Format imageFormat = VULKAN_HPP_NAMESPACE::Format::eUndefined;
    VULKAN_HPP_NAMESPACE::ColorSpaceKHR imageColorSpace = VULKAN_HPP_NAMESPACE::ColorSpaceKHR::eSrgbNonlinear;
    VULKAN_HPP_NAMESPACE::Extent2D imageExtent = {};
    uint32_t imageArrayLayers = {};
    VULKAN_HPP_NAMESPACE::ImageUsageFlags imageUsage = {};
    VULKAN_HPP_NAMESPACE::SharingMode imageSharingMode = VULKAN_HPP_NAMESPACE::SharingMode::eExclusive;
    uint32_t queueFamilyIndexCount = {};
    const uint32_t* pQueueFamilyIndices = {};
    VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR preTransform = VULKAN_HPP_NAMESPACE::SurfaceTransformFlagBitsKHR::eIdentity;
    VULKAN_HPP_NAMESPACE::CompositeAlphaFlagBitsKHR compositeAlpha = VULKAN_HPP_NAMESPACE::CompositeAlphaFlagBitsKHR::eOpaque;
    VULKAN_HPP_NAMESPACE::PresentModeKHR presentMode = VULKAN_HPP_NAMESPACE::PresentModeKHR::eImmediate;
    VULKAN_HPP_NAMESPACE::Bool32 clipped = {};
    VULKAN_HPP_NAMESPACE::SwapchainKHR oldSwapchain = {};
  };
  static_assert( sizeof( SwapchainCreateInfoKHR ) == sizeof( VkSwapchainCreateInfoKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SwapchainCreateInfoKHR>::value, "struct wrapper is not a standard layout!" );

  struct SwapchainDisplayNativeHdrCreateInfoAMD
  {
    VULKAN_HPP_CONSTEXPR SwapchainDisplayNativeHdrCreateInfoAMD( VULKAN_HPP_NAMESPACE::Bool32 localDimmingEnable_ = {} ) VULKAN_HPP_NOEXCEPT
      : localDimmingEnable( localDimmingEnable_ )
    {}

    VULKAN_HPP_CONSTEXPR SwapchainDisplayNativeHdrCreateInfoAMD( SwapchainDisplayNativeHdrCreateInfoAMD const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , localDimmingEnable( rhs.localDimmingEnable )
    {}

    SwapchainDisplayNativeHdrCreateInfoAMD & operator=( SwapchainDisplayNativeHdrCreateInfoAMD const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SwapchainDisplayNativeHdrCreateInfoAMD ) - offsetof( SwapchainDisplayNativeHdrCreateInfoAMD, pNext ) );
      return *this;
    }

    SwapchainDisplayNativeHdrCreateInfoAMD( VkSwapchainDisplayNativeHdrCreateInfoAMD const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SwapchainDisplayNativeHdrCreateInfoAMD& operator=( VkSwapchainDisplayNativeHdrCreateInfoAMD const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SwapchainDisplayNativeHdrCreateInfoAMD const *>(&rhs);
      return *this;
    }

    SwapchainDisplayNativeHdrCreateInfoAMD & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    SwapchainDisplayNativeHdrCreateInfoAMD & setLocalDimmingEnable( VULKAN_HPP_NAMESPACE::Bool32 localDimmingEnable_ ) VULKAN_HPP_NOEXCEPT
    {
      localDimmingEnable = localDimmingEnable_;
      return *this;
    }

    operator VkSwapchainDisplayNativeHdrCreateInfoAMD const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSwapchainDisplayNativeHdrCreateInfoAMD*>( this );
    }

    operator VkSwapchainDisplayNativeHdrCreateInfoAMD &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSwapchainDisplayNativeHdrCreateInfoAMD*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SwapchainDisplayNativeHdrCreateInfoAMD const& ) const = default;
#else
    bool operator==( SwapchainDisplayNativeHdrCreateInfoAMD const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( localDimmingEnable == rhs.localDimmingEnable );
    }

    bool operator!=( SwapchainDisplayNativeHdrCreateInfoAMD const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSwapchainDisplayNativeHdrCreateInfoAMD;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::Bool32 localDimmingEnable = {};
  };
  static_assert( sizeof( SwapchainDisplayNativeHdrCreateInfoAMD ) == sizeof( VkSwapchainDisplayNativeHdrCreateInfoAMD ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SwapchainDisplayNativeHdrCreateInfoAMD>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE
