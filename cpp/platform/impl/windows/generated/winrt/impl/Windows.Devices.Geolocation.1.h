// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Devices_Geolocation_1_H
#define WINRT_Windows_Devices_Geolocation_1_H
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation
{
    struct __declspec(empty_bases) ICivicAddress :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICivicAddress>
    {
        ICivicAddress(std::nullptr_t = nullptr) noexcept {}
        ICivicAddress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ICivicAddress(ICivicAddress const&) noexcept = default;
        ICivicAddress(ICivicAddress&&) noexcept = default;
        ICivicAddress& operator=(ICivicAddress const&) & noexcept = default;
        ICivicAddress& operator=(ICivicAddress&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeoboundingBox :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeoboundingBox>,
        impl::require<winrt::Windows::Devices::Geolocation::IGeoboundingBox, winrt::Windows::Devices::Geolocation::IGeoshape>
    {
        IGeoboundingBox(std::nullptr_t = nullptr) noexcept {}
        IGeoboundingBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeoboundingBox(IGeoboundingBox const&) noexcept = default;
        IGeoboundingBox(IGeoboundingBox&&) noexcept = default;
        IGeoboundingBox& operator=(IGeoboundingBox const&) & noexcept = default;
        IGeoboundingBox& operator=(IGeoboundingBox&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeoboundingBoxFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeoboundingBoxFactory>
    {
        IGeoboundingBoxFactory(std::nullptr_t = nullptr) noexcept {}
        IGeoboundingBoxFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeoboundingBoxFactory(IGeoboundingBoxFactory const&) noexcept = default;
        IGeoboundingBoxFactory(IGeoboundingBoxFactory&&) noexcept = default;
        IGeoboundingBoxFactory& operator=(IGeoboundingBoxFactory const&) & noexcept = default;
        IGeoboundingBoxFactory& operator=(IGeoboundingBoxFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeoboundingBoxStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeoboundingBoxStatics>
    {
        IGeoboundingBoxStatics(std::nullptr_t = nullptr) noexcept {}
        IGeoboundingBoxStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeoboundingBoxStatics(IGeoboundingBoxStatics const&) noexcept = default;
        IGeoboundingBoxStatics(IGeoboundingBoxStatics&&) noexcept = default;
        IGeoboundingBoxStatics& operator=(IGeoboundingBoxStatics const&) & noexcept = default;
        IGeoboundingBoxStatics& operator=(IGeoboundingBoxStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeocircle :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeocircle>,
        impl::require<winrt::Windows::Devices::Geolocation::IGeocircle, winrt::Windows::Devices::Geolocation::IGeoshape>
    {
        IGeocircle(std::nullptr_t = nullptr) noexcept {}
        IGeocircle(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeocircle(IGeocircle const&) noexcept = default;
        IGeocircle(IGeocircle&&) noexcept = default;
        IGeocircle& operator=(IGeocircle const&) & noexcept = default;
        IGeocircle& operator=(IGeocircle&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeocircleFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeocircleFactory>
    {
        IGeocircleFactory(std::nullptr_t = nullptr) noexcept {}
        IGeocircleFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeocircleFactory(IGeocircleFactory const&) noexcept = default;
        IGeocircleFactory(IGeocircleFactory&&) noexcept = default;
        IGeocircleFactory& operator=(IGeocircleFactory const&) & noexcept = default;
        IGeocircleFactory& operator=(IGeocircleFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeocoordinate :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinate>
    {
        IGeocoordinate(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeocoordinate(IGeocoordinate const&) noexcept = default;
        IGeocoordinate(IGeocoordinate&&) noexcept = default;
        IGeocoordinate& operator=(IGeocoordinate const&) & noexcept = default;
        IGeocoordinate& operator=(IGeocoordinate&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeocoordinateSatelliteData :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinateSatelliteData>
    {
        IGeocoordinateSatelliteData(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinateSatelliteData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeocoordinateSatelliteData(IGeocoordinateSatelliteData const&) noexcept = default;
        IGeocoordinateSatelliteData(IGeocoordinateSatelliteData&&) noexcept = default;
        IGeocoordinateSatelliteData& operator=(IGeocoordinateSatelliteData const&) & noexcept = default;
        IGeocoordinateSatelliteData& operator=(IGeocoordinateSatelliteData&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeocoordinateWithPoint :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinateWithPoint>
    {
        IGeocoordinateWithPoint(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinateWithPoint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeocoordinateWithPoint(IGeocoordinateWithPoint const&) noexcept = default;
        IGeocoordinateWithPoint(IGeocoordinateWithPoint&&) noexcept = default;
        IGeocoordinateWithPoint& operator=(IGeocoordinateWithPoint const&) & noexcept = default;
        IGeocoordinateWithPoint& operator=(IGeocoordinateWithPoint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeocoordinateWithPositionData :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinateWithPositionData>,
        impl::require<winrt::Windows::Devices::Geolocation::IGeocoordinateWithPositionData, winrt::Windows::Devices::Geolocation::IGeocoordinate>
    {
        IGeocoordinateWithPositionData(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinateWithPositionData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeocoordinateWithPositionData(IGeocoordinateWithPositionData const&) noexcept = default;
        IGeocoordinateWithPositionData(IGeocoordinateWithPositionData&&) noexcept = default;
        IGeocoordinateWithPositionData& operator=(IGeocoordinateWithPositionData const&) & noexcept = default;
        IGeocoordinateWithPositionData& operator=(IGeocoordinateWithPositionData&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeocoordinateWithPositionSourceTimestamp :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeocoordinateWithPositionSourceTimestamp>
    {
        IGeocoordinateWithPositionSourceTimestamp(std::nullptr_t = nullptr) noexcept {}
        IGeocoordinateWithPositionSourceTimestamp(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeocoordinateWithPositionSourceTimestamp(IGeocoordinateWithPositionSourceTimestamp const&) noexcept = default;
        IGeocoordinateWithPositionSourceTimestamp(IGeocoordinateWithPositionSourceTimestamp&&) noexcept = default;
        IGeocoordinateWithPositionSourceTimestamp& operator=(IGeocoordinateWithPositionSourceTimestamp const&) & noexcept = default;
        IGeocoordinateWithPositionSourceTimestamp& operator=(IGeocoordinateWithPositionSourceTimestamp&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeolocator :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocator>
    {
        IGeolocator(std::nullptr_t = nullptr) noexcept {}
        IGeolocator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeolocator(IGeolocator const&) noexcept = default;
        IGeolocator(IGeolocator&&) noexcept = default;
        IGeolocator& operator=(IGeolocator const&) & noexcept = default;
        IGeolocator& operator=(IGeolocator&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeolocator2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocator2>
    {
        IGeolocator2(std::nullptr_t = nullptr) noexcept {}
        IGeolocator2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeolocator2(IGeolocator2 const&) noexcept = default;
        IGeolocator2(IGeolocator2&&) noexcept = default;
        IGeolocator2& operator=(IGeolocator2 const&) & noexcept = default;
        IGeolocator2& operator=(IGeolocator2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeolocatorStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocatorStatics>
    {
        IGeolocatorStatics(std::nullptr_t = nullptr) noexcept {}
        IGeolocatorStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeolocatorStatics(IGeolocatorStatics const&) noexcept = default;
        IGeolocatorStatics(IGeolocatorStatics&&) noexcept = default;
        IGeolocatorStatics& operator=(IGeolocatorStatics const&) & noexcept = default;
        IGeolocatorStatics& operator=(IGeolocatorStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeolocatorStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocatorStatics2>
    {
        IGeolocatorStatics2(std::nullptr_t = nullptr) noexcept {}
        IGeolocatorStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeolocatorStatics2(IGeolocatorStatics2 const&) noexcept = default;
        IGeolocatorStatics2(IGeolocatorStatics2&&) noexcept = default;
        IGeolocatorStatics2& operator=(IGeolocatorStatics2 const&) & noexcept = default;
        IGeolocatorStatics2& operator=(IGeolocatorStatics2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeolocatorWithScalarAccuracy :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeolocatorWithScalarAccuracy>,
        impl::require<winrt::Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy, winrt::Windows::Devices::Geolocation::IGeolocator>
    {
        IGeolocatorWithScalarAccuracy(std::nullptr_t = nullptr) noexcept {}
        IGeolocatorWithScalarAccuracy(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeolocatorWithScalarAccuracy(IGeolocatorWithScalarAccuracy const&) noexcept = default;
        IGeolocatorWithScalarAccuracy(IGeolocatorWithScalarAccuracy&&) noexcept = default;
        IGeolocatorWithScalarAccuracy& operator=(IGeolocatorWithScalarAccuracy const&) & noexcept = default;
        IGeolocatorWithScalarAccuracy& operator=(IGeolocatorWithScalarAccuracy&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeopath :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeopath>,
        impl::require<winrt::Windows::Devices::Geolocation::IGeopath, winrt::Windows::Devices::Geolocation::IGeoshape>
    {
        IGeopath(std::nullptr_t = nullptr) noexcept {}
        IGeopath(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeopath(IGeopath const&) noexcept = default;
        IGeopath(IGeopath&&) noexcept = default;
        IGeopath& operator=(IGeopath const&) & noexcept = default;
        IGeopath& operator=(IGeopath&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeopathFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeopathFactory>
    {
        IGeopathFactory(std::nullptr_t = nullptr) noexcept {}
        IGeopathFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeopathFactory(IGeopathFactory const&) noexcept = default;
        IGeopathFactory(IGeopathFactory&&) noexcept = default;
        IGeopathFactory& operator=(IGeopathFactory const&) & noexcept = default;
        IGeopathFactory& operator=(IGeopathFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeopoint :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeopoint>,
        impl::require<winrt::Windows::Devices::Geolocation::IGeopoint, winrt::Windows::Devices::Geolocation::IGeoshape>
    {
        IGeopoint(std::nullptr_t = nullptr) noexcept {}
        IGeopoint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeopoint(IGeopoint const&) noexcept = default;
        IGeopoint(IGeopoint&&) noexcept = default;
        IGeopoint& operator=(IGeopoint const&) & noexcept = default;
        IGeopoint& operator=(IGeopoint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeopointFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeopointFactory>
    {
        IGeopointFactory(std::nullptr_t = nullptr) noexcept {}
        IGeopointFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeopointFactory(IGeopointFactory const&) noexcept = default;
        IGeopointFactory(IGeopointFactory&&) noexcept = default;
        IGeopointFactory& operator=(IGeopointFactory const&) & noexcept = default;
        IGeopointFactory& operator=(IGeopointFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeoposition :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeoposition>
    {
        IGeoposition(std::nullptr_t = nullptr) noexcept {}
        IGeoposition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeoposition(IGeoposition const&) noexcept = default;
        IGeoposition(IGeoposition&&) noexcept = default;
        IGeoposition& operator=(IGeoposition const&) & noexcept = default;
        IGeoposition& operator=(IGeoposition&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeoposition2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeoposition2>,
        impl::require<winrt::Windows::Devices::Geolocation::IGeoposition2, winrt::Windows::Devices::Geolocation::IGeoposition>
    {
        IGeoposition2(std::nullptr_t = nullptr) noexcept {}
        IGeoposition2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeoposition2(IGeoposition2 const&) noexcept = default;
        IGeoposition2(IGeoposition2&&) noexcept = default;
        IGeoposition2& operator=(IGeoposition2 const&) & noexcept = default;
        IGeoposition2& operator=(IGeoposition2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeoshape :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeoshape>
    {
        IGeoshape(std::nullptr_t = nullptr) noexcept {}
        IGeoshape(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeoshape(IGeoshape const&) noexcept = default;
        IGeoshape(IGeoshape&&) noexcept = default;
        IGeoshape& operator=(IGeoshape const&) & noexcept = default;
        IGeoshape& operator=(IGeoshape&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeovisit :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisit>
    {
        IGeovisit(std::nullptr_t = nullptr) noexcept {}
        IGeovisit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeovisit(IGeovisit const&) noexcept = default;
        IGeovisit(IGeovisit&&) noexcept = default;
        IGeovisit& operator=(IGeovisit const&) & noexcept = default;
        IGeovisit& operator=(IGeovisit&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeovisitMonitor :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitMonitor>
    {
        IGeovisitMonitor(std::nullptr_t = nullptr) noexcept {}
        IGeovisitMonitor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeovisitMonitor(IGeovisitMonitor const&) noexcept = default;
        IGeovisitMonitor(IGeovisitMonitor&&) noexcept = default;
        IGeovisitMonitor& operator=(IGeovisitMonitor const&) & noexcept = default;
        IGeovisitMonitor& operator=(IGeovisitMonitor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeovisitMonitorStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitMonitorStatics>
    {
        IGeovisitMonitorStatics(std::nullptr_t = nullptr) noexcept {}
        IGeovisitMonitorStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeovisitMonitorStatics(IGeovisitMonitorStatics const&) noexcept = default;
        IGeovisitMonitorStatics(IGeovisitMonitorStatics&&) noexcept = default;
        IGeovisitMonitorStatics& operator=(IGeovisitMonitorStatics const&) & noexcept = default;
        IGeovisitMonitorStatics& operator=(IGeovisitMonitorStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeovisitStateChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitStateChangedEventArgs>
    {
        IGeovisitStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IGeovisitStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeovisitStateChangedEventArgs(IGeovisitStateChangedEventArgs const&) noexcept = default;
        IGeovisitStateChangedEventArgs(IGeovisitStateChangedEventArgs&&) noexcept = default;
        IGeovisitStateChangedEventArgs& operator=(IGeovisitStateChangedEventArgs const&) & noexcept = default;
        IGeovisitStateChangedEventArgs& operator=(IGeovisitStateChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IGeovisitTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IGeovisitTriggerDetails>
    {
        IGeovisitTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IGeovisitTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IGeovisitTriggerDetails(IGeovisitTriggerDetails const&) noexcept = default;
        IGeovisitTriggerDetails(IGeovisitTriggerDetails&&) noexcept = default;
        IGeovisitTriggerDetails& operator=(IGeovisitTriggerDetails const&) & noexcept = default;
        IGeovisitTriggerDetails& operator=(IGeovisitTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPositionChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPositionChangedEventArgs>
    {
        IPositionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPositionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPositionChangedEventArgs(IPositionChangedEventArgs const&) noexcept = default;
        IPositionChangedEventArgs(IPositionChangedEventArgs&&) noexcept = default;
        IPositionChangedEventArgs& operator=(IPositionChangedEventArgs const&) & noexcept = default;
        IPositionChangedEventArgs& operator=(IPositionChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IStatusChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStatusChangedEventArgs>
    {
        IStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IStatusChangedEventArgs(IStatusChangedEventArgs const&) noexcept = default;
        IStatusChangedEventArgs(IStatusChangedEventArgs&&) noexcept = default;
        IStatusChangedEventArgs& operator=(IStatusChangedEventArgs const&) & noexcept = default;
        IStatusChangedEventArgs& operator=(IStatusChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVenueData :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVenueData>
    {
        IVenueData(std::nullptr_t = nullptr) noexcept {}
        IVenueData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVenueData(IVenueData const&) noexcept = default;
        IVenueData(IVenueData&&) noexcept = default;
        IVenueData& operator=(IVenueData const&) & noexcept = default;
        IVenueData& operator=(IVenueData&&) & noexcept = default;
    };
}
#endif